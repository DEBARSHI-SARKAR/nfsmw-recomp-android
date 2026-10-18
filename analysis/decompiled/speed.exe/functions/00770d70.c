/* speed.exe 00770d70 FUN_00770d70; analysis pseudocode, not buildable source.
 * calls 00769360 FUN_00769360
 * calls 00769580 FUN_00769580
 * calls 00770cf0 FUN_00770cf0
 */

undefined4 * __fastcall FUN_00770d70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881ae0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00770cf0(0x3dcfa673,0,0);
  local_4 = 0;
  FUN_00770cf0(0xb902cfad,0,0);
  local_4._0_1_ = 1;
  FUN_00770cf0(0x59c373c3,0,0);
  local_4._0_1_ = 2;
  FUN_00770cf0(0xd835d0c8,0,0);
  local_4._0_1_ = 3;
  FUN_00770cf0(0xa01a3942,0,0);
  local_4._0_1_ = 4;
  FUN_00770cf0(0xe1c797c,0,0);
  local_4._0_1_ = 5;
  FUN_00770cf0(0x94abdff0,0,0);
  local_4._0_1_ = 6;
  FUN_00770cf0(0x919b6689,0,0);
  param_1[8] = 0x3f1c28f6;
  param_1[9] = 0x3efae148;
  param_1[10] = 0x3e6b851f;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3e0f5c29;
  param_1[0xd] = 0x3e23d70a;
  param_1[0xe] = 0x3e6147ae;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f147ae1;
  param_1[0x11] = 0x3f07ae14;
  param_1[0x12] = 0x3ed70a3d;
  param_1[0x13] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0x40200000;
  param_1[0x1c] = 0x3e8a3d71;
  param_1[0x1d] = 0x3eeb851f;
  param_1[0x1e] = 0x3f75c28f;
  param_1[0x1f] = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,7);
  param_1[0x20] = 0x3e428f5c;
  param_1[0x21] = 0x3e800000;
  param_1[0x22] = 0x3ec28f5c;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x40000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x41000000;
  param_1[0x27] = 0xbe23d70a;
  param_1[0xb] = 0x3f800000;
  param_1[0xf] = 0x40800000;
  *param_1 = 0x3f800000;
  param_1[2] = 0x3ee66666;
  param_1[3] = 0x4051eb85;
  param_1[4] = 0x3f000000;
  param_1[1] = 0xffffffff;
  FUN_00769360();
  FUN_00769580(0x3dcccccd);
  param_1[0x2f] = 0x3f800000;
  param_1[0x2c] = 0x3f1c28f6;
  param_1[0x2d] = 0x3efae148;
  param_1[0x2e] = 0x3e6b851f;
  ExceptionList = local_c;
  return param_1;
}

