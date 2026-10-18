/* speed.exe 0069f6f0 FUN_0069f6f0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 005d0370 FUN_005d0370
 * calls 0066bee0 FUN_0066bee0
 * calls 005d29d0 FUN_005d29d0
 * calls 0068ff00 FUN_0068ff00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0069f6f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  int *local_58;
  float afStack_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087c542;
  pvStack_c = ExceptionList;
  local_58 = (int *)(param_1 + 300);
  iVar8 = 0;
  ExceptionList = &pvStack_c;
  do {
    local_4 = 0xffffffff;
    iVar6 = *local_58;
    if (iVar6 != 0) {
      FUN_0045a430();
      FUN_005d0370(iVar6,0x120,0);
    }
    fVar9 = (float10)FUN_0066bee0(param_1 + 0xac,iVar8 < 2);
    iVar6 = FUN_005d29d0(0x120,0);
    local_4 = 0;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0068ff00((float)fVar9 * _DAT_008933d4,iVar8,param_1 + 0xac,param_1 + 0x98);
    }
    *local_58 = iVar6;
    iVar8 = iVar8 + 1;
    local_58 = local_58 + 1;
    local_4 = 0xffffffff;
  } while (iVar8 < 4);
  piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  (**(code **)(*piVar7 + 0x4c))(afStack_18);
  iVar8 = *(int *)(param_1 + 200);
  fVar1 = *(float *)(iVar8 + 0x54);
  fVar3 = *(float *)(iVar8 + 0x20) - *(float *)(*(int *)(param_1 + 0xb4) + 0x40) * _DAT_00890d60;
  fVar4 = *(float *)(iVar8 + 0x24) - *(float *)(*(int *)(param_1 + 0xb4) + 0x44) * _DAT_00890d60;
  fVar2 = *(float *)(iVar8 + 100);
  iVar8 = *(int *)(param_1 + 300);
  afStack_18[0] = -afStack_18[0];
  *(float *)(iVar8 + 0x6c) = fVar3 * _DAT_00891068;
  fVar3 = fVar3 * _DAT_008933d4;
  *(float *)(iVar8 + 0x70) = afStack_18[0];
  *(float *)(iVar8 + 0x74) = fVar2;
  iVar8 = *(int *)(param_1 + 0x130);
  fVar5 = fVar4 * _DAT_00891068;
  *(float *)(iVar8 + 0x6c) = fVar3;
  *(float *)(iVar8 + 0x70) = afStack_18[0];
  *(float *)(iVar8 + 0x74) = fVar2;
  iVar8 = *(int *)(param_1 + 0x134);
  fVar2 = fVar2 - fVar1;
  *(float *)(iVar8 + 0x6c) = fVar5;
  *(float *)(iVar8 + 0x70) = afStack_18[0];
  fVar4 = fVar4 * _DAT_008933d4;
  *(float *)(iVar8 + 0x74) = fVar2;
  iVar8 = *(int *)(param_1 + 0x138);
  *(float *)(iVar8 + 0x6c) = fVar4;
  *(float *)(iVar8 + 0x70) = afStack_18[0];
  *(float *)(iVar8 + 0x74) = fVar2;
  ExceptionList = pvStack_10;
  return;
}

