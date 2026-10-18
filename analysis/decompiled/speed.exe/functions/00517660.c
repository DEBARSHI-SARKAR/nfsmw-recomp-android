/* speed.exe 00517660 FUN_00517660; analysis pseudocode, not buildable source.
 * calls 006cb2a0 FUN_006cb2a0
 * calls 007f7c56 FUN_007f7c56
 */

void __fastcall FUN_00517660(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_006cb2a0();
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_007f7c56();
      return;
    }
  }
  return;
}

