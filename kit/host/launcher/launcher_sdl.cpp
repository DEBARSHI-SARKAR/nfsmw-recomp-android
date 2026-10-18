// launcher_sdl.cpp - see launcher_sdl.h.
#include "launcher_sdl.h"

#include "../../platform/os.h"
#include "../gpu/gpu.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>

namespace launcher {

bool requested(int argc, char **argv) {
    for (int i = 1; i < argc; ++i)
        if (strcmp(argv[i], "--launcher") == 0)
            return true;
    const char *env = recomp_env("LAUNCHER");
    if (env && *env && strcmp(env, "0") != 0)
        return true;
    SDL_PumpEvents();
    return (SDL_GetModState() & (SDL_KMOD_SHIFT | SDL_KMOD_ALT)) != 0;
}

namespace {

struct Presenter {
    gpu::Device *device = nullptr;
    gpu::Swapchain chain;
    gpu::Texture texture;
    gpu::Format format = gpu::Format::BGRA8;
    int w = 0, h = 0, tex_w = 0, tex_h = 0;

    bool open(void *surface, int width, int height) {
        if (!device) {
            w = width;
            h = height;
            return SDL_GetWindowSurface(window) != nullptr;
        }
        chain = device->create_swapchain(surface, width, height);
        if (!chain)
            return false;
        format = device->swapchain_format(chain);
        w = width;
        h = height;
        return true;
    }
    void resize(int width, int height) {
        if (width == w && height == h)
            return;
        if (device)
            device->resize(chain, width, height);
        w = width;
        h = height;
    }
    SDL_Window *window = nullptr; // software presentation when there is no device
    void show(const Canvas &c) {
        if (!device) {
            SDL_Surface *dst = SDL_GetWindowSurface(window);
            if (!dst)
                return;
            SDL_Surface *src = SDL_CreateSurfaceFrom(
                c.width(), c.height(),
                format == gpu::Format::BGRA8 ? SDL_PIXELFORMAT_BGRA32 : SDL_PIXELFORMAT_RGBA32,
                static_cast<void *>(const_cast<uint8_t *>(c.pixels())), c.width() * 4);
            if (src) {
                SDL_BlitSurface(src, nullptr, dst, nullptr);
                SDL_DestroySurface(src);
            }
            SDL_UpdateWindowSurface(window);
            return;
        }
        if (!chain || c.width() <= 0 || c.height() <= 0)
            return;
        if (!texture || tex_w != c.width() || tex_h != c.height()) {
            if (texture)
                device->destroy(texture);
            texture = device->create_texture(
                {c.width(), c.height(), format, gpu::UsageSampled | gpu::UsageCpu, 1});
            tex_w = c.width();
            tex_h = c.height();
        }
        if (!texture)
            return;
        device->upload(texture, {0, 0, c.width(), c.height()}, c.pixels(), c.width() * 4);
        gpu::Texture drawable = device->acquire(chain);
        if (!drawable)
            return;
        gpu::TextureDesc d = device->describe(drawable);
        const int cw = std::min(d.width, c.width()), ch = std::min(d.height, c.height());
        gpu::CommandBuffer cb = device->begin();
        device->blit(cb, texture, {0, 0, cw, ch}, drawable, 0, 0);
        device->present(cb, chain, drawable, 0, nullptr);
        device->commit(cb);
        device->wait(cb);
    }
    void close() {
        if (!device) {
            SDL_DestroyWindowSurface(window);
            return;
        }
        if (texture)
            device->destroy(texture);
        texture = {};
        if (chain)
            device->destroy(chain);
        chain = {};
    }
};

void write_ppm(const std::string &path, const Canvas &c, bool bgra) {
    FILE *f = fopen((path + ".part").c_str(), "wb");
    if (!f)
        return;
    fprintf(f, "P6\n%d %d\n255\n", c.width(), c.height());
    std::vector<uint8_t> row(size_t(c.width()) * 3);
    for (int y = 0; y < c.height(); ++y) {
        const uint8_t *src = c.pixels() + size_t(y) * size_t(c.width()) * 4;
        for (int x = 0; x < c.width(); ++x) {
            row[size_t(x) * 3] = bgra ? src[x * 4 + 2] : src[x * 4];
            row[size_t(x) * 3 + 1] = src[x * 4 + 1];
            row[size_t(x) * 3 + 2] = bgra ? src[x * 4] : src[x * 4 + 2];
        }
        fwrite(row.data(), 1, row.size(), f);
    }
    fclose(f);
    os_rename((path + ".part").c_str(), path.c_str());
}

} // namespace

std::string run(SDL_Window *window, gpu::Device *device, void *native_surface, Platform &platform,
                const RunOptions &options) {
    const Spec &spec = spec_from_config();
    {
        const PlatformInfo info = platform.info();
        fprintf(stderr, "[launcher] game data %s, saves %s\n", info.import_root.c_str(),
                info.profile_dir.c_str());
    }
    Launcher launcher(spec, platform);
    launcher.start(options.known);
    if (!options.unplayable.empty())
        launcher.set_unplayable(options.unplayable);
    if (options.auto_play > 0)
        launcher.set_auto_play(options.auto_play);

    SDL_InitSubSystem(SDL_INIT_GAMEPAD);
    SDL_ShowWindow(window);
    SDL_RaiseWindow(window);
    int dw = 0, dh = 0, bw = 0, bh = 0;
    SDL_GetWindowSizeInPixels(window, &dw, &dh);
    SDL_GetWindowSize(window, &bw, &bh);
    Presenter presenter;
    presenter.device = device;
    presenter.window = window;
    if (!presenter.open(native_surface, std::max(1, dw), std::max(1, dh))) {
        fprintf(stderr, "[launcher] no swapchain for the window: %s\n", SDL_GetError());
        return "";
    }
    Canvas canvas;
    std::vector<SDL_Gamepad *> pads;
    uint64_t last = SDL_GetTicksNS();
    bool redraw = true;
    auto to_canvas = [&](float x, float y, int *cx, int *cy) {
        *cx = bw > 0 ? int(x * float(dw) / float(bw)) : int(x);
        *cy = bh > 0 ? int(y * float(dh) / float(bh)) : int(y);
    };
    std::vector<std::string> script;
    for (size_t start = 0; start < options.keys.size();) {
        size_t end = options.keys.find(',', start);
        if (end == std::string::npos)
            end = options.keys.size();
        script.push_back(options.keys.substr(start, end - start));
        start = end + 1;
    }
    size_t script_step = 0;
    uint64_t next_step = SDL_GetTicksNS() + 500000000ull;
    while (!launcher.finished() && !launcher.quit()) {
        if (script_step < script.size() && SDL_GetTicksNS() >= next_step &&
            launcher.screen() != Screen::Importing) {
            const std::string &k = script[script_step++];
            next_step = SDL_GetTicksNS() + 300000000ull;
            fprintf(stderr, "[launcher] script: %s\n", k.c_str());
            if (k == "up")
                launcher.key(Key::Up);
            else if (k == "down")
                launcher.key(Key::Down);
            else if (k == "left")
                launcher.key(Key::Left);
            else if (k == "right")
                launcher.key(Key::Right);
            else if (k == "next")
                launcher.key(Key::Next);
            else if (k == "previous")
                launcher.key(Key::Previous);
            else if (k == "enter")
                launcher.key(Key::Activate);
            else if (k == "back")
                launcher.key(Key::Back);
            else if (k.compare(0, 5, "drop:") == 0)
                launcher.drop(k.substr(5));
        }
        SDL_Event e;
        const bool busy = launcher.screen() == Screen::Importing || launcher.counting_down();
        if (SDL_WaitEventTimeout(&e, busy ? 50 : 250)) {
            do {
                switch (e.type) {
                case SDL_EVENT_QUIT:
                    for (SDL_Gamepad *g : pads)
                        SDL_CloseGamepad(g);
                    presenter.close();
                    return "";
                case SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED:
                case SDL_EVENT_WINDOW_RESIZED:
                case SDL_EVENT_WINDOW_EXPOSED:
                    redraw = true;
                    break;
                case SDL_EVENT_MOUSE_BUTTON_DOWN:
                case SDL_EVENT_MOUSE_BUTTON_UP:
                    if (e.button.button == SDL_BUTTON_LEFT) {
                        int x, y;
                        to_canvas(e.button.x, e.button.y, &x, &y);
                        launcher.pointer(x, y, e.type == SDL_EVENT_MOUSE_BUTTON_DOWN);
                    }
                    break;
                case SDL_EVENT_FINGER_DOWN:
                case SDL_EVENT_FINGER_UP:
                    launcher.pointer(int(e.tfinger.x * float(dw)), int(e.tfinger.y * float(dh)),
                                     e.type == SDL_EVENT_FINGER_DOWN);
                    break;
                case SDL_EVENT_KEY_DOWN:
                    switch (e.key.scancode) {
                    case SDL_SCANCODE_UP:
                        launcher.key(Key::Up);
                        break;
                    case SDL_SCANCODE_DOWN:
                        launcher.key(Key::Down);
                        break;
                    case SDL_SCANCODE_LEFT:
                        launcher.key(Key::Left);
                        break;
                    case SDL_SCANCODE_RIGHT:
                        launcher.key(Key::Right);
                        break;
                    case SDL_SCANCODE_TAB:
                        launcher.key((e.key.mod & SDL_KMOD_SHIFT) ? Key::Previous : Key::Next);
                        break;
                    case SDL_SCANCODE_RETURN:
                    case SDL_SCANCODE_KP_ENTER:
                    case SDL_SCANCODE_SPACE:
                        launcher.key(Key::Activate);
                        break;
                    case SDL_SCANCODE_ESCAPE:
                    case SDL_SCANCODE_AC_BACK:
                        launcher.key(Key::Back);
                        break;
                    default:
                        // Any key stops a countdown and does nothing else.
                        if (launcher.counting_down())
                            launcher.key(Key::Back);
                        break;
                    }
                    break;
                case SDL_EVENT_GAMEPAD_ADDED:
                    if (SDL_Gamepad *g = SDL_OpenGamepad(e.gdevice.which))
                        pads.push_back(g);
                    break;
                case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
                    switch (e.gbutton.button) {
                    case SDL_GAMEPAD_BUTTON_DPAD_UP:
                        launcher.key(Key::Up);
                        break;
                    case SDL_GAMEPAD_BUTTON_DPAD_DOWN:
                        launcher.key(Key::Down);
                        break;
                    case SDL_GAMEPAD_BUTTON_DPAD_LEFT:
                        launcher.key(Key::Left);
                        break;
                    case SDL_GAMEPAD_BUTTON_DPAD_RIGHT:
                        launcher.key(Key::Right);
                        break;
                    case SDL_GAMEPAD_BUTTON_SOUTH:
                    case SDL_GAMEPAD_BUTTON_START:
                        launcher.key(Key::Activate);
                        break;
                    case SDL_GAMEPAD_BUTTON_EAST:
                    case SDL_GAMEPAD_BUTTON_BACK:
                        launcher.key(Key::Back);
                        break;
                    default:
                        break;
                    }
                    break;
                case SDL_EVENT_DROP_FILE:
                    if (e.drop.data)
                        launcher.drop(e.drop.data);
                    break;
                default:
                    break;
                }
            } while (SDL_PollEvent(&e));
        }
        // The countdown runs only while it can be seen, in small steps, so a
        // slow first frame (an app still launching) does not eat it.
        const uint64_t now = SDL_GetTicksNS();
        if (canvas.width() > 0)
            launcher.advance(std::min(0.1, double(now - last) / 1e9));
        last = now;
        launcher.tick();
        {
            static int last_state = -1, last_screen = -1;
            const int st = int(launcher.status().state), sc = int(launcher.screen());
            if (st != last_state || sc != last_screen) {
                fprintf(stderr, "[launcher] %s, screen %d%s%s\n",
                        state_name(launcher.status().state), sc,
                        launcher.screen() == Screen::Message ? ": " : "",
                        launcher.screen() == Screen::Message ? launcher.message().c_str() : "");
                last_state = st;
                last_screen = sc;
            }
        }
        if (launcher.finished() || launcher.quit())
            break; // the last frame shown stays what the player saw
        SDL_GetWindowSizeInPixels(window, &dw, &dh);
        SDL_GetWindowSize(window, &bw, &bh);
        if (dw <= 0 || dh <= 0)
            continue;
        if (redraw || launcher.dirty() || canvas.width() != dw || canvas.height() != dh) {
            redraw = false;
            presenter.resize(dw, dh);
            const bool bgra = presenter.format == gpu::Format::BGRA8;
            canvas.resize(dw, dh, bgra);
            const int scale = std::max(1, std::min(dw / 480, dh / 300));
            launcher.draw(canvas, scale);
            presenter.show(canvas);
            if (!options.dump_path.empty())
                write_ppm(options.dump_path, canvas, bgra);
        }
    }
    for (SDL_Gamepad *g : pads)
        SDL_CloseGamepad(g);
    presenter.close();
    if (launcher.quit())
        return "";
    return launcher.exe();
}

} // namespace launcher
