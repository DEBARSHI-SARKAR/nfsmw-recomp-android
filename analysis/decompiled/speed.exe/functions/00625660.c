/* speed.exe 00625660 FUN_00625660; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 004ae2c0 FUN_004ae2c0
 * calls 005cc240 FUN_005cc240
 */

void __fastcall FUN_00625660(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7628;
  local_4 = 0;
  local_24 = param_1;
  uVar1 = FUN_005cc240("Terminate");
  FUN_004ae2c0(&local_28);
  local_20 = local_28;
  local_18 = 0x14;
  local_14 = 0;
  local_10 = 0;
  local_1c = uVar1;
  FUN_0065faf0();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

