# `host` — the hosts

Three programs run the same recompiled guest:

| program | built by | what it does with a frame |
| --- | --- | --- |
| `build/recomp/pop_headless` | `tools/build.py --target headless` | writes `build/recomp/frames/frame_NNNN.ppm` |
| `build/PopRecomp.app` | `tools/build.py`, `make all` | draws it in an SDL3 window |
| `build/recomp/pop_smoke` | `tools/build.py --target smoke`, `make recomp-smoke` | presses buttons from a script and measures what came out |

All three boot the game from the real PE entry point (`0055d6c0`): CRT startup,
`WinMain`, registry and configuration, DirectDraw and Direct3D initialisation,
the window, and the game's own main loop. None is the parity fixture —
`runtime/fixture.cpp` reproduces the Unicorn probe's scripted
startup and never runs `WinMain`.

## Files

| file | contents |
| --- | --- |
| `boot.{h,cpp}` | the boot sequence all hosts share: the load, the heartbeat, the activation, the close, the unwind, the watchdog, the fault handler |
| `report_lock.cpp` | the one mutex a host's run bookkeeping is written under |
| `headless_main.cpp` | the frame-writing host and its caps |
| `sdl/main.cpp` | the window, the SDL event pump and the lifetime |
| `present.{h,cpp}` | `host_present`: 8-bit and 5-6-5 expansion, the letterbox, the drawable |
| `present_thread.cpp`, `present_frame.h` | the presenter: sealed frames, the target pool, the swapchain worker |
| `compositor.{h,cpp}`, `performance_overlay.{h,cpp}` | world, UI and overlays composed onto the drawable; the FPS overlay |
| `d3d_render.{h,cpp}` | the renderer behind `host_d3d_draw`, over `gpu/gpu.h` |
| `gpu2d.cpp` | the Direct3D 11 hardware path: GPU copies of the shim's textures and render targets, the rectangles drawn into them, and the render target handed to the presenter |
| `gpu/gpu.h`, `gpu/shaders.md` | the device-level GPU interface every backend implements, and the shader contract |
| `gpu/metal/` | the Metal backend, the only Objective-C++ in the host |
| `gpu/fake/` | the CPU test double |
| `sdl/keymap.cpp` | SDL scancodes and modifiers to the host's key codes |
| `input.{h,cpp}` | host key codes to DirectInput scan codes, Win32 messages and `GetAsyncKeyState`, and waking the guest's input threads |
| `audio.h`, `audio/mixer.cpp` | `host_audio_play` on the software mixer, and the lock order that keeps it out of a deadlock |
| `audio/sdl_sink.cpp`, `audio/midi_synth.cpp` | the output device through SDL; the music through TinySoundFont |
| `Info.plist` | the app bundle's |
| `tests/host_tests.cpp` | the headless tests |
| CMake targets `host_tests`, `compositor_tests`, `ui_layer_tests` | built by `tools/test.py --compile-only`, run by `--native` |

## The GPU interface

Nothing outside `gpu/metal/` names a GPU API. `gpu/gpu.h` is a device-level
interface: textures, buffers, pipelines and command buffers as 64-bit handles,
one queue whose command buffers complete in commit order, and a swapchain made
from whatever native surface the window layer hands over. `gpu/shaders.md` is
the contract for the four render programs and three compute kernels a backend
supplies, by name and binding slot. `gpu/fake/` is the CPU double the
presenter's tests run on; `gpu_metal_tests` checks the Metal backend against
the same contract.

## The shared boot

In-game options use the original `CONFIG00.DAT` / `CONFIG00.VER` files in the
writable profile (`build/recomp/profile/POP3.CD/SAVE` by default). The game
originally wrote them only during shutdown, but can reload them on a new-game
transition. The runtime now saves changed options at most four times a second
and before a reload. It compares only the option bits in the original table,
so gameplay flags do not cause continuous writes. Failed saves remain pending;
a reload cannot replace pending edits with the older file.

Startup resolution enumeration retains the saved selection when that mode is
available, while keeping the frontend's current mode separate. Quick Defaults
still applies the original group of graphics options. Its selection is stored
in `mod-settings.json`; reopening the menu restores that selection without
reapplying the preset and overwriting later manual changes.

