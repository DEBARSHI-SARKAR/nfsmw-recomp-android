/* speed.exe 004ccd60 FUN_004ccd60; analysis pseudocode, not buildable source.
 * calls 004bfc60 FUN_004bfc60
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004ccd60(int param_1)

{
  FUN_004bfc60();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x30,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

