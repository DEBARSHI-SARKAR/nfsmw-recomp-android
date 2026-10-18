/* speed.exe 005c6270 FUN_005c6270; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6270(float *param_1,float *param_2)

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
  
  fVar7 = *param_1 * *param_1;
  fVar9 = param_1[1] * param_1[1];
  fVar9 = fVar9 + fVar9;
  fVar8 = param_1[2] * param_1[2];
  fVar8 = fVar8 + fVar8;
  fVar1 = param_1[1] * *param_1 + param_1[1] * *param_1;
  fVar3 = param_1[2] * *param_1 + param_1[2] * *param_1;
  fVar4 = param_1[3] * *param_1 + param_1[3] * *param_1;
  fVar5 = param_1[2] * param_1[1] + param_1[2] * param_1[1];
  fVar6 = param_1[3] * param_1[1] + param_1[3] * param_1[1];
  fVar2 = param_1[3] * param_1[2] + param_1[3] * param_1[2];
  *param_2 = (_DAT_0089096c - fVar9) - fVar8;
  param_2[1] = fVar1 - fVar2;
  param_2[2] = fVar6 + fVar3;
  param_2[3] = fVar2 + fVar1;
  fVar1 = _DAT_0089096c - (fVar7 + fVar7);
  param_2[4] = fVar1 - fVar8;
  param_2[5] = fVar5 - fVar4;
  param_2[6] = fVar3 - fVar6;
  param_2[7] = fVar5 + fVar4;
  param_2[8] = fVar1 - fVar9;
  return;
}

