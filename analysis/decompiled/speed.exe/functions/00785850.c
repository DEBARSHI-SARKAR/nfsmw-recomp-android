/* speed.exe 00785850 FUN_00785850; analysis pseudocode, not buildable source.
 * calls 00783b80 FUN_00783b80
 * calls 0077f970 FUN_0077f970
 * calls 005d0370 FUN_005d0370
 * calls 007736e0 FUN_007736e0
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 * calls 0077fdf0 FUN_0077fdf0
 * calls 007844f0 FUN_007844f0
 */

void FUN_00785850(undefined4 param_1,float *param_2,float param_3)

{
  float local_3c;
  int local_38;
  float local_34;
  int local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008821b0;
  local_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_1c = &PTR_FUN_00891594;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0041b250(0x40);
  local_3c = *param_2 - param_3;
  local_28 = 0;
  local_34 = param_2[2] - param_3;
  local_38 = 0;
  local_2c = param_3 + *param_2;
  local_24 = param_3 + param_2[2];
  FUN_007736e0(&local_3c,&local_1c);
  FUN_0077f970(0x20);
  local_38 = 0;
  local_34 = 0.0;
  local_30 = 0;
  local_4._0_1_ = 1;
  FUN_0077fdf0(0x40);
  FUN_00783b80(&local_1c,&local_3c,param_2,param_3,0);
  FUN_007844f0(param_1,&local_3c,param_2,param_3);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_38 != 0) {
    FUN_005d0370(local_38,(local_30 - local_38 >> 2) * 4,0);
  }
  local_4 = 0xffffffff;
  FUN_0042cbf0();
  ExceptionList = local_c;
  return;
}

