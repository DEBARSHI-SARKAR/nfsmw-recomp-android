/* speed.exe 0045f850 FUN_0045f850; analysis pseudocode, not buildable source.
 */

void FUN_0045f850(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  if (*param_1 < *param_3) {
    fVar1 = *param_1;
  }
  fVar2 = param_3[1];
  if (param_1[1] < param_3[1]) {
    fVar2 = param_1[1];
  }
  fVar3 = *param_3;
  if (*param_3 < *param_2) {
    fVar3 = *param_2;
  }
  fVar4 = param_3[1];
  if (param_3[1] < param_2[1]) {
    fVar4 = param_2[1];
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  *param_2 = fVar3;
  param_2[1] = fVar4;
  return;
}

