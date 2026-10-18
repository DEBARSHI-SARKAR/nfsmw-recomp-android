/* speed.exe 0045ff40 FUN_0045ff40; analysis pseudocode, not buildable source.
 */

float10 FUN_0045ff40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)*param_1 - (float10)*param_3;
  fVar1 = param_1[1] - param_3[1];
  if (fVar2 <= (float10)fVar1) {
    fVar2 = (float10)fVar1;
  }
  fVar1 = param_1[2] - param_3[2];
  if (fVar2 <= (float10)fVar1) {
    fVar2 = (float10)fVar1;
  }
  fVar1 = *param_3 - *param_2;
  if (fVar2 <= (float10)fVar1) {
    fVar2 = (float10)fVar1;
  }
  fVar1 = param_3[1] - param_2[1];
  if (fVar2 <= (float10)fVar1) {
    fVar2 = (float10)fVar1;
  }
  fVar1 = param_3[2] - param_2[2];
  if (fVar2 <= (float10)fVar1) {
    fVar2 = (float10)fVar1;
  }
  return fVar2;
}

