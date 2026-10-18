/* speed.exe 00440050 FUN_00440050; analysis pseudocode, not buildable source.
 * calls 004393f0 FUN_004393f0
 * calls 0043f120 FUN_0043f120
 */

undefined4 * __fastcall FUN_00440050(undefined4 *param_1)

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
  puStack_8 = &LAB_00869648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043f120();
  local_28 = 0;
  local_2c = 0xc0400000;
  local_1c = 0;
  *param_1 = &PTR_FUN_00892f90;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  local_18 = 0;
  local_14 = 1;
  local_10 = DAT_0091ddbc;
  FUN_004393f0(&local_2c);
  local_28 = 0;
  local_2c = 0xc0400000;
  local_24 = 0x40a00000;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 2;
  local_10 = DAT_0091ddbc;
  FUN_004393f0(&local_2c);
  local_2c = 0xc0400000;
  local_28 = 0;
  local_24 = 0xc0a00000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 3;
  local_10 = DAT_0091ddbc;
  FUN_004393f0(&local_2c);
  param_1[1] = 3;
  *(undefined1 *)(param_1 + 3) = 0;
  ExceptionList = local_c;
  return param_1;
}

