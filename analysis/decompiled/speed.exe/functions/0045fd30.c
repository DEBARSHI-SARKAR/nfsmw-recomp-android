/* speed.exe 0045fd30 FUN_0045fd30; analysis pseudocode, not buildable source.
 */

void FUN_0045fd30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  if (*param_3 < *param_1) {
    *param_1 = *param_3;
  }
  if (fVar1 < param_1[1]) {
    param_1[1] = fVar1;
  }
  if (fVar2 < param_1[2]) {
    param_1[2] = fVar2;
  }
  if (*param_2 < fVar3) {
    *param_2 = fVar3;
  }
  if (param_2[1] < fVar4) {
    param_2[1] = fVar4;
  }
  if (param_2[2] < fVar5) {
    param_2[2] = fVar5;
  }
  return;
}

