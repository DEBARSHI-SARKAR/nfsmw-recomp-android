/* speed.exe 00471b60 FUN_00471b60; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 004519d0 FUN_004519d0
 */

void FUN_00471b60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar2 = DAT_00911300;
  if (DAT_00911300 != DAT_00911300 + DAT_00911308) {
    do {
      iVar1 = *piVar2;
      if ((*(int *)(iVar1 + 8) == param_1) &&
         (piVar3 = *(int **)(iVar1 + 0x20), piVar3 != (int *)0x0)) {
        uVar4 = FUN_004522f0("CDActionDrive");
        FUN_004519d0("CDActionDrive");
        piVar3 = (int *)(**(code **)(*piVar3 + 0xc))();
        if ((*piVar3 == (int)uVar4) && (piVar3[1] == (int)((ulonglong)uVar4 >> 0x20))) {
          *(undefined4 *)(iVar1 + 0x2c0) = param_2;
        }
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_00911300 + DAT_00911308);
  }
  return;
}

