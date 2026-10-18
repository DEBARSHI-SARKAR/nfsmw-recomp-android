/* speed.exe 005c9660 FUN_005c9660; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c9660(float *param_1,uint param_2,int param_3,undefined4 param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  param_5[2] = 1e+09;
  param_5[1] = 1e+09;
  *param_5 = 1e+09;
  param_6[2] = -1e+09;
  param_6[1] = -1e+09;
  *param_6 = -1e+09;
  uVar12 = 0;
  uVar11 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (3 < (int)param_2) {
    uVar14 = 2;
    pfVar9 = (float *)(param_3 + 8);
    do {
      if (pfVar9[-2] < *param_5) {
        *param_5 = pfVar9[-2];
        local_28 = uVar11;
      }
      if (pfVar9[-1] < param_5[1]) {
        param_5[1] = pfVar9[-1];
        local_24 = uVar11;
      }
      if (*pfVar9 < param_5[2]) {
        param_5[2] = *pfVar9;
        local_20 = uVar11;
      }
      if (*param_6 < pfVar9[-2]) {
        *param_6 = pfVar9[-2];
        local_1c = uVar11;
      }
      if (param_6[1] < pfVar9[-1]) {
        param_6[1] = pfVar9[-1];
        local_18 = uVar11;
      }
      if (param_6[2] < *pfVar9) {
        param_6[2] = *pfVar9;
        uVar12 = uVar11;
      }
      if (pfVar9[2] < *param_5) {
        *param_5 = pfVar9[2];
        local_28 = uVar14 - 1;
      }
      if (pfVar9[3] < param_5[1]) {
        param_5[1] = pfVar9[3];
        local_24 = uVar14 - 1;
      }
      if (pfVar9[4] < param_5[2]) {
        param_5[2] = pfVar9[4];
        local_20 = uVar14 - 1;
      }
      if (*param_6 < pfVar9[2]) {
        *param_6 = pfVar9[2];
        local_1c = uVar14 - 1;
      }
      if (param_6[1] < pfVar9[3]) {
        param_6[1] = pfVar9[3];
        local_18 = uVar14 - 1;
      }
      if (param_6[2] < pfVar9[4]) {
        param_6[2] = pfVar9[4];
        uVar12 = uVar14 - 1;
      }
      if (pfVar9[6] < *param_5) {
        *param_5 = pfVar9[6];
        local_28 = uVar14;
      }
      if (pfVar9[7] < param_5[1]) {
        param_5[1] = pfVar9[7];
        local_24 = uVar14;
      }
      if (pfVar9[8] < param_5[2]) {
        param_5[2] = pfVar9[8];
        local_20 = uVar14;
      }
      if (*param_6 < pfVar9[6]) {
        *param_6 = pfVar9[6];
        local_1c = uVar14;
      }
      if (param_6[1] < pfVar9[7]) {
        param_6[1] = pfVar9[7];
        local_18 = uVar14;
      }
      if (param_6[2] < pfVar9[8]) {
        param_6[2] = pfVar9[8];
        uVar12 = uVar14;
      }
      if (pfVar9[10] < *param_5) {
        *param_5 = pfVar9[10];
        local_28 = uVar14 + 1;
      }
      if (pfVar9[0xb] < param_5[1]) {
        param_5[1] = pfVar9[0xb];
        local_24 = uVar14 + 1;
      }
      if (pfVar9[0xc] < param_5[2]) {
        param_5[2] = pfVar9[0xc];
        local_20 = uVar14 + 1;
      }
      if (*param_6 < pfVar9[10]) {
        *param_6 = pfVar9[10];
        local_1c = uVar14 + 1;
      }
      if (param_6[1] < pfVar9[0xb]) {
        param_6[1] = pfVar9[0xb];
        local_18 = uVar14 + 1;
      }
      if (param_6[2] < pfVar9[0xc]) {
        param_6[2] = pfVar9[0xc];
        uVar12 = uVar14 + 1;
      }
      uVar11 = uVar11 + 4;
      uVar14 = uVar14 + 4;
      pfVar9 = pfVar9 + 0x10;
    } while (uVar11 < param_2 - 3);
  }
  if (uVar11 < param_2) {
    pfVar9 = (float *)(uVar11 * 0x10 + 8 + param_3);
    do {
      if (pfVar9[-2] < *param_5) {
        *param_5 = pfVar9[-2];
        local_28 = uVar11;
      }
      if (pfVar9[-1] < param_5[1]) {
        param_5[1] = pfVar9[-1];
        local_24 = uVar11;
      }
      if (*pfVar9 < param_5[2]) {
        param_5[2] = *pfVar9;
        local_20 = uVar11;
      }
      if (*param_6 < pfVar9[-2]) {
        *param_6 = pfVar9[-2];
        local_1c = uVar11;
      }
      if (param_6[1] < pfVar9[-1]) {
        param_6[1] = pfVar9[-1];
        local_18 = uVar11;
      }
      if (param_6[2] < *pfVar9) {
        param_6[2] = *pfVar9;
        uVar12 = uVar11;
      }
      uVar11 = uVar11 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar11 < param_2);
  }
  pfVar9 = (float *)(local_28 * 0x10 + param_3);
  pfVar10 = (float *)(local_18 * 0x10 + param_3);
  pfVar6 = (float *)(local_24 * 0x10 + param_3);
  pfVar13 = (float *)(uVar12 * 0x10 + param_3);
  uVar12 = 0;
  iVar7 = local_20 * 0x10 + param_3;
  iVar8 = local_1c * 0x10 + param_3;
  fVar3 = (DAT_008a2fb4 + *pfVar9 + *pfVar6 + *(float *)(local_20 * 0x10 + param_3) +
           *(float *)(local_1c * 0x10 + param_3) + *pfVar10 + *pfVar13) * _DAT_00894210;
  fVar1 = (DAT_008a2fb8 + pfVar9[1] + pfVar6[1] + *(float *)(iVar7 + 4) + *(float *)(iVar8 + 4) +
           pfVar10[1] + pfVar13[1]) * _DAT_00894210;
  fVar2 = (DAT_008a2fbc + pfVar9[2] + pfVar6[2] + *(float *)(iVar7 + 8) + *(float *)(iVar8 + 8) +
           pfVar10[2] + pfVar13[2]) * _DAT_00894210;
  fVar4 = _DAT_00890968;
  if (3 < (int)param_2) {
    iVar7 = (param_2 - 4 >> 2) + 1;
    pfVar9 = (float *)(param_3 + 0x20);
    uVar12 = iVar7 * 4;
    do {
      fVar5 = (pfVar9[-8] - fVar3) * (pfVar9[-8] - fVar3) +
              (pfVar9[-7] - fVar1) * (pfVar9[-7] - fVar1) +
              (pfVar9[-6] - fVar2) * (pfVar9[-6] - fVar2);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = (pfVar9[-4] - fVar3) * (pfVar9[-4] - fVar3) +
              (pfVar9[-3] - fVar1) * (pfVar9[-3] - fVar1) +
              (pfVar9[-2] - fVar2) * (pfVar9[-2] - fVar2);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = (*pfVar9 - fVar3) * (*pfVar9 - fVar3) +
              (pfVar9[1] - fVar1) * (pfVar9[1] - fVar1) + (pfVar9[2] - fVar2) * (pfVar9[2] - fVar2);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = (pfVar9[4] - fVar3) * (pfVar9[4] - fVar3) +
              (pfVar9[5] - fVar1) * (pfVar9[5] - fVar1) + (pfVar9[6] - fVar2) * (pfVar9[6] - fVar2);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      pfVar9 = pfVar9 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (uVar12 < param_2) {
    pfVar9 = (float *)(uVar12 * 0x10 + param_3);
    iVar7 = param_2 - uVar12;
    do {
      fVar5 = (*pfVar9 - fVar3) * (*pfVar9 - fVar3) +
              (pfVar9[1] - fVar1) * (pfVar9[1] - fVar1) + (pfVar9[2] - fVar2) * (pfVar9[2] - fVar2);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      pfVar9 = pfVar9 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  fVar4 = fVar4 + _DAT_008910cc;
  *param_1 = fVar3;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = SQRT(fVar4);
  return;
}