F10 display/mod settings and the F11 overlay selection save immediately to
`<profile>/mod-settings.json`, using an atomic replacement. `RECOMP_PROFILE_DIR`
selects a different profile; worktrees have separate default profiles. The
original GOG files remain the fallback read layer and are not modified.

The persistence regression invokes the translated default initializer,
configuration loader/writer and frame clock against an isolated writable
profile. It covers all 59 original option descriptors, reload before shutdown,
a fresh guest image, resolution enumeration, all three Quick Defaults presets
with subsequent manual adjustments, idle frames without writes, and failed
writes followed by retry. Run `.venv/bin/python tools/test.py --mods`.

`boot.cpp` is not a convenience: the hosts differ only in what they do with
a frame and when they decide to stop, and everything else was identical. A host
supplies a `tick`, called about once a millisecond from inside guest code, and
a `report`, and boot supplies:

```c
mem_init -> loader_load -> dx_register_shims -> loader_init_context
         -> host_set_time_source (the heartbeat)
         -> run_entry, wrapped in the unwind landing pad
```

The headless host synthesises the activation a window manager would send; the
windowed host turns that off and delivers the real thing from the window events that
carry it.

The tick arrives on whichever guest thread read the clock. The runtime's
cooperative scheduler hands the baton around real pthreads, so a worker holding
it reads `GetTickCount` exactly as the main one does. The window and the GPU device belong
to the thread that called `boot_run`, so `pump()` asks `boot_on_run_thread()`
and returns immediately when the answer is no: the scheduler passes the baton
on and the main thread pumps when its turn comes.

## Where the host gets to run when the guest is waiting

The heartbeat below covers a guest that is running. A guest that is *waiting* -
a `Sleep`, or a wait on an object nothing has signalled - reads no clock and
reaches no shim, so the host would not be serviced at all: the window stops
answering, the pointer becomes a spinner, and since the game spends most of a
video frame waiting, that is most of the time.

So the runtime calls `idle_wait` on the run thread whenever it is about to
block, with a slice in seconds. The host spends it inside
`nextEventMatchingMask:untilDate:`, which is a real sleep rather than a spin,
and returns 1 the moment input arrives so the guest can re-check its own
condition instead of sitting out the rest of the slice. Making it wait would be
latency on every keystroke with no cause a person could see.

While another guest thread holds the scheduler baton, the host instead polls
events without sleeping. The main thread then waits on the scheduler condition
variable, so the worker's return wakes it immediately. A 2 ms cap keeps events
responsive if the worker runs longer. Sleeping inside SDL for these short
handoffs used to add a full slice for every input worker wakeup, causing large
frame spikes during ordinary pointer movement.

Captured input in fullscreen and borderless uses SDL's window-local mouse
confinement, keeping the accelerated OS cursor four points inside the safe
content bounds. This avoids desktop hot edges without decoupling the cursor
or repeatedly warping it. The inset travel range maps onto the whole drawable,
including its outermost pixels, so camera edge scrolling remains reachable.
Holding Escape, opening settings or switching apps releases confinement; a
click in the game captures again. Command-Tab and Command-Q remain available.
Normal windows retain their resize-edge release gesture. Native cursor and
window changes run only on the main thread, including worker-queued releases.

