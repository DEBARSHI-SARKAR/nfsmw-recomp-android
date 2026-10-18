/* speed.exe 00783d70 FUN_00783d70; analysis pseudocode, not buildable source.
 * calls 00783b80 FUN_00783b80
 * calls 007736e0 FUN_007736e0
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 */

void FUN_00783d70(undefined4 param_1,float *param_2,float param_3,undefined4 param_4)

{
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c [4];
  float local_1c;
  undefined4 local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008820c8;
  local_c = ExceptionList;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_3c = &PTR_FUN_00891594;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0041b250(0x40);
  local_2c[0] = *param_2 - param_3;
  local_18 = 0;
  local_2c[2] = param_2[2] - param_3;
  local_2c[1] = 0.0;
  local_1c = param_3 + *param_2;
  local_14 = param_3 + param_2[2];
  FUN_007736e0(local_2c,&local_3c);
  FUN_00783b80(&local_3c,param_1,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  FUN_0042cbf0();
  ExceptionList = local_c;
  return;
}

