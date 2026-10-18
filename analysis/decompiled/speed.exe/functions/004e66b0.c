/* speed.exe 004e66b0 FUN_004e66b0; analysis pseudocode, not buildable source.
 * calls 004da470 FUN_004da470
 * calls 00831782 FUN_00831782
 * calls 004b0320 FUN_004b0320
 * calls 004b02b0 FUN_004b02b0
 * calls 00831682 FUN_00831682
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e66b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_004b0320(param_2);
    if ((((_DAT_008efa64 < *(float *)(*(int *)(param_1 + 0x18) + 0x70)) &&
         (*(int *)(param_1 + 0x50) == 0x3f800000)) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x38), iVar1 != 3)) && (iVar1 == 0)) {
      FUN_004b02b0(0x3f800000,0,0x96,0);
    }
    cVar3 = FUN_004da470();
    if ((cVar3 != '\0') && (piVar2 = *(int **)(param_1 + 0x38), piVar2 != (int *)0x0)) {
      if (*piVar2 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar2);
      *(undefined4 *)(param_1 + 0x38) = 0;
      DAT_009142f0 = DAT_009142f0 + -1;
    }
  }
  return;
}

