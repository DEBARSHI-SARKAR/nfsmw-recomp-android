/* speed.exe 00653530 FUN_00653530; analysis pseudocode, not buildable source.
 * calls 0045f610 FUN_0045f610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00653530(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_2[1];
  *param_1 = param_4 * *param_2;
  param_1[1] = fVar1 * param_4;
  FUN_0045f610(param_1,param_1,param_3,_DAT_0089096c - param_4);
  return;
}

