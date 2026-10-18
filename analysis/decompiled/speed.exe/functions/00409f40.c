/* speed.exe 00409f40 FUN_00409f40; analysis pseudocode, not buildable source.
 */

void FUN_00409f40(float *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_5[1];
  fVar2 = param_4[1];
  fVar3 = param_5[2];
  fVar4 = param_4[2];
  *param_1 = (*param_5 + *param_4) - *param_2;
  param_1[1] = (fVar1 + fVar2) - param_2[1];
  param_1[2] = (fVar3 + fVar4) - param_2[2];
  return;
}

