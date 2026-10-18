/* sample.c - a tiny 32-bit Windows program for two kit experiments.
 *
 * 1. Interpreter speed. bench() runs once as translated code, then again
 *    from a heap copy, which the runtime can only reach through its
 *    interpreter (runtime/interp.cpp). Both must return the same value.
 * 2. A Wine DLL. Wine's own i386 msvcrt.dll is loaded with LoadLibraryA,
 *    which the kit maps and translates as an auxiliary module, and a few of
 *    its exports are called: strlen, atoi, qsort (calling back into this
 *    program) and sprintf.
 *
 * Built with llvm-mingw's i686 clang, without a C runtime (tools/prepare.py).
 * Results go to standard output, one "key value" per line.
 */
#include <windows.h>

/* The benchmark kernel. Kept inside the interpreter's instruction set
 * (32-bit MOV, LEA, ADD/SUB/CMP/AND/OR/XOR, TEST, IMUL, INC/DEC, PUSH/POP,
 * JMP, Jcc, RET) and position independent, so it can run from a heap copy.
 * bench_end marks where its bytes stop. */
__attribute__((section(".bench"), noinline, used)) unsigned __cdecl bench(unsigned n) {
    unsigned h = 2166136261u, x = 1, i;
    for (i = 0; i < n; i++) {
        x = x * 1103515245u + 12345u;
        h = (h ^ x) * 16777619u;
        if (h & 0x100)
            h += i;
        else
            h ^= x + i;
    }
    return h;
}
__attribute__((section(".bench"), noinline, used)) void __cdecl bench_end(void) {}

static HANDLE out;

/* Zero-filled room for game.toml's [hooks] and globals.toml sentinels. */
__attribute__((used)) static char kit_sentinels[0x400];

static void put(const char *s) {
    DWORD n = 0, w;
    while (s[n])
        n++;
    WriteFile(out, s, n, &w, NULL);
}

static void put_u(unsigned v) {
    char b[12];
    int i = 11;
    b[i] = 0;
    do {
        b[--i] = (char)('0' + v % 10);
        v /= 10;
    } while (v);
    put(b + i);
}

static void line(const char *key, unsigned v) {
    put(key);
    put(" ");
    put_u(v);
    put("\n");
}

static int __cdecl cmp_int(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return x < y ? -1 : x > y;
}

typedef unsigned(__cdecl *bench_fn)(unsigned);
typedef size_t(__cdecl *strlen_fn)(const char *);
typedef int(__cdecl *atoi_fn)(const char *);
typedef void(__cdecl *qsort_fn)(void *, size_t, size_t, int(__cdecl *)(const void *, const void *));
typedef int(__cdecl *sprintf_fn)(char *, const char *, ...);

/* The fastest of `rounds` calls. A median or a mean would measure whatever
 * else the machine was doing; the minimum is the run that was left alone.
 *
 * The shape matters as well as the timing: the compiler inlines this into one
 * loop around an indirect call, and translated code once re-entered its own
 * caller through that until the host stack overflowed. That was fixed by the
 * time this became how the sample measures, and this keeps it measured. */
static DWORD fastest(bench_fn fn, unsigned n, int rounds, unsigned *result) {
    /* bench() has no side effects, so a compiler that can see two rounds are
     * the same call keeps the first answer and the rest measure nothing -
     * which is what a 0 ms translated time was. Reading the count back
     * through a volatile leaves it unable to prove that. */
    static volatile unsigned count;
    DWORD best = 0xffffffffu;
    for (int k = 0; k < rounds; k++) {
        count = n;
        DWORD t0 = GetTickCount();
        *result = fn(count);
        DWORD took = GetTickCount() - t0;
        if (took < best)
            best = took;
    }
    return best;
}

static void experiment_interp(unsigned n) {
    unsigned translated = 0, interpreted = 0;
    DWORD in_image = fastest(bench, n, 3, &translated);

    size_t size = (size_t)((char *)&bench_end - (char *)&bench);
    unsigned char *copy =
        VirtualAlloc(NULL, size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    unsigned char *src = (unsigned char *)&bench;
    for (size_t k = 0; k < size; k++)
        copy[k] = src[k];
    DWORD in_heap = fastest((bench_fn)copy, n, 1, &interpreted);

    line("bench.iterations", n);
    line("bench.bytes", (unsigned)size);
    line("bench.translated.result", translated);
    line("bench.translated.ms", in_image);
    line("bench.interpreted.result", interpreted);
    line("bench.interpreted.ms", in_heap);
    line("bench.match", translated == interpreted);
}

static void experiment_msvcrt(void) {
    HMODULE crt = LoadLibraryA("msvcrt.dll");
    line("msvcrt.loaded", crt != NULL);
    if (!crt)
        return;
    strlen_fn my_strlen = (strlen_fn)GetProcAddress(crt, "strlen");
    atoi_fn my_atoi = (atoi_fn)GetProcAddress(crt, "atoi");
    qsort_fn my_qsort = (qsort_fn)GetProcAddress(crt, "qsort");
    sprintf_fn my_sprintf = (sprintf_fn)GetProcAddress(crt, "sprintf");
    line("msvcrt.exports", !!my_strlen + !!my_atoi + !!my_qsort + !!my_sprintf);

    if (my_strlen)
        line("msvcrt.strlen", (unsigned)my_strlen("recomp-kit"));
    if (my_atoi)
        line("msvcrt.atoi", (unsigned)my_atoi("  -12345xyz") + 20000u);
    if (my_qsort) {
        int v[16] = {9, -3, 7, 0, 15, -8, 2, 2, 11, -1, 6, 4, 13, -5, 1, 10};
        my_qsort(v, 16, sizeof v[0], cmp_int);
        unsigned sorted = 1;
        for (int k = 1; k < 16; k++)
            sorted &= v[k - 1] <= v[k];
        line("msvcrt.qsort.sorted", sorted);
        line("msvcrt.qsort.first_plus_100", (unsigned)(v[0] + 100));
    }
    if (my_sprintf) {
        char buf[128];
        int n = my_sprintf(buf, "%s|%d|%05x|%c", "wine", -42, 0xbeef, 'Z');
        line("msvcrt.sprintf.length", (unsigned)n);
        put("msvcrt.sprintf.text ");
        put(n > 0 ? buf : "(failed)");
        put("\n");
    }
}

void __cdecl start(void) {
    out = GetStdHandle(STD_OUTPUT_HANDLE);
    put("sample.begin 1\n");
    experiment_interp(20000000u);
    experiment_msvcrt();
    put("sample.end 1\n");
    ExitProcess(0);
}
