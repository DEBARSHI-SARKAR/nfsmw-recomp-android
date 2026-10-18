/* speed.exe 0048e9b0 FUN_0048e9b0; analysis pseudocode, not buildable source.
 * calls 0048ddf0 FUN_0048ddf0
 * calls 0048dec0 FUN_0048dec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e9b0(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5
                 ,float *param_6)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  float local_8;
  
  local_20 = *param_3;
  local_18 = param_3[2];
  local_14 = param_3[3];
  local_1c = param_3[1] * _DAT_00890da8;
  FUN_0048ddf0(&local_20,param_1,param_5);
  local_20 = -*param_4;
  local_1c = 0.0;
  local_18 = -param_4[2];
  local_14 = 1.0;
  FUN_0048dec0(param_5,&local_20,local_10);
  fVar1 = *param_2;
  param_6[1] = 0.0;
  *param_6 = local_10[0] + fVar1;
  param_6[2] = local_8 + param_2[2];
  return;
}

