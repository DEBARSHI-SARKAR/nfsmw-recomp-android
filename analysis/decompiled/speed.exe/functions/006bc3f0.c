/* speed.exe 006bc3f0 FUN_006bc3f0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006bbf30 FUN_006bbf30
 */

undefined4 * FUN_006bc3f0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e232;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0xc4,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bbf30(param_1,3);
    *puVar1 = &PTR_FUN_008adbfc;
    puVar1[2] = &PTR_LAB_008adbf4;
    puVar1[0x13] = &PTR_LAB_008adbd8;
    puVar1[0x15] = &PTR_LAB_008adb58;
    puVar1[0x18] = &PTR_LAB_008adb3c;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

