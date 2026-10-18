/* speed.exe 0070e4f0 FUN_0070e4f0; analysis pseudocode, not buildable source.
 * calls 007053d0 FUN_007053d0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070e4f0(int param_1)

{
  FUN_007053d0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

