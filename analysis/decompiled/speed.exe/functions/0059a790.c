/* speed.exe 0059a790 FUN_0059a790; analysis pseudocode, not buildable source.
 * calls 005848b0 FUN_005848b0
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00503400 FUN_00503400
 * calls 00591a00 FUN_00591a00
 * calls 00591ab0 FUN_00591ab0
 * calls 00582c70 FUN_00582c70
 * calls 00591460 FUN_00591460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059a790(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined4 local_50 [19];
  
  iVar13 = *(int *)(param_1 + 0x2c);
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x3f800000;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  local_64 = 0x3f800000;
  local_70 = 0x43a00000;
  local_6c = 0x43700000;
  local_68 = 0;
  uVar9 = FUN_005848b0(iVar13,local_50,local_60,*(undefined2 *)(param_1 + 0x20),0x3f800000);
  FUN_0045ecf0(local_50,&local_a0,local_50);
  iVar10 = FUN_00503400(*(undefined4 *)(param_1 + 0x24),1,0);
  if (param_2 == 0) {
    param_2 = FUN_00591ab0(param_1,iVar10);
  }
  else {
    FUN_00591a00(param_3);
  }
  iVar11 = (int)*(short *)(iVar10 + 0x44);
  iVar15 = (int)*(short *)(iVar10 + 0x46);
  fVar5 = (float)iVar11;
  if (iVar11 < 0) {
    fVar5 = fVar5 + _DAT_00891214;
  }
  fVar7 = (float)iVar15;
  if (iVar15 < 0) {
    fVar7 = fVar7 + _DAT_00891214;
  }
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else {
    uVar12 = iVar11 - 1;
    iVar11 = 2;
    while (uVar12 = uVar12 >> 1, uVar12 != 0) {
      iVar11 = iVar11 << 1;
    }
  }
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    uVar12 = iVar15 - 1;
    iVar15 = 2;
    while (uVar12 = uVar12 >> 1, uVar12 != 0) {
      iVar15 = iVar15 << 1;
    }
  }
  fVar6 = (float)iVar11;
  if (iVar11 < 0) {
    fVar6 = fVar6 + _DAT_00891214;
  }
  fVar8 = (float)iVar15;
  if (iVar15 < 0) {
    fVar8 = fVar8 + _DAT_00891214;
  }
  local_c0 = ((*(int *)(iVar13 + 0x54) / 2 | *(int *)(iVar13 + 0x60) << 8) << 8 |
             *(int *)(iVar13 + 0x58) / 2) << 8 | *(int *)(iVar13 + 0x5c) / 2;
  local_bc = ((*(int *)(iVar13 + 100) / 2 | *(int *)(iVar13 + 0x70) << 8) << 8 |
             *(int *)(iVar13 + 0x68) / 2) << 8 | *(int *)(iVar13 + 0x6c) / 2;
  local_b8 = ((*(int *)(iVar13 + 0x74) / 2 | *(int *)(iVar13 + 0x80) << 8) << 8 |
             *(int *)(iVar13 + 0x78) / 2) << 8 | *(int *)(iVar13 + 0x7c) / 2;
  fVar1 = *(float *)(iVar13 + 0x44);
  fVar2 = *(float *)(iVar13 + 0x4c);
  local_a8 = *(int *)(iVar13 + 0x8c);
  fVar3 = *(float *)(iVar13 + 0x48);
  fVar4 = *(float *)(iVar13 + 0x50);
  local_b4 = ((*(int *)(iVar13 + 0x84) / 2 | *(int *)(iVar13 + 0x90) << 8) << 8 |
             *(int *)(iVar13 + 0x88) / 2) << 8 | local_a8 / 2;
  puVar14 = local_50;
  puVar16 = (undefined4 *)(param_2 + 0x30);
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  FUN_00591460(0xbf000000,0xbf000000,0x3f000000,0x3f000000,0x3f800000,(fVar5 / fVar6) * fVar1,
               (fVar7 / fVar8) * fVar3,(fVar5 / fVar6) * fVar2,(fVar7 / fVar8) * fVar4,&local_c0,
               uVar9,param_3);
  *(int *)(param_2 + 0x14) = iVar10;
  FUN_00582c70();
  return;
}

