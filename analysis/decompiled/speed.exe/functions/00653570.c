/* speed.exe 00653570 FUN_00653570; analysis pseudocode, not buildable source.
 * calls 0045f640 FUN_0045f640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00653570(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = param_4 * *param_2;
  param_1[1] = fVar1 * param_4;
  param_1[2] = fVar2 * param_4;
  FUN_0045f640(param_1,param_1,param_3,_DAT_0089096c - param_4);
  return;
}

