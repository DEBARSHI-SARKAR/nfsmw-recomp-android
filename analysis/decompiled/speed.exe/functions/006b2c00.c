/* speed.exe 006b2c00 FUN_006b2c00; analysis pseudocode, not buildable source.
 * calls 006b1a20 FUN_006b1a20
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5800 FUN_006a5800
 * calls 006a59c0 FUN_006a59c0
 * calls 0066bee0 FUN_0066bee0
 * calls 006a53d0 FUN_006a53d0
 * calls 006a58e0 FUN_006a58e0
 * calls 005d29d0 FUN_005d29d0
 * calls 00690560 FUN_00690560
 * calls 006a5440 FUN_006a5440
 * calls 006a54b0 FUN_006a54b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006b2c00(undefined4 *param_1,undefined4 *param_2)

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
  float10 fVar10;
  float afStack_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d2c4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006b1a20(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008abd60;
  param_1[2] = &PTR_LAB_008abd58;
  param_1[0x13] = &PTR_LAB_008abce0;
  uVar6 = FUN_006a58e0(param_1[0xd],0);
  FUN_006a53d0(uVar6);
  local_4._0_1_ = 1;
  uVar6 = FUN_006a59c0(param_1[0xd],0);
  FUN_006a54b0(uVar6);
  local_4._0_1_ = 2;
  uVar6 = FUN_006a5800(param_1[0xd],0);
  FUN_006a5440(uVar6);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x3f8ccccd;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x11] = 0;
  local_4._0_1_ = 3;
  uVar6 = FUN_005d59f0(&LAB_004039f0);
  param_1[0x33] = uVar6;
  uVar6 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x35] = uVar6;
  uVar6 = FUN_005d59f0(&LAB_00622540);
  param_1[0x34] = uVar6;
  uVar6 = FUN_005d59f0(&LAB_00405000);
  param_1[0x36] = uVar6;
  param_2 = param_1 + 0x3d;
  iVar9 = 0;
  do {
    fVar10 = (float10)FUN_0066bee0(param_1 + 0x24,iVar9 < 2);
    iVar7 = FUN_005d29d0(0x10c,0);
    local_4._0_1_ = 4;
    if (iVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00690560((float)fVar10 * _DAT_008933d4,iVar9,param_1 + 0x24,param_1 + 0x29);
    }
    *param_2 = uVar6;
    iVar9 = iVar9 + 1;
    param_2 = param_2 + 1;
    local_4._0_1_ = 3;
  } while (iVar9 < 4);
  piVar8 = (int *)(**(code **)(*(int *)param_1[0xd] + 0x54))();
  (**(code **)(*piVar8 + 0x4c))(afStack_18);
  iVar9 = param_1[0x30];
  fVar1 = *(float *)(iVar9 + 0x54);
  fVar3 = *(float *)(iVar9 + 0x20) - *(float *)(param_1[0x26] + 0x40) * _DAT_00890d60;
  fVar4 = *(float *)(iVar9 + 0x24) - *(float *)(param_1[0x26] + 0x44) * _DAT_00890d60;
  fVar2 = *(float *)(iVar9 + 100);
  iVar9 = param_1[0x3d];
  afStack_18[0] = -afStack_18[0];
  *(float *)(iVar9 + 0x6c) = fVar3 * _DAT_00891068;
  fVar3 = fVar3 * _DAT_008933d4;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  *(float *)(iVar9 + 0x74) = fVar2;
  iVar9 = param_1[0x3e];
  fVar5 = fVar4 * _DAT_00891068;
  *(float *)(iVar9 + 0x6c) = fVar3;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  *(float *)(iVar9 + 0x74) = fVar2;
  iVar9 = param_1[0x3f];
  fVar2 = fVar2 - fVar1;
  *(float *)(iVar9 + 0x6c) = fVar5;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  fVar4 = fVar4 * _DAT_008933d4;
  *(float *)(iVar9 + 0x74) = fVar2;
  iVar9 = param_1[0x40];
  *(float *)(iVar9 + 0x6c) = fVar4;
  *(float *)(iVar9 + 0x70) = afStack_18[0];
  *(float *)(iVar9 + 0x74) = fVar2;
  ExceptionList = pvStack_10;
  return param_1;
}

