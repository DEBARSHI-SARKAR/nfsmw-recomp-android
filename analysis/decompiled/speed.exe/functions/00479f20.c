/* speed.exe 00479f20 FUN_00479f20; analysis pseudocode, not buildable source.
 * calls 00479d80 FUN_00479d80
 * calls 006e8df0 FUN_006e8df0
 */

void FUN_00479f20(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_006e8df0();
  if ((iVar1 == 0) && (piVar3 = DAT_00911300, DAT_00911300 != DAT_00911300 + DAT_00911308)) {
    do {
      iVar1 = *(int *)(*piVar3 + 8);
      iVar2 = (**(code **)(*param_1 + 0x2c))();
      if (iVar1 == iVar2) {
        FUN_00479d80();
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != DAT_00911300 + DAT_00911308);
  }
  return;
}

