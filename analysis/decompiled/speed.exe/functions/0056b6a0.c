/* speed.exe 0056b6a0 FUN_0056b6a0; analysis pseudocode, not buildable source.
 * calls 0056b4f0 FUN_0056b4f0
 * calls 00516c50 FUN_00516c50
 * calls 0062c9a0 FUN_0062c9a0
 * calls 00627400 FUN_00627400
 * calls 005258b0 FUN_005258b0
 * calls 00654af0 FUN_00654af0
 */

void FUN_0056b6a0(void)

{
  undefined4 local_28;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087156f;
  local_c = ExceptionList;
  local_20 = (undefined1 *)&local_28;
  DAT_0091cf68 = 0;
  local_28 = 0x20d60dbf;
  ExceptionList = &local_c;
  FUN_0056b4f0(&local_20);
  local_1c = local_20;
  local_18 = 0;
  local_14 = 0x10;
  local_10 = 0;
  FUN_00654af0();
  local_28 = 0;
  FUN_005258b0();
  local_28 = 0xff;
  FUN_00516c50(0xc3960eb9,s_unknown_008f3fc0);
  local_28 = 0xc;
  local_20 = (undefined1 *)FUN_00627400();
  local_4 = 0;
  if (local_20 != (undefined1 *)0x0) {
    local_28 = 0;
    FUN_0062c9a0();
  }
  ExceptionList = local_c;
  return;
}

