/* speed.exe 007c4d10 ___CxxLongjmpUnwind@4; analysis pseudocode, not buildable source.
 * calls 007cfc60 ___FrameUnwindToState
 */

/* Library Function - Single Match
    ___CxxLongjmpUnwind@4
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___CxxLongjmpUnwind_4(int param_1)

{
  ___FrameUnwindToState
            (*(undefined4 *)(param_1 + 0x18),0,*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x1c));
  return;
}

