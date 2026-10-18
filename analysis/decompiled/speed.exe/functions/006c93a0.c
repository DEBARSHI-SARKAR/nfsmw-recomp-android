/* speed.exe 006c93a0 FUN_006c93a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006c93a0(float *param_1,float *param_2)

{
  float fVar1;
  
  if (*param_2 <= *param_1) {
    fVar1 = *param_2;
  }
  else {
    fVar1 = *param_1;
  }
  *param_1 = fVar1;
  if (param_2[1] <= param_1[1]) {
    fVar1 = param_2[1];
  }
  else {
    fVar1 = param_1[1];
  }
  param_1[1] = fVar1;
  if (param_2[2] <= param_1[2]) {
    fVar1 = param_2[2];
  }
  else {
    fVar1 = param_1[2];
  }
  param_1[2] = fVar1;
  if (param_1[3] <= *param_2) {
    fVar1 = *param_2;
  }
  else {
    fVar1 = param_1[3];
  }
  param_1[3] = fVar1;
  if (param_1[4] <= param_2[1]) {
    fVar1 = param_2[1];
  }
  else {
    fVar1 = param_1[4];
  }
  param_1[4] = fVar1;
  if (param_2[2] < param_1[5]) {
    param_1[5] = param_1[5];
    return;
  }
  param_1[5] = param_2[2];
  return;
}

