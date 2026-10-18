/* speed.exe 0043fe90 FUN_0043fe90; analysis pseudocode, not buildable source.
 * calls 004393f0 FUN_004393f0
 * calls 0043f120 FUN_0043f120
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_0043fe90(undefined4 *param_1)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043f120();
  local_4 = 0;
  *param_1 = &PTR_FUN_00892f70;
  local_10 = FUN_005cc240("AIGoalPit");
  local_2c = 0x40800000;
  local_28 = 0;
  local_24 = 0xc02ccccd;
  local_20 = 0xc1200000;
  local_1c = 0;
  local_18 = 0xc02ccccd;
  local_14 = 1;
  FUN_004393f0(&local_2c);
  local_10 = FUN_005cc240("AIGoalPit");
  local_2c = 0xc0800000;
  local_28 = 0;
  local_24 = 0xc02ccccd;
  local_20 = 0x41200000;
  local_1c = 0;
  local_18 = 0xc02ccccd;
  local_14 = 1;
  FUN_004393f0(&local_2c);
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  ExceptionList = local_c;
  return param_1;
}

