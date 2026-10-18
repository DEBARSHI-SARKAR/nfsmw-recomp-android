/* speed.exe 004dcd00 FUN_004dcd00; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004dcd00(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

