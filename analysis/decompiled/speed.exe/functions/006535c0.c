/* speed.exe 006535c0 FUN_006535c0; analysis pseudocode, not buildable source.
 * calls 0045f680 FUN_0045f680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006535c0(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar3 = param_2[3];
  fVar2 = param_2[2];
  *param_1 = param_4 * *param_2;
  param_1[1] = fVar1 * param_4;
  param_1[2] = fVar2 * param_4;
  param_1[3] = fVar3 * param_4;
  FUN_0045f680(param_1,param_1,param_3,_DAT_0089096c - param_4);
  return;
}

