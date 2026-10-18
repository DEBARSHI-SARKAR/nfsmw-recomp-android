/* speed.exe 005caea0 FUN_005caea0; analysis pseudocode, not buildable source.
 */

void FUN_005caea0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_1[3];
  fVar10 = fVar1 * *param_2 + (param_2[2] * param_1[1] - param_2[1] * param_1[2]);
  fVar9 = fVar1 * param_2[1] + (*param_2 * param_1[2] - *param_1 * param_2[2]);
  fVar8 = fVar1 * param_2[2] + (*param_1 * param_2[1] - *param_2 * param_1[1]);
  fVar1 = *param_1;
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar11 = param_2[1] * param_1[1] + param_2[2] * param_1[2] + *param_1 * *param_2;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  *param_3 = (fVar10 * fVar7 + fVar11 * *param_1) - (fVar9 * param_1[2] - fVar8 * param_1[1]);
  param_3[1] = (fVar9 * fVar7 + fVar11 * fVar5) - (fVar8 * fVar1 - fVar10 * fVar2);
  param_3[2] = (fVar8 * fVar7 + fVar11 * fVar6) - (fVar10 * fVar3 - fVar9 * fVar4);
  return;
}

