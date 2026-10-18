/* speed.exe 00418860 FUN_00418860; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418860(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (float10)FUN_005c5e80(param_5[2] * param_5[2] +
                                param_5[1] * param_5[1] + *param_5 * *param_5);
  if (fVar1 < (float10)_DAT_00890968 == (fVar1 == (float10)_DAT_00890968)) {
    FUN_0040fe20(param_3,&local_18);
    local_c = local_10 - local_14 * _DAT_00890968;
    local_8 = local_18 * _DAT_00890968 - local_10 * _DAT_00890968;
    local_4 = local_14 * _DAT_00890968 - local_18;
    local_18 = local_c;
    local_14 = local_8;
    local_10 = local_4;
    if (local_4 * param_5[2] + local_c * *param_5 + local_8 * param_5[1] < _DAT_00890968) {
      local_18 = local_c * _DAT_00890da8;
      local_14 = local_8 * _DAT_00890da8;
      local_10 = local_4 * _DAT_00890da8;
    }
    *param_1 = local_18;
    param_1[1] = local_14;
    param_1[2] = local_10;
    FUN_0040fe20(param_1,param_1);
  }
  return;
}

