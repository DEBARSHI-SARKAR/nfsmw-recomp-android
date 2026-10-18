/* speed.exe 007641f0 FUN_007641f0; analysis pseudocode, not buildable source.
 */

float * __thiscall FUN_007641f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = *param_4;
  if (*param_3 < *param_4) {
    fVar1 = *param_3;
  }
  if (*param_2 < fVar1) {
    fVar1 = *param_2;
  }
  *param_1 = fVar1;
  fVar1 = param_4[2];
  if (param_3[2] < param_4[2]) {
    fVar1 = param_3[2];
  }
  if (param_2[2] < fVar1) {
    fVar1 = param_2[2];
  }
  param_1[1] = fVar1;
  fVar1 = *param_4;
  if (*param_4 < *param_3) {
    fVar1 = *param_3;
  }
  if (fVar1 < *param_2) {
    fVar1 = *param_2;
  }
  param_1[2] = fVar1;
  fVar1 = param_4[2];
  if (param_4[2] < param_3[2]) {
    fVar1 = param_3[2];
  }
  if (fVar1 < param_2[2]) {
    fVar1 = param_2[2];
  }
  param_1[3] = fVar1;
  return param_1;
}

