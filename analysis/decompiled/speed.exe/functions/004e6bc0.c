/* speed.exe 004e6bc0 FUN_004e6bc0; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004e6bc0(int param_1)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

