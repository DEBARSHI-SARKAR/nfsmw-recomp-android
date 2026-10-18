/* speed.exe 006b30c0 FUN_006b30c0; analysis pseudocode, not buildable source.
 * calls 006b1a20 FUN_006b1a20
 * calls 00690cc0 FUN_00690cc0
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5800 FUN_006a5800
 * calls 006a5590 FUN_006a5590
 * calls 006a5aa0 FUN_006a5aa0
 * calls 0066bee0 FUN_0066bee0
 * calls 006a53d0 FUN_006a53d0
 * calls 006a58e0 FUN_006a58e0
 * calls 005d29d0 FUN_005d29d0
 * calls 005d7930 FUN_005d7930
 * calls 006a5440 FUN_006a5440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006b30c0(undefined4 *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float afStack_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d322;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006b1a20(param_2);
  local_4 = 0;
  if (*(int *)((int)param_2 + 4) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((int)param_2 + 4) + 0x10;
  }
  puVar10 = param_1 + 0x24;
  *puVar10 = &PTR_FUN_00890970;
  param_1[0x25] = iVar9;
  FUN_005d7930(&LAB_00445650,puVar10);
  *puVar10 = &PTR_FUN_008ab1e0;
  *puVar10 = &PTR_LAB_008abd88;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008abe40;
  param_1[2] = &PTR_LAB_008abe38;
  param_1[0x13] = &PTR_LAB_008abdc0;
  uVar6 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar6);
  local_4._0_1_ = 2;
  uVar6 = FUN_006a5800(param_1[0xd],0);
  FUN_006a5440(uVar6);
  local_4._0_1_ = 3;
  uVar6 = FUN_006a5aa0(param_1[0xd],0);
  FUN_006a5590(uVar6);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x3e000000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((int)param_1 + 0x101) = 0;
  param_1[0x41] = 0x42700000;
  puVar10 = &DAT_008a3028;
  puVar11 = param_1 + 0x42;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x11] = 0;
  local_4._0_1_ = 4;
  uVar6 = FUN_005d59f0(&LAB_004039f0);
  param_1[0x35] = uVar6;
  uVar6 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x36] = uVar6;
  uVar6 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x37] = uVar6;
  uVar6 = FUN_005d59f0(&LAB_00404020);
  param_1[0x38] = uVar6;
  iVar9 = 0;
  param_2 = param_1 + 0x60;
  do {
    fVar12 = (float10)FUN_0066bee0(param_1 + 0x26,iVar9 < 2);
    iVar7 = FUN_005d29d0(0xe8,0);
    local_4._0_1_ = 5;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_00690cc0((float)fVar12 * _DAT_008933d4);
    }
    *param_2 = iVar7;
    iVar9 = iVar9 + 1;
    param_2 = param_2 + 1;
    local_4._0_1_ = 4;
  } while (iVar9 < 4);
  piVar8 = (int *)(**(code **)(*(int *)param_1[0xd] + 0x54))();
  (**(code **)(*piVar8 + 0x4c))(afStack_18);
  iVar9 = param_1[0x2d];
  fVar1 = *(float *)(iVar9 + 0x54);
  fVar3 = *(float *)(iVar9 + 0x20) - *(float *)(param_1[0x28] + 0x40) * _DAT_00890d60;
  fVar4 = *(float *)(iVar9 + 0x24) - *(float *)(param_1[0x28] + 0x44) * _DAT_00890d60;
  fVar2 = *(float *)(iVar9 + 100);
  iVar9 = param_1[0x60];
  afStack_18[0] = -afStack_18[0];
  *(float *)(iVar9 + 0x6c) = fVar3 * _DAT_00891068;
  fVar3 = fVar3 * _DAT_008933d4;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  *(float *)(iVar9 + 0x74) = fVar2;
  iVar9 = param_1[0x61];
  fVar5 = fVar4 * _DAT_00891068;
  *(float *)(iVar9 + 0x6c) = fVar3;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  *(float *)(iVar9 + 0x74) = fVar2;
  iVar9 = param_1[0x62];
  fVar2 = fVar2 - fVar1;
  *(float *)(iVar9 + 0x6c) = fVar5;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  fVar4 = fVar4 * _DAT_008933d4;
  *(float *)(iVar9 + 0x74) = fVar2;
  iVar9 = param_1[99];
  *(float *)(iVar9 + 0x6c) = fVar4;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  *(float *)(iVar9 + 0x74) = fVar2;
  ExceptionList = pvStack_10;
  return param_1;
}

