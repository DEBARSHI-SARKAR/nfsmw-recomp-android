/* speed.exe 00743600 FUN_00743600; analysis pseudocode, not buildable source.
 * calls 0045f640 FUN_0045f640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00743600(uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  float local_58;
  float local_48;
  float local_38;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  
  iVar7 = param_1 * 0x10;
  uVar10 = 0;
  iVar8 = 0;
  local_20 = (DAT_009b2910 - *(float *)(&DAT_009b2900 + iVar7)) * _DAT_008b2f2c;
  local_1c = (DAT_009b2914 - *(float *)(&DAT_009b2904 + iVar7)) * _DAT_008b2f2c;
  local_18 = (DAT_009b2918 - *(float *)(&DAT_009b2908 + iVar7)) * _DAT_008b2f2c;
  if (0 < (int)param_1) {
    iVar8 = param_1 * 3;
    pfVar14 = &DAT_009b2918;
    pfVar13 = (float *)&DAT_009b0c98;
    do {
      uVar9 = uVar10 & 1;
      uVar12 = uVar9 ^ 1;
      uVar10 = uVar10 + 1;
      uVar11 = uVar10;
      if (uVar10 == param_1) {
        uVar11 = 0;
      }
      fVar3 = (&DAT_009b2910)[uVar11 * 4];
      pfVar1 = pfVar14 + -2;
      fVar4 = *pfVar1;
      fVar5 = (&DAT_009b2914)[uVar11 * 4];
      pfVar2 = local_30 + uVar9 * 4;
      fVar6 = pfVar14[-1];
      local_68 = (&DAT_009b2918)[uVar11 * 4] - *pfVar14;
      local_30[uVar9 * 4 + 2] = local_68;
      *pfVar2 = fVar3 - fVar4;
      local_30[uVar9 * 4 + 1] = fVar5 - fVar6;
      *pfVar2 = *pfVar2 * _DAT_008b2f2c;
      local_30[uVar9 * 4 + 1] = local_30[uVar9 * 4 + 1] * _DAT_008b2f2c;
      local_30[uVar9 * 4 + 2] = local_30[uVar9 * 4 + 2] * _DAT_008b2f2c;
      fVar3 = *pfVar1;
      fVar4 = local_30[uVar12 * 4];
      fVar5 = pfVar14[-1];
      fVar6 = local_30[uVar12 * 4 + 1];
      local_58 = *pfVar14 - local_30[uVar12 * 4 + 2];
      *pfVar13 = local_58;
      pfVar13[-2] = fVar3 - fVar4;
      pfVar13[-1] = fVar5 - fVar6;
      fVar3 = *pfVar2;
      fVar4 = *pfVar1;
      fVar5 = local_30[uVar9 * 4 + 1];
      fVar6 = pfVar14[-1];
      local_48 = local_30[uVar9 * 4 + 2] + *pfVar14;
      pfVar13[8] = local_48;
      pfVar13[6] = fVar3 + fVar4;
      pfVar13[7] = fVar5 + fVar6;
      local_80 = *pfVar2 - local_30[uVar12 * 4];
      local_7c = local_30[uVar9 * 4 + 1] - local_30[uVar12 * 4 + 1];
      local_78 = local_30[uVar9 * 4 + 2] - local_30[uVar12 * 4 + 2];
      local_38 = local_78;
      FUN_0045f640(pfVar13 + 2,pfVar1,&local_80);
      pfVar13 = pfVar13 + 0xc;
      pfVar14 = pfVar14 + 4;
    } while ((int)uVar10 < (int)param_1);
  }
  return iVar8;
}

