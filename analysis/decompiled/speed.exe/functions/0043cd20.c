/* speed.exe 0043cd20 FUN_0043cd20; analysis pseudocode, not buildable source.
 * calls 0043c8b0 FUN_0043c8b0
 * calls 005d29d0 FUN_005d29d0
 */

int FUN_0043cd20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008691e2;
  local_c = ExceptionList;
  uStack_18 = 0;
  local_1c = 0x15c;
  local_20 = 0x43cd49;
  ExceptionList = &local_c;
  local_14 = FUN_005d29d0();
  local_4 = 0;
  if (local_14 != 0) {
    local_10 = (undefined1 *)&local_24;
    local_24 = param_1;
    local_20 = param_2;
    local_1c = param_3;
    iVar1 = FUN_0043c8b0();
    if (iVar1 != 0) {
      ExceptionList = local_c;
      return iVar1 + 0x2c;
    }
  }
  ExceptionList = local_c;
  return 0;
}

