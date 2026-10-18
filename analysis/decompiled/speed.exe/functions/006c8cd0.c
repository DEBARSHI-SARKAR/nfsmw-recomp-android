/* speed.exe 006c8cd0 FUN_006c8cd0; analysis pseudocode, not buildable source.
 * calls 006c88d0 FUN_006c88d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_006c8cd0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float local_70 [7];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_8;
  float local_4;
  
  fVar1 = param_2[3];
  fVar3 = param_2[0xf];
  fVar2 = param_2[7];
  fVar4 = param_2[0xb];
  fVar7 = fVar1 - *param_2;
  local_8 = param_2[8];
  fVar8 = fVar2 - param_2[4];
  local_4 = param_2[0xc];
  local_70[2] = fVar4 - local_8;
  local_70[3] = fVar3 - local_4;
  local_70[4] = *param_2 + fVar1;
  local_70[5] = param_2[4] + fVar2;
  local_70[6] = local_8 + fVar4;
  local_54 = local_4 + fVar3;
  local_50 = fVar1 - param_2[1];
  local_4c = fVar2 - param_2[5];
  local_48 = fVar4 - param_2[9];
  local_44 = fVar3 - param_2[0xd];
  local_40 = param_2[1] + fVar1;
  local_3c = param_2[5] + fVar2;
  local_38 = param_2[9] + fVar4;
  local_34 = param_2[0xd] + fVar3;
  local_30 = fVar1 - param_2[2];
  local_2c = fVar2 - param_2[6];
  local_28 = fVar4 - param_2[10];
  local_24 = fVar3 - param_2[0xe];
  local_20 = param_2[2] + fVar1;
  local_1c = param_2[6] + fVar2;
  local_18 = param_2[10] + fVar4;
  iVar11 = 6;
  local_14 = param_2[0xe] + fVar3;
  pfVar9 = local_70 + 2;
  do {
    iVar11 = iVar11 + -1;
    fVar1 = _DAT_0089096c /
            SQRT(*pfVar9 * *pfVar9 + pfVar9[-1] * pfVar9[-1] + pfVar9[-2] * pfVar9[-2]);
    pfVar9[-2] = fVar1 * pfVar9[-2];
    pfVar9[-1] = fVar1 * pfVar9[-1];
    *pfVar9 = fVar1 * *pfVar9;
    pfVar9[1] = fVar1 * pfVar9[1];
    pfVar9 = pfVar9 + 4;
  } while (iVar11 != 0);
  *param_1 = fVar7;
  param_1[1] = fVar8;
  param_1[2] = local_70[2];
  param_1[3] = local_70[3];
  param_1[4] = local_70[4];
  param_1[5] = local_70[5];
  param_1[6] = local_70[6];
  param_1[7] = local_54;
  param_1[8] = local_50;
  param_1[9] = local_4c;
  param_1[10] = local_48;
  param_1[0xb] = local_44;
  param_1[0xc] = local_40;
  param_1[0xd] = local_3c;
  param_1[0xe] = local_38;
  param_1[0xf] = local_34;
  param_1[0x10] = local_30;
  param_1[0x11] = local_2c;
  bVar5 = fVar7 < _DAT_00890968;
  param_1[0x12] = local_28;
  param_1[0x13] = local_24;
  param_1[0x14] = local_20;
  param_1[0x15] = local_1c;
  param_1[0x16] = local_18;
  param_1[0x17] = local_14;
  if (_DAT_00890968 <= fVar8) {
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  if (_DAT_00890968 <= local_70[2]) {
    uVar10 = 0;
  }
  else {
    uVar10 = 4;
  }
  bVar6 = local_70[4] < _DAT_00890968;
  param_1[0x18] = (float)(uVar10 | uVar12 | (uint)bVar5);
  if (_DAT_00890968 <= local_70[5]) {
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  if (_DAT_00890968 <= local_70[6]) {
    uVar10 = 0;
  }
  else {
    uVar10 = 4;
  }
  bVar5 = local_50 < _DAT_00890968;
  param_1[0x19] = (float)(uVar10 | uVar12 | (uint)bVar6);
  if (_DAT_00890968 <= local_4c) {
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  if (_DAT_00890968 <= local_48) {
    uVar10 = 0;
  }
  else {
    uVar10 = 4;
  }
  bVar6 = local_40 < _DAT_00890968;
  param_1[0x1a] = (float)(uVar10 | uVar12 | (uint)bVar5);
  if (_DAT_00890968 <= local_3c) {
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  if (_DAT_00890968 <= local_38) {
    uVar10 = 0;
  }
  else {
    uVar10 = 4;
  }
  bVar5 = local_30 < _DAT_00890968;
  param_1[0x1b] = (float)(uVar10 | uVar12 | (uint)bVar6);
  if (_DAT_00890968 <= local_2c) {
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  if (_DAT_00890968 <= local_28) {
    uVar10 = 0;
  }
  else {
    uVar10 = 4;
  }
  bVar6 = local_20 < _DAT_00890968;
  param_1[0x1c] = (float)(uVar10 | uVar12 | (uint)bVar5);
  if (_DAT_00890968 <= local_1c) {
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  if (_DAT_00890968 <= local_18) {
    uVar10 = 0;
  }
  else {
    uVar10 = 4;
  }
  param_1[0x1d] = (float)(uVar10 | uVar12 | (uint)bVar6);
  iVar11 = 0;
  do {
    FUN_006c88d0();
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  return param_1;
}

