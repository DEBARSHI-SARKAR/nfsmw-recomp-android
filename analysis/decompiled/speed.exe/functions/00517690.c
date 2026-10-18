/* speed.exe 00517690 FUN_00517690; analysis pseudocode, not buildable source.
 * calls 006cb2a0 FUN_006cb2a0
 * calls 007f7c5e FUN_007f7c5e
 */

void __fastcall FUN_00517690(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_006cb2a0();
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_007f7c5e();
      return;
    }
  }
  return;
}

