/* speed.exe 005d2b90 FUN_005d2b90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d2b90(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = _DAT_0089096c - param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  if ((*param_1 + *param_2) * (*param_1 + *param_2) +
      (param_1[1] + param_2[1]) * (param_1[1] + param_2[1]) +
      (param_1[2] + param_2[2]) * (param_1[2] + param_2[2]) +
      (param_1[3] + param_2[3]) * (param_1[3] + param_2[3]) <
      (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
      (*param_2 - *param_1) * (*param_2 - *param_1) +
      (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) +
      (param_2[3] - param_1[3]) * (param_2[3] - param_1[3])) {
    *param_3 = param_4 * *param_2 - fVar7 * *param_1;
    param_3[1] = param_4 * fVar1 - fVar7 * fVar4;
    param_3[2] = param_4 * fVar2 - fVar7 * fVar5;
    fVar1 = param_4 * fVar3 - fVar7 * fVar6;
  }
  else {
    *param_3 = fVar7 * *param_1 + param_4 * *param_2;
    param_3[1] = fVar7 * fVar4 + param_4 * fVar1;
    param_3[2] = fVar7 * fVar5 + param_4 * fVar2;
    fVar1 = fVar7 * fVar6 + param_4 * fVar3;
  }
  param_3[3] = fVar1;
  fVar1 = _DAT_0089096c /
          SQRT(param_3[3] * param_3[3] +
               param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  *param_3 = fVar1 * *param_3;
  param_3[1] = fVar1 * param_3[1];
  param_3[2] = fVar1 * param_3[2];
  param_3[3] = fVar1 * param_3[3];
  return;
}

