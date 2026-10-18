# Wine msvcrt sample

Two experiments on a game that does not exist. `src/sample.c` is a 32-bit
Windows program of about 150 lines, built without a C runtime, that the kit
translates like any game:

1. **How much slower is the interpreter than translated code?** `bench()` runs
   once as translated code and once from a copy of its own bytes in the heap,
   which the runtime can only reach through `runtime/interp.cpp`.
2. **Can the kit run one of Wine's own i386 DLLs?** The program loads Wine's
   `msvcrt.dll` with `LoadLibraryA` and calls `strlen`, `atoi`, `qsort` and
   `sprintf` through `GetProcAddress`. The kit maps and translates it with the
   existing auxiliary-module path (`[modules.aux.msvcrt]`), the same one Siege
   of Avalon uses for `Dfx_p6s.dll`.

Nothing here is a game, and nothing here ships: the sample is a measurement.

## Running it

```sh
tools/prepare.py --cc <llvm-mingw>/bin/i686-w64-mingw32-clang \
    --ghidra-home <ghidra_12.1.3_PUBLIC> --java-home <jdk>
# from the kit
tools/build.py --game-dir <here> --regenerate --target headless
RECOMP_EXE=<here>/original/sample.exe build/recomp/pop_headless
```

That is the interpreter benchmark, and it needs no Wine. Add `--wine-dlls
<wine>/lib/wine/i386-windows` to `prepare.py` for the second experiment; the
build then wants two acceptances the DLL needs:

```sh
tools/build.py --game-dir <here> --regenerate --target headless \
    --allow-table-gaps "msvcrt strftime jump tables name 1003ccde" \
    --allow-unmodelled "UD2, FISTTP and the x87 environment pair remain"
```

Nothing of anyone's machine is tracked here. `prepare.py` renders `game.toml`
from `game.toml.in` with the hashes of what it staged - `sample.exe` as the
local toolchain built it, and whichever Wine build `msvcrt.dll` came from -
and `original/`, `analysis/`, `build/` and `game.toml` are ignored. Any Wine
serves: the hash is not a pin on one distribution but on the exact bytes the
translation was made from, which is what the loader checks before it maps
anything. Wine is LGPL and none of it is redistributed here. The runs below
used CrossOver 26.3.0's `msvcrt.dll`.

## Result 1: the interpreter costs about 10x

20,000,000 iterations of one integer kernel, run translated and then from a
copy of its own bytes in the heap, in the same process, each the fastest of
three calls. Every row below is five runs on an idle M-series Mac; translated
code measured 27-29 ms in all of them, and native arm64 C compiled from the
same source takes 58 ms, so translated code is native speed here. A busy
machine moves every number - one later sitting read 56 ms and 590 ms for the
same two paths - so the ratio within a run is what to read.

| Interpreter | Interpreted | vs translated |
|---|---:|---:|
| As the `nfsmw` branch had it | 505 ms | 18x |
| Resolved branch targets, lazy flags | 455 ms | 16x |
| Operand fast paths, pointer walk, one case per operation | 286 ms | 10x |

(An earlier session measured 940 ms and 510 ms for the first two rows while
the machine was busy building. The table above replaces those numbers; the
machine's state moved them by nearly 2x, which is why every row here was
re-measured together, idle, against the same translated run.)

What each change did:

- **Branch targets resolved when the routine is decoded.** Taking a branch
  looked its target address up in a hash map, twice per iteration of this
  loop; each branch now carries its target's index.
- **Lazy flags.** Flags are kept as the operands that produced them and
  computed when a Jcc, a CALL or a RET reads them. Worth little on this
  kernel, which reads a flag after nearly every instruction - the worst case
  for the change.
- **Operand fast paths.** A register or an immediate operand is now an inline
  array read; only memory, which has an address to form and bounds-check,
  reaches an out-of-line function.
- **Pointer walk.** The decoded stream is walked as a pointer, with no index
  arithmetic and no bound tested per instruction: `build()` already
  guarantees every branch target is an instruction of the routine.
- **One case per operation.** Lazy flags had introduced a second switch inside
  the arithmetic case; each operation now computes its result directly.

**Fusing a compare with the branch that reads it made no measurable
difference** (290 ms against 293 ms) and was dropped rather than kept on the
theory that it should help. It is still the obvious thing to try on code with
more compare-and-branch pairs than this.

About 180 million guest instructions in 286 ms is roughly 6 cycles each.
What is left is dispatch; threading it (computed goto) is the next
experiment, and is untested here. Interpretation will not approach translated
speed - that is what the translator is for - so the useful target for an
interpreter tier is "fast enough to boot an unknown game and report what it
needs", not "fast enough to play".

The interpreter needed one addition to run the kernel at all: `TEST EAX,imm32`
and `TEST r/m32,imm32` (opcodes `A9` and `F7 /0`), which it did not decode.
Its own tests came over too: `interp_tests` (23 checks) and the Unicorn
differential test, extended to cover the new `TEST` forms; 300 random routines
match Unicorn's registers, flags and memory after every change above.

## Result 2: a Wine DLL runs

Wine's `msvcrt.dll` (639 KB, 2,686 listed functions) exports Ghidra listings,
translates whole (2,696 functions, 15 chunks), maps at its own base
`0x10000000`, and `LoadLibraryA` runs its entry point. The program then calls
four of its exports and gets the right answers:

