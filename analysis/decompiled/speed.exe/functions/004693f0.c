/* speed.exe 004693f0 FUN_004693f0; analysis pseudocode, not buildable source.
 */

void FUN_004693f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  if (*param_2 < *param_1) {
    fVar1 = *param_1;
  }
  if (*param_3 < fVar1) {
    fVar1 = *param_3;
  }
  fVar2 = param_2[1];
  if (param_2[1] < param_1[1]) {
    fVar2 = param_1[1];
  }
  if (param_3[1] < fVar2) {
    fVar2 = param_3[1];
  }
  fVar3 = param_2[2];
  if (param_2[2] < param_1[2]) {
    fVar3 = param_1[2];
  }
  if (param_3[2] < fVar3) {
    fVar3 = param_3[2];
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  return;
}

