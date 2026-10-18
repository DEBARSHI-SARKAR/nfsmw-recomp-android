/* speed.exe 004e6e20 FUN_004e6e20; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004e6e20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}

