/* speed.exe 0057dc30 FUN_0057dc30; analysis pseudocode, not buildable source.
 * calls 0065c2a0 FUN_0065c2a0
 * calls 005cc240 FUN_005cc240
 * calls 00572360 FUN_00572360
 * calls 00405d20 FUN_00405d20
 * calls 0065faf0 FUN_0065faf0
 */

void __fastcall FUN_0057dc30(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0f58;
  local_4 = 0;
  local_30 = param_1;
  FUN_0065c2a0();
  uVar1 = FUN_005cc240("Event");
  FUN_00405d20(&local_34);
  local_2c = local_34;
  local_24 = 0x20;
  local_20 = 0;
  local_1c = 0;
  local_18 = 9;
  local_14 = 0;
  local_10 = 0;
  local_28 = uVar1;
  FUN_0065faf0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

