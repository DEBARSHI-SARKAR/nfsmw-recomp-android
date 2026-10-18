/* speed.exe 00492ab0 FUN_00492ab0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492ab0(float *param_1,float *param_2)

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
  
  fVar8 = *param_1 + *param_1;
  fVar11 = param_1[1] + param_1[1];
  fVar10 = param_1[2] + param_1[2];
  fVar9 = fVar8 * param_1[3];
  fVar1 = param_1[3];
  fVar2 = param_1[3];
  fVar8 = fVar8 * *param_1;
  fVar3 = *param_1;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  *param_2 = _DAT_0089096c - (fVar10 * fVar7 + fVar11 * fVar5);
  param_2[3] = fVar11 * fVar3 - fVar10 * fVar2;
  param_2[6] = fVar10 * fVar4 + fVar11 * fVar1;
  param_2[1] = fVar11 * fVar3 + fVar10 * fVar2;
  param_2[4] = _DAT_0089096c - (fVar10 * fVar7 + fVar8);
  param_2[7] = fVar10 * fVar6 - fVar9;
  param_2[2] = fVar10 * fVar4 - fVar11 * fVar1;
  param_2[5] = fVar10 * fVar6 + fVar9;
  param_2[8] = _DAT_0089096c - (fVar11 * fVar5 + fVar8);
  return;
}

