/* speed.exe 006f9ea0 FUN_006f9ea0; analysis pseudocode, not buildable source.
 * calls 006ed0f0 FUN_006ed0f0
 * calls 0061e750 FUN_0061e750
 * calls 00603900 FUN_00603900
 * calls 00609f20 FUN_00609f20
 * calls 0061f490 FUN_0061f490
 * calls 006f94d0 FUN_006f94d0
 * calls 0061f750 FUN_0061f750
 * calls 006040c0 FUN_006040c0
 * calls 006035f0 FUN_006035f0
 * calls 00603500 FUN_00603500
 * calls 0061c180 FUN_0061c180
 * calls 005cc240 FUN_005cc240
 * calls 0061f940 FUN_0061f940
 */

undefined4 * __fastcall FUN_006f9ea0(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0(0);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b0b00;
  param_1[2] = &PTR_LAB_008b0af8;
  param_1[0xb] = &PTR_LAB_008b0ae4;
  param_1[0xe] = &PTR_LAB_008b0ac8;
  local_14 = FUN_005cc240("GameplayActivity");
  iVar1 = FUN_006ed0f0(&local_14,0x3f800000,param_1 + 2,0,0);
  if (iVar1 != 0) {
    param_1[9] = param_1[9] + 1;
  }
  param_1[0x12] = iVar1;
  FUN_006035f0();
  FUN_00603900();
  FUN_0061f490(0x10000);
  FUN_0061f940();
  FUN_006040c0();
  FUN_0061f750();
  FUN_0061e750(*DAT_0091e0c8);
  FUN_0061c180(*DAT_0091e0c8);
  FUN_00609f20();
  FUN_00603500();
  ExceptionList = local_c;
  return param_1;
}

