/* speed.exe 00778360 FUN_00778360; analysis pseudocode, not buildable source.
 * calls 00778250 FUN_00778250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00778360(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  int local_18;
  int local_c;
  
  iVar11 = 0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x8c);
  iVar6 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
  iVar9 = (uint)*(ushort *)(iVar6 + cVar1 * 2) * 0x20 + DAT_009b38bc;
  if ((iVar9 == 0) || (sVar2 = *(short *)(iVar9 + 0xe), sVar2 < 0)) {
    pbVar13 = &DAT_009b3830;
  }
  else {
    pbVar13 = (byte *)(sVar2 * 0x40 + DAT_009b38b8);
  }
  bVar5 = (byte)((ushort)*(undefined2 *)(iVar6 + 10) >> 8);
  if (cVar1 == '\0') {
    bVar5 = bVar5 >> 2;
  }
  else {
    bVar5 = bVar5 >> 1;
  }
  uVar12 = (uint)*pbVar13;
  bVar5 = bVar5 & 1 ^ cVar1 == '\0';
  local_18 = 0;
  if (3 < (int)(uVar12 - 1)) {
    local_c = 2;
    iVar9 = 8;
    iVar6 = uVar12 * 4 + -8;
    do {
      iVar8 = iVar6 + 4;
      if (bVar5 == 0) {
        iVar8 = iVar9 + -8;
      }
      if (bVar5 == 0) {
        uVar7 = (uint)pbVar13[1];
        iVar10 = iVar9 + -8;
      }
      else {
        uVar7 = uVar12 - pbVar13[1];
        iVar10 = iVar6 + 4;
      }
      fVar3 = (float)(*(int *)(pbVar13 + iVar10 + 4) >> 0x12) * _DAT_009b3a68;
      if (iVar11 < (int)uVar7) {
        fVar3 = -fVar3;
      }
      if ((float)((*(int *)(pbVar13 + iVar8 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4 +
          fVar3 < *(float *)(param_1 + 0x2c4)) {
        local_18 = local_18 + 1;
      }
      iVar8 = iVar6;
      if (bVar5 == 0) {
        iVar8 = iVar9 + -4;
      }
      if (bVar5 == 0) {
        uVar7 = (uint)pbVar13[1];
        iVar10 = iVar9 + -4;
      }
      else {
        uVar7 = uVar12 - pbVar13[1];
        iVar10 = iVar6;
      }
      fVar3 = (float)(*(int *)(pbVar13 + iVar10 + 4) >> 0x12) * _DAT_009b3a68;
      if (local_c + -1 < (int)uVar7) {
        fVar3 = -fVar3;
      }
      if ((float)((*(int *)(pbVar13 + iVar8 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4 +
          fVar3 < *(float *)(param_1 + 0x2c4)) {
        local_18 = local_18 + 1;
      }
      iVar8 = iVar6 + -4;
      if (bVar5 == 0) {
        iVar8 = iVar9;
      }
      if (bVar5 == 0) {
        uVar7 = (uint)pbVar13[1];
        iVar10 = iVar9;
      }
      else {
        uVar7 = uVar12 - pbVar13[1];
        iVar10 = iVar6 + -4;
      }
      fVar3 = (float)(*(int *)(pbVar13 + iVar10 + 4) >> 0x12) * _DAT_009b3a68;
      if (local_c < (int)uVar7) {
        fVar3 = -fVar3;
      }
      if ((float)((*(int *)(pbVar13 + iVar8 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4 +
          fVar3 < *(float *)(param_1 + 0x2c4)) {
        local_18 = local_18 + 1;
      }
      iVar8 = iVar6 + -8;
      if (bVar5 == 0) {
        iVar8 = iVar9 + 4;
      }
      if (bVar5 == 0) {
        uVar7 = (uint)pbVar13[1];
        iVar10 = iVar9 + 4;
      }
      else {
        uVar7 = uVar12 - pbVar13[1];
        iVar10 = iVar6 + -8;
      }
      fVar3 = (float)(*(int *)(pbVar13 + iVar10 + 4) >> 0x12) * _DAT_009b3a68;
      if (local_c + 1 < (int)uVar7) {
        fVar3 = -fVar3;
      }
      if ((float)((*(int *)(pbVar13 + iVar8 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4 +
          fVar3 < *(float *)(param_1 + 0x2c4)) {
        local_18 = local_18 + 1;
      }
      local_c = local_c + 4;
      iVar11 = iVar11 + 4;
      iVar9 = iVar9 + 0x10;
      iVar6 = iVar6 + -0x10;
    } while (iVar11 < (int)(uVar12 - 4));
  }
  if (iVar11 < (int)(uVar12 - 1)) {
    iVar6 = iVar11 * 4;
    iVar9 = (uVar12 - iVar11) * 4;
    do {
      iVar9 = iVar9 + -4;
      iVar8 = iVar9;
      if (bVar5 == 0) {
        iVar8 = iVar6;
      }
      uVar7 = (uint)pbVar13[1];
      iVar10 = iVar6;
      if (bVar5 != 0) {
        uVar7 = uVar12 - pbVar13[1];
        iVar10 = iVar9;
      }
      fVar3 = (float)(*(int *)(pbVar13 + iVar10 + 4) >> 0x12) * _DAT_009b3a68;
      if (iVar11 < (int)uVar7) {
        fVar3 = -fVar3;
      }
      if ((float)((*(int *)(pbVar13 + iVar8 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4 +
          fVar3 < *(float *)(param_1 + 0x2c4)) {
        local_18 = local_18 + 1;
      }
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar11 < (int)(uVar12 - 1));
  }
  iVar11 = (uVar12 - local_18) * 4 + -4;
  do {
    if (param_2 < 1) {
      local_18 = local_18 + -1;
      iVar11 = iVar11 + 4;
    }
    else {
      local_18 = local_18 + 1;
      iVar11 = iVar11 + -4;
    }
    if (local_18 < 0) {
      return 0;
    }
    if ((int)uVar12 <= local_18) {
      return 0;
    }
    iVar6 = iVar11;
    if (bVar5 == 0) {
      iVar6 = local_18 << 2;
    }
  } while ((*(uint *)(&DAT_008b5ac0 + *(int *)(param_1 + 0x80) * 4) &
           1 << ((byte)*(undefined4 *)(pbVar13 + iVar6 + 4) & 0xf)) == 0);
  if (bVar5 == 0) {
    uVar7 = (uint)pbVar13[1];
    iVar11 = local_18;
  }
  else {
    uVar7 = uVar12 - pbVar13[1];
    iVar11 = (uVar12 - local_18) + -1;
  }
  fVar3 = (float)(*(int *)(pbVar13 + iVar11 * 4 + 4) >> 0x12) * _DAT_009b3a68;
  if (local_18 < (int)uVar7) {
    fVar3 = -fVar3;
  }
  if (bVar5 != 0) {
    local_18 = (uVar12 - local_18) + -1;
  }
  fVar4 = fVar3 - *(float *)(param_1 + 0x2c4);
  if (fVar4 < _DAT_00890968) {
    fVar4 = -fVar4;
  }
  if (fVar4 < (float)((*(int *)(pbVar13 + local_18 * 4 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 *
              _DAT_008933d4) {
    return 0;
  }
  FUN_00778250(fVar3,0);
  return 1;
}

