/* speed.exe 00767f00 FUN_00767f00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00767f00(float *param_1,float *param_2)

{
  float fVar1;
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
  
  fVar9 = *param_1 + *param_1;
  fVar12 = param_1[1] + param_1[1];
  fVar11 = param_1[2] + param_1[2];
  fVar10 = fVar9 * param_1[3];
  fVar1 = param_1[3];
  fVar2 = param_1[3];
  fVar3 = *param_1;
  fVar4 = *param_1;
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  *param_2 = (_DAT_0089096c - fVar12 * fVar6) - fVar11 * fVar8;
  param_2[1] = fVar12 * fVar4 + fVar11 * fVar2;
  param_2[2] = fVar11 * fVar5 - fVar12 * fVar1;
  param_2[3] = fVar12 * fVar4 - fVar11 * fVar2;
  fVar2 = _DAT_0089096c - fVar9 * fVar3;
  param_2[4] = fVar2 - fVar11 * fVar8;
  param_2[5] = fVar10 + fVar11 * fVar7;
  param_2[6] = fVar11 * fVar5 + fVar12 * fVar1;
  param_2[7] = fVar11 * fVar7 - fVar10;
  param_2[8] = fVar2 - fVar12 * fVar6;
  return;
}

