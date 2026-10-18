/* speed.exe 004da4c0 FUN_004da4c0; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004da4c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
    DAT_009142f0 = DAT_009142f0 + -1;
  }
  return;
}

