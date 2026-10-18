/* speed.exe 00479eb0 FUN_00479eb0; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 004797f0 FUN_004797f0
 * calls 004519d0 FUN_004519d0
 */

void FUN_00479eb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar2 = DAT_00911300;
  piVar3 = DAT_00911300;
  if (DAT_00911300 != DAT_00911300 + DAT_00911308) {
    do {
      if (*(int *)(*piVar3 + 8) == param_1) {
        uVar1 = param_2;
        uVar4 = FUN_004522f0(param_2);
        uVar1 = FUN_004519d0(param_2,uVar1,uVar4);
        FUN_004797f0(uVar4,uVar1,param_2);
        piVar2 = DAT_00911300;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar2 + DAT_00911308);
  }
  return;
}

