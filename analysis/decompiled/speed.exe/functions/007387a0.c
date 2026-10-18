/* speed.exe 007387a0 FUN_007387a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007387a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_2[1] - param_3[1]) * _DAT_00903658;
  fVar1 = param_3[1];
  fVar2 = param_2[2];
  *param_1 = (*param_2 - *param_3) * _DAT_00903658 + *param_3;
  param_1[1] = fVar3 + fVar1;
  param_1[2] = fVar2;
  return;
}

