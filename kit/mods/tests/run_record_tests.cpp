// run_record_tests.cpp - that mods_run_record_capture_payload can be called
// from anywhere without harming the process that called it.
//
// The record's CONTENT is covered by tools/recomp/mods_test.sh and by Gate B,
// which read a real run's record. What is covered here is the property those
// cannot see: the capture walks a directory a mod author controls, and a mod
// author is free to put a symlink cycle, a named pipe or a hundred nested
// directories in it. Each of the cases below took the process down or hung it
// before, and each is silent about it in a record that never gets written.
#include "mods_tests.h"
#include "../../platform/os.h"
#ifndef _WIN32
#include <sys/stat.h> // mkfifo, POSIX-only check
#include <unistd.h>   // symlink, POSIX-only check
#endif
#include "../mods_internal.h"

#include <condition_variable>
#include <pthread.h>
#include <chrono>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

namespace {

std::string make_dir(const char *suite, const char *leaf) {
    std::string p = std::string(mod_test_dir(suite)) + "/" + leaf;
    os_mkdir(p.c_str());
    return p;
}

void write_file(const std::string &path, const char *text) {
    FILE *f = fopen(path.c_str(), "wb");
    if (f) {
        fputs(text, f);
        fclose(f);
    }
}

// Runs `body` on its own thread and answers whether it finished in time. A
// capture that blocks is not a slow capture, it is a capture that never
// returns, and without a deadline the suite would simply stop with no output
// naming what stopped it.
bool finishes_within(int seconds, void (*body)(const std::string &), const std::string &arg) {
    std::mutex m;
    std::condition_variable cv;
    bool done = false;
    std::thread t([&] {
        body(arg);
        {
            std::lock_guard<std::mutex> g(m);
            done = true;
        }
        cv.notify_one();
    });
    std::unique_lock<std::mutex> lk(m);
    bool ok = cv.wait_for(lk, std::chrono::seconds(seconds), [&] { return done; });
    lk.unlock();
    if (ok)
        t.join();
    else
        t.detach(); // a wedged walk must not wedge the run
    return ok;
}

void capture(const std::string &dir) {
    mods_run_record_capture_payload(dir.c_str());
}

} // namespace

// The record's directory need not exist: the host names it under its state
// directory, which a game repository without mods has never created.
MOD_TEST_SUITE(run_record_makes_its_directory) {
    std::string d = make_dir("run_record", "nested");
    std::string path = d + "/deeper/run.json";
    MOD_CHECK(mods_write_run_record(path.c_str()));
    OsStat st;
    MOD_CHECK(os_stat(path.c_str(), &st) == 0 && st.is_regular);
}

MOD_TEST_SUITE(run_record_capture) {
    const char *suite = "run_record";

    // Nothing to capture at all. Neither is a directory, and neither may be
    // treated as one.
    mods_run_record_capture_payload(nullptr);
    mods_run_record_capture_payload("");
    mods_run_record_capture_payload("this/path/does/not/exist");
    mod_test_pass();

    // An ordinary pack: a manifest, a plugin, a nested asset directory.
    {
        std::string d = make_dir(suite, "ordinary");
        write_file(d + "/mod.toml", "[mod]\nid=\"probe\"\n");
        os_mkdir((d + "/assets").c_str());
        write_file(d + "/assets/data.bin", "bytes");
        MOD_CHECK(finishes_within(10, capture, d));
    }

    // A named pipe. The walk used to decide what an entry was by opening it,
    // and fopen on a FIFO blocks until another process opens the write end -
    // so one mkfifo in a mod directory stopped the loader for good. Nothing
    // opens it now; stat says what it is.
    {
        std::string d = make_dir(suite, "fifo");
        write_file(d + "/mod.toml", "[mod]\nid=\"fifo\"\n");
#ifndef _WIN32
        mkfifo((d + "/pipe").c_str(), 0644);
#endif
        MOD_CHECK(finishes_within(10, capture, d));
    }

    // A symlink cycle. Following it is correct - the overlay follows symlinks
    // too, so the identity has to describe what the guest can read - which
    // makes the depth limit, not the link, what ends the walk.
    {
        std::string d = make_dir(suite, "cycle");
        write_file(d + "/mod.toml", "[mod]\nid=\"cycle\"\n");
#ifndef _WIN32
        MOD_CHECK(symlink("..", (d + "/up").c_str()) == 0);
#else
        printf("symlink check skipped on Windows\n");
#endif
        MOD_CHECK(finishes_within(10, capture, d));
    }

    // Deeper than the limit. It stops and says so rather than recursing until
    // the thread's stack runs out.
    {
        std::string d = make_dir(suite, "deep");
        std::string p = d;
        for (int i = 0; i < 80; ++i) {
            p += "/d";
            os_mkdir(p.c_str());
        }
        write_file(p + "/leaf", "x");
        MOD_CHECK(finishes_within(10, capture, d));
    }

    // Eight threads capturing at once. The map behind this is shared, and
    // without a lock two callers tear its nodes: ThreadSanitizer reports the
    // race directly, and an untorn map is the only reason the record that
    // follows names anything at all.
    {
        std::string d = make_dir(suite, "concurrent");
        write_file(d + "/mod.toml", "[mod]\nid=\"concurrent\"\n");
        write_file(d + "/payload.bin", "0123456789");
        std::vector<std::thread> ts;
        for (int i = 0; i < 8; ++i)
            ts.emplace_back([&d] {
                for (int k = 0; k < 200; ++k)
                    mods_run_record_capture_payload(d.c_str());
            });
        for (std::thread &t : ts)
            t.join();
        mod_test_pass();
    }

    // On a 512 KB thread stack, which is smaller than any this host makes.
    // The read buffer inside the recursion was 64 KB once, and a walk that
    // overflows a stack does not fail in the walk.
    {
        std::string d = make_dir(suite, "smallstack");
        write_file(d + "/mod.toml", "[mod]\nid=\"small\"\n");
        std::string p = d;
        for (int i = 0; i < 20; ++i) {
            p += "/d";
            os_mkdir(p.c_str());
        }
        write_file(p + "/leaf", "x");
        pthread_attr_t attr;
        pthread_attr_init(&attr);
        pthread_attr_setstacksize(&attr, 512 * 1024);
        static std::string s_dir;
        s_dir = d;
        pthread_t th;
        MOD_CHECK(pthread_create(
                      &th, &attr,
                      [](void *) -> void * {
                          mods_run_record_capture_payload(s_dir.c_str());
                          return nullptr;
                      },
                      nullptr) == 0);
        pthread_join(th, nullptr);
        pthread_attr_destroy(&attr);
        mod_test_pass();
    }
}
