/* speed.exe 004e6d00 FUN_004e6d00; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004e6d00(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))(0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))(0);
  return;
}