```
msvcrt.strlen 10
msvcrt.atoi 7655                       # -12345, offset by 20000
msvcrt.qsort.sorted 1                  # sorted, with this program's comparator
msvcrt.sprintf.text wine|-42|0beef|Z
```

That took SSE2 in the translator, which is the finding this sample was
written to produce. **SSE2 is ordinary code generation in this build, not a
math-library detail**: `memset` stores through XMM registers from its second
instruction, and locale initialisation uses `MOVD`/`PUNPCKLDQ` merely to write
two dwords. Nothing checks CPUID first, so the kit's "no SSE" `recomp_cpuid`
steered around none of it, and 154 of 2,686 functions were affected. A native
`memset` was written first and then thrown away: with the lane and scalar
forms translated, the DLL's own `memset` runs.

Eight instructions in the whole DLL remain unmodelled - four `UD2`, two
`FISTTP` and the x87 environment pair - and none is reached.

Two smaller findings, both since fixed or recorded:

- **Missing imports.** The kit implements 88 of msvcrt's 129 `kernel32`
  imports and none of its 13 `ntdll` ones. The run named the ones it reached:
  `__wine_dbg_header`, `__wine_dbg_output` and `InitializeCriticalSectionEx`.
  The Wine debug-channel functions also have no known argument count, so the
  runtime cannot correct the stack after them.
- **A listing gap.** Three `strftime` jump tables name `1003ccde`, a block
  Ghidra does not list. `[translate] entry_points` does not adopt it, because
  it is a block inside a function rather than a function; `--allow-table-gaps`
  accepts it instead.

## Result 3: run, discover, regenerate

Static discovery misses code - a function only reached through a pointer
nothing resolves, a jump-table slot no listing owns, a block Ghidra ended
early - and until now the way back was to read a run's report and copy
addresses into `game.toml` by hand, which is what the notes in Siege's and
NFSMW's `game.toml` are. The loop closes that by itself:

```sh
# 1. a translation with a gap in it: pretend the listing never named bench()
tools/build.py --game-dir <here> --regenerate --target headless --forget 00405000
# 2. run it, recording what it reached that the translation does not carry
RECOMP_DISCOVERY=discovery.txt RECOMP_EXE=<here>/original/sample.exe \
    build/recomp/pop_headless
# 3. regenerate with that file, and build again
tools/build.py --game-dir <here> --regenerate --target headless \
    --forget 00405000 --discovered discovery.txt
```

Pass 1 translates 8 of 9 functions, and the run says

```
[recomp] call to unknown target 00405000 (ESP=0effffb4, return=0040108d, ...): returning 0
```

leaving `discovery.txt`:

```
00405000 call 0040108d 1
```

Pass 2 reports `--discovered discovery.txt: 1 address from a run`, translates
9 of 9, and the run completes with `bench.match 1` and an empty discovery
file: nothing left to find. The file is written as each address is first
reached, not at exit, because a run that ends in `abort()` - which this one
does, on msvcrt's SSE2 - would otherwise write nothing.

`--forget` stands in for the listing gap, because none of the real games
regenerate on this machine right now (Pharaoh and Populous both stop at
`SEH stub ... is not a JMP rel32 to code`, with their own pinned kit as well
as this branch, so their exported listings are stale). On a game the gap is
real and the loop is the same three commands.

**A gap costs more than the missing function.** The translator rewrites a
literal call to a dropped block as `recomp_unknown_call(c, addr); return;` -
the caller returns there and then. In pass 1 the sample prints
`sample.begin` and nothing else from that function: the call returned zero
*and* the rest of `experiment_interp` never ran. A run therefore under-reports
what is missing, which is the argument for doing this in a loop until the file
comes back empty, and for the interpreter filling the gap rather than a zero.

## A crash this sample found, and where it went

Measuring each path as the fastest of three calls - which the compiler inlines
into one loop around an indirect call - used to end the host process with a
stack overflow: `body_00401070` entered again and again with
`entry_ = 0x40106b`, a breakpoint on `recomp_unknown_call` never reached, so
translated code re-entering itself rather than anything to do with the
interpreter. The shape is ordinary compiler output, which is why it was worth
recording rather than working around.

It is fixed. Checked at `ac86bba` - main with the NFS Most Wanted line and its
MSVC bring-up, before any of this branch merged - where the same program runs
to `sample.end` with `bench.match 1`, so the fix is theirs, not this branch's.
The sample now measures that way permanently, which keeps the shape exercised
rather than only remembered.

## Kit changes this sample needed

- `runtime/interp.{h,cpp}`: the interpreter from the `nfsmw` branch, brought
  onto this branch and reached from `recomp_unknown_call` for heap addresses
  (`main` alone follows only short thunks, in `runtime/thunks.cpp`), plus the
  `TEST` immediate forms it was missing, and the five changes in Result 1.
  `runtime/tests/interp_tests.cpp` and the Unicorn differential test came
  with it.
- `tools/build.py`: a build's `--allow-table-gaps`/`--allow-unmodelled`
  acceptances now reach auxiliary modules, which are translated from listings
  with the same gaps.
- `cmake/Translate.cmake`: an auxiliary module's translation sees the game's
  `[translate] overrides` header, so a native replacement can stand in for one
  of its functions. The sample needed this for its `memset` and no longer
  does; the seam is still the right one for a module whose code cannot be
  translated.
- `tools/recomp/translate.py` and `runtime/x86.h`: the SSE2 forms above, and
  the string/SSE split for `MOVSD`.
