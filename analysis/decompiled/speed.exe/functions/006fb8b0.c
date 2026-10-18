/* speed.exe 006fb8b0 FUN_006fb8b0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006fac70 FUN_006fac70
 */

int FUN_006fb8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_8 = &LAB_0087f54f;
  local_c = ExceptionList;
  uStack_18 = 0;
  local_1c = 0x68;
  local_20 = 0x6fb8d6;
  ExceptionList = &local_c;
  local_14 = FUN_005d29d0();
  local_4 = 0;
  if (local_14 != 0) {
    local_10 = (undefined1 *)&local_24;
    local_24 = param_1;
    local_20 = param_2;
    local_1c = param_3;
    iVar1 = FUN_006fac70();
    if (iVar1 != 0) {
      ExceptionList = local_c;
      return iVar1 + 0x2c;
    }
  }
  ExceptionList = local_c;
  return 0;
}

