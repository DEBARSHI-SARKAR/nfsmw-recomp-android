/* speed.exe 0076e0d0 FUN_0076e0d0; analysis pseudocode, not buildable source.
 * calls 007c5df0 _atexit
 * calls 007647e0 FUN_007647e0
 * calls 00404390 FUN_00404390
 * calls 005d0bf0 FUN_005d0bf0
 * calls 005d0c70 FUN_005d0c70
 * calls 005d5ed0 FUN_005d5ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076e0d0(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0088199e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_009b3b08 & 1) == 0) {
    _DAT_009b3b08 = _DAT_009b3b08 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_005d5ed0();
    _atexit((_func_4879 *)&LAB_0088eef0);
  }
  local_4 = 0xffffffff;
  FUN_007647e0(&local_34);
  FUN_00404390(&local_28);
  local_34 = *param_2 + local_34;
  local_30 = param_2[1] + local_30;
  local_2c = param_2[2] + local_2c;
  local_28 = *param_1 + local_28;
  local_24 = param_1[1] + local_24;
  local_20 = param_1[2] + local_20;
  FUN_005d0bf0(param_1,&local_28,param_2,&local_34);
  FUN_005d0c70(param_4,&local_1c);
  *param_5 = local_1c;
  param_5[1] = local_18;
  param_5[2] = local_14;
  ExceptionList = local_c;
  return;
}

