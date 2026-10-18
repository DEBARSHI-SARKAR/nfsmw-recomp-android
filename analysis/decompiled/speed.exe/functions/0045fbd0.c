/* speed.exe 0045fbd0 FUN_0045fbd0; analysis pseudocode, not buildable source.
 */

void FUN_0045fbd0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_3[1];
  fVar1 = *param_3;
  fVar3 = param_3[2];
  if (fVar1 < *param_1) {
    *param_1 = fVar1;
  }
  if (fVar2 < param_1[1]) {
    param_1[1] = fVar2;
  }
  if (fVar3 < param_1[2]) {
    param_1[2] = fVar3;
  }
  if (*param_2 < fVar1) {
    *param_2 = fVar1;
  }
  if (param_2[1] < fVar2) {
    param_2[1] = fVar2;
  }
  if (param_2[2] < fVar3) {
    param_2[2] = fVar3;
  }
  return;
}

