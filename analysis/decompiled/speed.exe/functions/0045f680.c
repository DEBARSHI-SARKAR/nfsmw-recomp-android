/* speed.exe 0045f680 FUN_0045f680; analysis pseudocode, not buildable source.
 */

void FUN_0045f680(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar5 = *param_3;
  fVar6 = *param_2;
  param_1[3] = param_4 * param_3[3] + param_2[3];
  *param_1 = param_4 * fVar5 + fVar6;
  param_1[1] = param_4 * fVar1 + fVar2;
  param_1[2] = param_4 * fVar3 + fVar4;
  return;
}

