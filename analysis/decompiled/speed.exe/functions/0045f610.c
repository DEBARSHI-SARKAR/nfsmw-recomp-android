/* speed.exe 0045f610 FUN_0045f610; analysis pseudocode, not buildable source.
 */

void FUN_0045f610(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  *param_1 = param_4 * *param_3 + *param_2;
  param_1[1] = param_4 * fVar1 + fVar2;
  return;
}

