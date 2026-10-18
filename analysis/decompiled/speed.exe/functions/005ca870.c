/* speed.exe 005ca870 FUN_005ca870; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca870(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_1 * *param_1;
  fVar6 = param_1[1] * param_1[1];
  fVar1 = param_1[3];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  fVar4 = param_1[1];
  *param_2 = param_1[3] * param_1[1] + param_1[3] * param_1[1] +
             param_1[2] * *param_1 + param_1[2] * *param_1;
  param_2[1] = (fVar3 * fVar4 + fVar3 * fVar4) - (fVar1 * fVar2 + fVar1 * fVar2);
  param_2[2] = _DAT_0089096c - (fVar6 + fVar6 + fVar5 + fVar5);
  return;
}

