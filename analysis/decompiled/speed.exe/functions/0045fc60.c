/* speed.exe 0045fc60 FUN_0045fc60; analysis pseudocode, not buildable source.
 */

void FUN_0045fc60(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  if (*param_3 - param_4 < *param_1) {
    *param_1 = *param_3 - param_4;
  }
  if (fVar1 - param_4 < param_1[1]) {
    param_1[1] = fVar1 - param_4;
  }
  if (fVar2 - param_4 < param_1[2]) {
    param_1[2] = fVar2 - param_4;
  }
  if (*param_2 < param_4 + fVar3) {
    *param_2 = param_4 + fVar3;
  }
  if (param_2[1] < param_4 + fVar4) {
    param_2[1] = param_4 + fVar4;
  }
  if (param_2[2] < param_4 + fVar5) {
    param_2[2] = param_4 + fVar5;
  }
  return;
}

