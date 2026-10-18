/* speed.exe 004102f0 FUN_004102f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004102f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  fVar2 = param_3[1];
  fVar3 = param_1[2];
  fVar4 = param_3[2];
  *param_2 = *param_1 - *param_3;
  param_2[1] = fVar1 - fVar2;
  param_2[2] = fVar3 - fVar4;
  return;
}

