/* speed.exe 004079c0 FUN_004079c0; analysis pseudocode, not buildable source.
 * calls 0045f610 FUN_0045f610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004079c0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  float local_8;
  float local_4;
  
  fVar1 = (param_4[1] - param_3[1]) * (*param_2 - *param_1) -
          (param_2[1] - param_1[1]) * (*param_4 - *param_3);
  if (fVar1 == _DAT_00890968) {
    return 0;
  }
  local_8 = *param_2 - *param_1;
  local_4 = param_2[1] - param_1[1];
  FUN_0045f610(param_5,param_1,&local_8,
               ((param_1[1] - param_3[1]) * (*param_4 - *param_3) -
               (*param_1 - *param_3) * (param_4[1] - param_3[1])) / fVar1);
  return 1;
}

