/* speed.exe 006a0d90 FUN_006a0d90; analysis pseudocode, not buildable source.
 * calls 00693010 FUN_00693010
 * calls 00692f10 FUN_00692f10
 * calls 00691f90 FUN_00691f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006a0d90(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  cVar5 = (**(code **)(**(int **)(param_1 + 0x34) + 0x24))();
  if (cVar5 == '\0') {
    uVar6 = FUN_00691f90(param_2,param_3);
    return uVar6;
  }
  fVar8 = (float10)(**(code **)(*(int *)(param_1 + 0x54) + 4))();
  fVar1 = (float)fVar8;
  iVar7 = FUN_00691f90(param_2,fVar1);
  if (iVar7 == 1) {
    return 1;
  }
  cVar5 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
  if (cVar5 != '\0') {
    return 0;
  }
  bVar3 = true;
  if (param_2 == 2) {
    iVar7 = 0;
    do {
      cVar5 = (**(code **)(**(int **)(param_1 + 0x1d0) + 0x24))(iVar7);
      if (cVar5 == '\0') {
LAB_006a0e30:
        bVar4 = 0;
      }
      else {
        fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x1d0) + 0x30))(iVar7);
        if ((float10)_DAT_00890e98 <= fVar8) goto LAB_006a0e30;
        bVar4 = 1;
      }
      bVar3 = (bool)(bVar3 & bVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  iVar7 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (((param_2 < iVar7) && (1 < param_2)) && (bVar3)) {
    fVar9 = (float10)FUN_00693010(fVar1,param_2,param_2 + 1);
    fVar8 = (float10)_DAT_00890968;
    *(float *)(param_1 + 0x1bc) = (float)fVar9;
    if (fVar8 < fVar9) {
      return 4;
    }
    if (fVar9 < (float10)_DAT_00890968) {
      return 5;
    }
    fVar2 = *(float *)(param_1 + 0x9c + param_2 * 4);
    fVar8 = (float10)FUN_00692f10(param_2 + 1);
    if ((float10)fVar2 - fVar8 * (float10)_DAT_008aac78 < (float10)fVar1) {
      return 3;
    }
  }
  return 0;
}