The guarded `NSWindow.mouseConfinementRect` selector has been available since
macOS 10.13.2 and is used by SDL, but is not declared in Apple's public SDK.
Fullscreen presentation options additionally request hidden Dock/menu bars;
they are applied on capture transitions, not repeatedly compared against the
app getter (which differs from the effective fullscreen options). On macOS 26,
motion uses the global cursor position converted through the actual window:
AppKit can report stale event positions at edges after a Space/focus change.
See [SDL's Cocoa backend](https://github.com/libsdl-org/SDL/blob/main/src/video/cocoa/SDL_cocoawindow.m)
and [its macOS 26 issue](https://github.com/libsdl-org/SDL/issues/15967).

The fullscreen title bar can also take ownership of motion events after an
edge visit. While confined, accept motion regardless of which app window it
targets, and sample the current global position at the end of each event pump
even if no motion event arrived. Deliver only changed drawable coordinates,
through the same ordered guest-input queue. Otherwise the game keeps its last
edge position even while the real mouse moves back into the scene.

`RECOMP_TRACE_POINTER=1` enables throttled native-coordinate and guest-cursor
diagnostics. The verified September 9 run in
`build/fullscreen-edges/live-v4/app.log` recorded top-edge event Y=28 with
global/window Y=945, then event Y=-738.7 with global/window Y=178.3. The
917-point shift matches the fullscreen bar coordinate space. The corrected
path delivered guest Y=0 -> 206 -> 476 -> 479 -> 460 and recovered all four
edges; the user confirmed that the cursor worked again. Cmd-Q clean exit was
also verified during the preceding diagnostic run. Host checks (3,911,230),
UI checks (92), and compositor checks (494) passed, followed by the focused
input suite and a signed app build. The live test used a 3024x1898 safe drawable;
the 4K coverage here is coordinate testing, not a 4K performance claim.

## Where the host gets to run

The game never blocks in `GetMessage`: it drains its queue with `PeekMessageA`
(`0052a710`, `004b0c10`) and otherwise spins on `GetTickCount`. So the host's
heartbeat rides on the time source, which is the point at which a real process
yields to the system. It is rate limited to once per millisecond and guarded
against re-entry, because posting a message timestamps it with the same clock.

For the windowed host that is also the entire event loop: the guest owns the
main thread, and `pump()` in `sdl/main.cpp` drains the SDL event queue from inside the
guest's clock read.

## Ending a run

Three layers, because the guest cannot be trusted to cooperate:

| layer | when | how it ends |
| --- | --- | --- |
| `WM_CLOSE` | a cap, the window's close button, or Cmd-Q / Quit | the game exits through its own shutdown path |
| host unwind | 15 s later, guest still calling in | `longjmp` out of guest code, reported |
| watchdog thread | the run deadline plus 30 s, or 30 s after a close in the windowed host | prints the report and `_exit(4)` |

A `SIGSEGV`/`SIGBUS` handler prints the guest EIP and ESP alongside the report,
which turns a fault inside recompiled code into something with an address on
it — recompiled code reaches guest memory through `g_mem` with no bounds check,
so a guest that loses its stack pointer faults the host.

## The Direct3D 11 hardware path

`dx/d3d11.cpp` is a software rasterizer, and it still is the reference: every
draw it cannot prove the GPU reproduces goes through it. What it can prove is
the draw a 2D renderer makes every frame - two triangles tiling an
axis-aligned rectangle at w = 1, carrying texel centres onto pixel centres one
to one, inside the texture. There the sampler's filter and address mode change
nothing and the pixel shader is the texel itself, so the draw is a copy (with
the blend the state asks for), and `gpu2d.cpp` draws it with the compositor
program.

| resource | where its pixels are |
| --- | --- |
| a texture | in guest memory, as the guest wrote them; the GPU copy is converted to RGBA8 (5-6-5 and the packed R16 decode through tables) and re-uploaded, dirty rectangle only, before a draw samples it |
| a render target | on the GPU once a clear or a rectangle went there; any CPU use - a `Map`, an `UpdateSubresource`, a draw the software path takes, a present GDI has to compose - reads it back first |
| the back buffer at `Present` | copied into the presenter's frame on the GPU when GDI says the swap chain has the whole screen; otherwise read back and presented as pixels, and the next frame is drawn in software |

A render target read back three times with no GPU present between stays in
software. Uploads and readbacks commit the open command buffer and wait for
it, so the CPU never writes a texture the GPU has still to read. The smoke host
reads every GPU frame back for its captures (`host_gpu2d_present_readback`);
the windowed host does not. `RECOMP_D3D11_SOFTWARE=1` keeps every draw in the
rasterizer, for comparison.

## Where the pixels meet

There is one thing on the screen and it is the DirectDraw surface.

The front end draws into it in software. Gameplay renders through the Direct3D
device, and a HAL device rasterizes into the DirectDraw surface it was given -
the game then blits its interface over the same pixels and flips. So the two
kinds of drawing have to interleave in that surface's memory, in the order the
guest produced them, and a composite at present time cannot reproduce that.

`d3d_render.cpp` therefore keeps a GPU mirror of the render-target surface:

| when | what happens |
| --- | --- |
| `CreateDevice`, `SetRenderTarget`, after a `Flip` | `host_d3d_set_render_target` names the surface and its current memory, and the target being left is written back first |
| the first draw or clear after a flush | the surface's pixels are read into the mirror, so the draw leaves everything it does not cover alone |
| `Lock`, `Blt`, `BltFast`, `GetDC`, `Flip`, `Texture::Load`, `DuplicateSurface`, present | `host_d3d_flush_surface` writes the mirror back into the surface |
| the surface is destroyed, or `SetSurfaceDesc` replaces its storage | it is written back while that memory is still there, then the device forgets it or is given the new pointer |
| `dx_reset` after `mem_init` | `host_d3d_discard` drops the mirror **without** writing it: the arena those pixels lived in is gone, and a write-back would go through a dangling guest address |

`dx/ddraw.cpp` and `d3d.cpp` make those calls, and they are a
comparison and a return for every surface that is not the current render
target. `present.cpp` then has nothing to decide: it expands the surface and
puts it on the drawable.

The write-back touches only what the device rasterized. The mirror is BGRA8
and the surface is 5-6-5 or palettised, so a pixel that went out and came back
would not be the pixel that left: a 5-bit channel of 1 scales to 8 and back to
0. Doing that to a pixel the device never drew would corrupt the guest's own
drawing for no reason. So a second render target carries a coverage mask that
every fragment writes 1 to and a whole-target clear clears to 1, and the
write-back converts a pixel only where that mask says something was put there.
Everything else keeps the exact bytes the guest wrote.

## Mouse motion

A DirectInput delta is a whole number of mouse counts, so the platform's motion
has to be scaled into the guest's own pixels — and the remainder has to be
kept. Rounding each event on its own throws slow movement away: at a scale of
one half, which is what a 640x480 mode in a doubled window on a Retina display
gives, a stream of one-point moves rounds to zero every time. The pointer never
moves while the buttons keep working perfectly, because a button is a level the
host keeps reporting and motion is a delta reported once.

The same move also updates the absolute cursor in guest pixels, for
`GetCursorPos` and for the `WM_MOUSEMOVE` a front end may draw its cursor from,
and announces itself so the threads waiting to read it wake up. All three, or
the pointer does not move.

## Waking the guest's input threads

The game's DirectInput devices are serviced by two guest threads that wait on
an event rather than polling, so input nobody announces is input the game never
sees - which is what a first live run looked like when the mouse and the
keyboard did nothing at all.

Every mutator in `input.cpp` announces the change through a function the host
installs: `sdl/main.cpp` installs the shim's `dinput_host_input_changed()`, and a
binary that links none of the shims installs its own or nothing. The
indirection is not a preference. A weak declaration does not survive a static
link, so the choice was a function pointer or a link-time dependency on the
shims from a file that has no other reason to have one.

A flags change moves several keys at once and announces once, because it is one
event. The run report prints the running total, so a session where the mouse
did nothing can be told from one where nothing was announced, and a host that
never installed a notifier says so the first time input changes: the whole class
of bug here is a call that does nothing and reports nothing, and the symptom of
every version of it is a mouse that appears dead.

## The smoke run

`make recomp-smoke` boots the game, presses the buttons in
the game's `smoke/level1.script`, and says whether what came out satisfies the
script's expectations. It exists so gameplay is checked before a person is
asked to look at a build.

Every action goes in through the paths a person's input takes — the
DirectInput state, the notification that wakes the guest's input threads, and
the Win32 message queue — because a back door built for testing would be
testing something the game does not do. It opens no window, no drawable and no
audio device: the Metal renderer draws into an `MTLTexture`, and `host_audio_play`
measures the PCM it was handed rather than playing it.

What it can say is whether the device uploaded textures, whether the scene is
black, whether a sound had amplitude in it, and where the frames are to look at.
What it cannot say is whether the game looks right.

It plays mission 01. The run that produced these numbers uploaded 4,166
textures, made 438,384 draws and 1,268 write-backs, filled the screen
(`scene_nonblack` 1.00) and drew 1,522 frames that differed from the one before
- which is what tells a running level from a frozen one presenting the same
picture. Every expectation passes.

It writes to `build/recomp/smoke/frames`. It never deletes a dump directory:
those are somebody's evidence, and a harness that tidies one up has destroyed
the only record of a run that cannot be repeated.

## Streamed sound

A streamed wave is refilled rather than replayed. `host_audio_queue` appends
PCM behind whatever is still scheduled on the channel, with no stop, no play
and no interrupt, so the render position never restarts and the join is
sample-accurate; copying at submit time instead puts an audible seam at every
refill. `host_audio_queued_bytes` is what the caller watches to know when to
send more, and a chunk that arrives after the node has run dry is logged, so a
starved stream says so rather than only sounding wrong.

A channel that has been queued into is a stream from then on: its cursor keeps
advancing rather than ending at the length of the buffer that started it. A
fresh `host_audio_play` on the same channel ends the stream and resets the
accounting.

## The audio lock order

The mixer has three locks in a fixed order: the API mutex that serialises the
`host_audio_*` calls, the channel-data lock over the channel table, and the
render lock over the players that the render thread holds for a block. The
shape comes from the AVFoundation version this replaced, where the first live
run deadlocked with `host_audio_play` holding the channel mutex while `stop`
waited for a completion queue that was waiting for the mutex - and the rules
that fixed it still hold, checked rather than remembered:

- **No player call is made while the channel-data lock is held.**
  Everything a call needs is prepared under the lock, the lock is dropped, and
  only then does the player hear about it. `audio_check_unlocked` counts and
  asserts on any breach.
- **The completion path takes no lock at all.** The render loop stores the
  generation that finished into a lock-free array and returns. The guest side
  reconciles the next time it asks whether a channel is playing, and a
  generation that names a sound already replaced is ignored.

`host_audio_set_node_ops` puts stand-ins in place of the three node calls, which
is how `audio stop re-entry` drives the same re-entrant path with no audio
device: its `stop` fires the pending completion handler before returning, the
way the framework does.

## Tests

```
.venv/bin/python tools/test.py --native          # build and run
.venv/bin/python tools/test.py --compile-only    # build only
.venv/bin/ctest --preset macos -R host_tests     # one suite
```

746 checks: palette and 5-6-5 expansion against a padded pitch, the letterbox
geometry, the keyboard map and the consuming DirectInput read, the Win32
message packing, the audio conversions and DirectSound's pan, rate and cursor
arithmetic, a completion handler arriving from inside a stop, the frame-rate
meter driven with made-up timestamps, primitive
expansion for lists, strips, fans, points, lines, indices and flat shading, and
the renderer itself — clear, Gouraud triangle, depth test and depth range,
blending, alpha test, fog, both texture formats, texture versioning, mipmaps,
a clear read back before EndScene, a target changed with a scene still in the
mirror, the Direct3D signal that tells a gameplay frame from a front-end one,
the render-target write-back under both draw-then-blit-then-flip and
blit-then-draw-then-flip, and a write-back that leaves every pixel the device
did not rasterize bit-identical — rendered on the real GPU into an
`MTLTexture` and read back. No window, no application object
and no audio device is created.

`sdl/main.cpp` has no test: a window is the one thing a headless test cannot make.

## The headless host in particular

Unlike the parity fixture it is **not** built with `-DRECOMP_NULL_HOST`,
because the whole point is that presented frames reach a file. No window is
opened, no device is created, no audio stream is started, no input device is
touched; the Direct3D and audio callbacks count and discard.

Headless and smoke also refresh visible GDI window surfaces at the virtual
display's 60 Hz rate, even when an unchanged window needs no new WM_PAINT.
Each refresh counts as a present and advances `RECOMP_PIN_CLOCK` once by its
configured step. This is a refresh count, not a count of different images.
Recent DirectDraw primary presents take over the cadence; after two refresh
intervals without one, window refreshes resume over the idle primary's pixels.
`RECOMP_FRAMES` selects frame captures in either host, and `RECOMP_FRAME_EVERY`
samples every Nth present (0 disables writes). The smoke host's existing
scripted dumps remain available independently.

Activation is synthesised there rather than delivered: a window that has just
been shown and holds the focus gets `WM_ACTIVATEAPP`, `WM_ACTIVATE` and
`WM_SETFOCUS`. The game's WNDPROC at `004b0870` reads `WM_ACTIVATEAPP`'s wParam
into the flag `004b2670` returns, and `main_3` calls `update_screen()` only when
that flag is set. Drawing happens either way, so without activation the game
runs and draws and never presents. Checked, not assumed: `RECOMP_NO_ACTIVATE=1`
reaches the same point in the same way with one fewer frame presented.

## Environment

| variable | effect |
| --- | --- |
| `RECOMP_MAX_FRAMES` | stop after N presented frames (default 500) |
| `RECOMP_MAX_SECONDS` | stop after S wall-clock seconds (default 180) |
| `RECOMP_FRAMES` | frame directory (default `build/recomp/frames`) |
| `RECOMP_FRAME_EVERY` | write every Nth frame (default 10; 0 writes none) |
| `RECOMP_EXE` | image to load (default the loader's) |
| `RECOMP_NO_ACTIVATE` | do not synthesise activation |
| `RECOMP_PIN_CLOCK` | `1`, or `<start>:<step>`, to pin the guest's clock |

`RECOMP_PIN_CLOCK` is read by every host that boots through `boot.cpp`,
which is the headless host, the smoke host and the windowed app. It replaces
the millisecond clock the guest reads with a counter that starts at `start`
and moves `step` per presented frame, defaulting to the parity fixture's own
100 and 50. It is for comparing two runs against each other, and it is not a
timing measurement of anything: at 50 ms a step the game believes it is running
at twenty frames a second however fast the machine really is, and a pinned run
of the smoke finishes in about half the wall-clock time an unpinned one takes.

What it is worth, measured on `level1.script` by counting the QMixer calls two
runs made and comparing them as multisets:

| | calls | calls that differed |
| --- | --- | --- |
| unpinned | 5373 and 5390 | 967 |
| pinned | 3490 and 3490 | 0 |

Not zero in general - a later pair differed in three - because the scheduler
runs its deadlines on a real monotonic clock by design (`sched_now` in
`kernel32.cpp`, where a pinned clock would make every timed wait instant or
eternal), so which guest thread holds the baton still moves a little. A pinned
run and an unpinned one are not comparable to each other at all: the smoke
script's own waits are in the same pinned milliseconds, so a pinned run covers
less guest time and asks for fewer sounds. Only pinned against pinned means
anything.

The run record says which clock a run ran on, in `pins.clock`, so two records
can be compared knowing whether their clocks were the same kind of thing.

The windowed host reads `RECOMP_EXE` too, and adds:

| variable | effect |
| --- | --- |
| `RECOMP_HOST_D3D_NOCULL` | ignore `D3DRENDERSTATE_CULLMODE` |
| `RECOMP_HOST_NO_AUDIO` | never start the audio engine |
| `RECOMP_D3D11_SOFTWARE` | draw every Direct3D 11 call in the software rasterizer |

`RECOMP_LOG`, `RECOMP_IMPORT_STATS`, `RECOMP_CREATETHREAD` and the rest are the
runtime's, documented in `runtime/README.md`.

## What a run looks like, and why the caps are what they are

A boot has three phases, and knowing them is what makes the caps make sense:

| frames | what |
| --- | --- |
| 0 – ~10 | blank. The startup flips and primary blits before anything is drawn |
| ~10 – ~200 | the intro logo video, 640x480 at **16 bpp**, thousands of colours |
| ~200 – ~215 | blank again, while the mode returns to 8 bpp |
| ~215 onwards | the front end, 640x480 at 8 bpp, ~209 colours over ~301,000 non-background pixels |

So a 200-frame cap stops in the blank gap: the run reports that a frame with
content was presented, on the strength of the video, and never reaches the
menu. The default is 500, which lands well inside the settled front end and
takes about fifteen seconds.

Three frames get named in the report and they are usually three different
frames. **"last drawn frame" is the one to look at**: the run ends on whatever
the game settled on. "richest frame" is whichever had the most distinct
colours, which is nearly always a video frame. And the literal last frame is
blank, because the cap posts `WM_CLOSE` and the game clears the screen on its
way out.

A frame is about 900 KB, so `RECOMP_FRAME_EVERY` defaults to 10: fifty-odd
frames still land several in each phase. Set it to 1 when you need them all,
or 0 when you only want the summary.

**Frame bytes are not a regression check.** The front end animates on a
wall-clock-derived counter — `font_and_palette_manipulation_1` at `004fdbc0`
advances a phase by `1000 / framerate` each pass and indexes a sine table with
it — so which phase a given frame index catches depends on how fast the machine
got there. Two runs of the same binary usually agree and sometimes do not. The
structural summary the report prints, distinct colours and surface values and
palette size and non-background pixels, is stable where the bytes are not, and
still catches a blank frame, a wrong palette or a missing sprite layer.

## Reading a frame

`build/recomp/frames/frame_NNNN.ppm` is binary PPM (P6), 8-bit palettised
surfaces already converted through the palette that was attached when the
frame was presented. Any image viewer or `Preview` opens it; nothing here
opens one.
