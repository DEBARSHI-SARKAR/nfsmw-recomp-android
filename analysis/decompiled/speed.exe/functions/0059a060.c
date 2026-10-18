/* speed.exe 0059a060 FUN_0059a060; analysis pseudocode, not buildable source.
 * calls 005848b0 FUN_005848b0
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00503400 FUN_00503400
 * calls 00591a00 FUN_00591a00
 * calls 00582870 FUN_00582870
 * calls 005b35a0 FUN_005b35a0
 * calls 00591ab0 FUN_00591ab0
 * calls 00582c70 FUN_00582c70
 * calls 0056fae0 FUN_0056fae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059a060(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [19];
  
  iVar20 = *(int *)(param_1 + 0x2c);
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_54 = 0x3f800000;
  local_60 = 0x43a00000;
  local_5c = 0x43700000;
  local_58 = 0;
  FUN_005848b0(iVar20,local_50,&local_b0,*(undefined2 *)(param_1 + 0x20),0x3f800000);
  FUN_0045ecf0(local_50,&local_90,local_50);
  iVar16 = FUN_00503400(*(undefined4 *)(param_1 + 0x24),1,0);
  uVar26 = 0;
  uVar25 = 1;
  uVar17 = FUN_005b35a0(0);
  uVar17 = FUN_00503400(uVar17,uVar25,uVar26);
  if (param_2 == 0) {
    param_2 = FUN_00591ab0(param_1,iVar16);
  }
  else {
    FUN_00591a00(param_3);
  }
  iVar23 = (int)*(short *)(iVar16 + 0x44);
  iVar21 = (int)*(short *)(iVar16 + 0x46);
  fVar10 = (float)iVar23;
  if (iVar23 < 0) {
    fVar10 = fVar10 + _DAT_00891214;
  }
  fVar12 = (float)iVar21;
  if (iVar21 < 0) {
    fVar12 = fVar12 + _DAT_00891214;
  }
  if (iVar23 == 0) {
    iVar18 = 0;
  }
  else {
    uVar1 = iVar23 - 1;
    iVar18 = 2;
    while (uVar1 = uVar1 >> 1, uVar1 != 0) {
      iVar18 = iVar18 << 1;
    }
  }
  if (iVar21 == 0) {
    iVar19 = 0;
  }
  else {
    uVar1 = iVar21 - 1;
    iVar19 = 2;
    while (uVar1 = uVar1 >> 1, uVar1 != 0) {
      iVar19 = iVar19 << 1;
    }
  }
  fVar11 = (float)iVar18;
  if (iVar18 < 0) {
    fVar11 = fVar11 + _DAT_00891214;
  }
  fVar13 = (float)iVar19;
  if (iVar19 < 0) {
    fVar13 = fVar13 + _DAT_00891214;
  }
  local_a0 = ((local_b0 / 2 | local_a4 << 8) << 8 | local_ac / 2) << 8 | local_a8 / 2;
  fVar2 = *(float *)(iVar20 + 0x44);
  fVar3 = *(float *)(iVar20 + 0x4c);
  fVar4 = *(float *)(iVar20 + 0x48);
  fVar5 = *(float *)(iVar20 + 0x50);
  fVar14 = (float)iVar23;
  if (iVar23 < 0) {
    fVar14 = fVar14 + _DAT_00891214;
  }
  fVar15 = (float)iVar21;
  if (iVar21 < 0) {
    fVar15 = fVar15 + _DAT_00891214;
  }
  if (iVar23 == 0) {
    iVar23 = 0;
  }
  else {
    uVar1 = iVar23 - 1;
    iVar23 = 2;
    while (uVar1 = uVar1 >> 1, uVar1 != 0) {
      iVar23 = iVar23 << 1;
    }
  }
  if (iVar21 == 0) {
    iVar21 = 0;
  }
  else {
    uVar1 = iVar21 - 1;
    iVar21 = 2;
    while (uVar1 = uVar1 >> 1, uVar1 != 0) {
      iVar21 = iVar21 << 1;
    }
  }
  fVar8 = (float)iVar23;
  if (iVar23 < 0) {
    fVar8 = fVar8 + _DAT_00891214;
  }
  fVar9 = (float)iVar21;
  if (iVar21 < 0) {
    fVar9 = fVar9 + _DAT_00891214;
  }
  fVar6 = fVar14 * (fVar14 / fVar8) * *(float *)(iVar20 + 0x54);
  fVar7 = fVar15 * (fVar15 / fVar9) * *(float *)(iVar20 + 0x58);
  fVar8 = fVar14 * (fVar14 / fVar8) * *(float *)(iVar20 + 0x6c);
  fVar9 = fVar15 * (fVar15 / fVar9) * *(float *)(iVar20 + 0x70);
  local_9c = local_a0;
  local_98 = local_a0;
  local_94 = local_a0;
  FUN_0056fae0(*(float *)(iVar20 + 0x8c) * _DAT_0089551c,
               fVar14 * *(float *)(iVar20 + 0x84) - fVar14 * _DAT_008933d4,
               fVar15 * *(float *)(iVar20 + 0x88) - fVar15 * _DAT_008933d4);
  fVar14 = _DAT_0089096c / fVar14;
  fVar15 = _DAT_0089096c / fVar15;
  puVar22 = local_50;
  puVar24 = (undefined4 *)(param_2 + 0x30);
  for (iVar20 = 0x10; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar24 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar24 = puVar24 + 1;
  }
  FUN_00582870(0xbf000000,0xbf000000,0x3f000000,0x3f000000,0x3f800000,(fVar10 / fVar11) * fVar2,
               (fVar12 / fVar13) * fVar4,(fVar10 / fVar11) * fVar3,(fVar12 / fVar13) * fVar5,
               fVar6 * fVar14,fVar7 * fVar15,fVar14 * fVar8,fVar7 * fVar15,fVar14 * fVar8,
               fVar9 * fVar15,fVar14 * fVar6,fVar15 * fVar9,&local_a0,iVar16,uVar17);
  *(int *)(param_2 + 0x14) = iVar16;
  FUN_00582c70();
  return;
}

