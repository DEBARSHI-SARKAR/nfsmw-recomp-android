/* speed.exe 00430a70 FUN_00430a70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041b0d0 FUN_0041b0d0
 */

void __fastcall FUN_00430a70(int param_1)

{
  FUN_0041b0d0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

