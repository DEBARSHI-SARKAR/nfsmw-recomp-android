/* speed.exe 00406560 FUN_00406560; analysis pseudocode, not buildable source.
 * calls 006e8e90 FUN_006e8e90
 * calls 005cc240 FUN_005cc240
 * calls 006f94d0 FUN_006f94d0
 * calls 006ee9b0 FUN_006ee9b0
 */

undefined4 * __fastcall FUN_00406560(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_006f94d0(0);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890d14;
  param_1[2] = &PTR_LAB_00890d0c;
  param_1[0xb] = &PTR_LAB_00890cf8;
  param_1[0xe] = &PTR_LAB_00890cdc;
  local_14 = FUN_005cc240("AvoidableManager");
  uVar1 = FUN_006ee9b0(&local_14,0x3e800000,0,0);
  param_1[0x12] = uVar1;
  FUN_006e8e90(uVar1,"AvoidableManager");
  ExceptionList = local_c;
  return param_1;
}

