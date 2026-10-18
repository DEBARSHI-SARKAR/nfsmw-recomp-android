/* speed.exe 00612220 FUN_00612220; analysis pseudocode, not buildable source.
 * calls 00405960 FUN_00405960
 * calls 0056f120 FUN_0056f120
 * calls 00590500 FUN_00590500
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00654af0 FUN_00654af0
 */

void FUN_00612220(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((DAT_0092d884 != 0) && (piVar2 = (int *)*DAT_0092d87c, piVar2 != (int *)0x0)) {
    if (DAT_0092d884 == 0) {
      piVar2 = (int *)0x0;
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 4))();
    if ((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x24))(), cVar1 != '\0')) {
      piVar3 = (int *)(**(code **)(*piVar2 + 0x20))();
      iVar4 = (**(code **)(*piVar3 + 0x1c))();
      if (((-1 < iVar4) &&
          (((iVar4 < 2 && (*(int *)(DAT_0091cf90 + 0x10 + iVar4 * 4) != -0x414)) &&
           (iVar4 = FUN_0056ecc0(), iVar4 != 0)))) && (iVar4 = FUN_0056f120(), iVar4 != 0)) {
        *(uint *)(iVar4 + 0x10) =
             (uint)(*(int *)(iVar4 + 0x10) + param_1) / *(uint *)PTR_DAT_008f5a50;
        iVar4 = piVar2[2];
        uVar5 = FUN_00590500();
        FUN_00405960(iVar4,uVar5);
        FUN_00654af0();
      }
    }
  }
  return;
}

