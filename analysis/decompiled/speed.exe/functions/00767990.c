/* speed.exe 00767990 FUN_00767990; analysis pseudocode, not buildable source.
 */

void FUN_00767990(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[4] - *param_2;
  fVar3 = param_2[5] - param_2[1];
  fVar4 = param_2[6] - param_2[2];
  fVar2 = ((param_1[1] - param_2[1]) * fVar3 +
          (*param_1 - *param_2) * fVar1 + (param_1[2] - param_2[2]) * fVar4) /
          (fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4);
  *param_3 = fVar1 * fVar2 + *param_2;
  param_3[1] = fVar3 * fVar2 + param_2[1];
  param_3[2] = fVar4 * fVar2 + param_2[2];
  return;
}

