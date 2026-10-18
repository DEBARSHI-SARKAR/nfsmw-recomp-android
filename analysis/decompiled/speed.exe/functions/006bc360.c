/* speed.exe 006bc360 FUN_006bc360; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006bbf30 FUN_006bbf30
 */

undefined4 * FUN_006bc360(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e212;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0xc4,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bbf30(param_1,6);
    *puVar1 = &PTR_FUN_008adb0c;
    puVar1[2] = &PTR_LAB_008adb04;
    puVar1[0x13] = &PTR_LAB_008adae8;
    puVar1[0x15] = &PTR_LAB_008ada68;
    puVar1[0x18] = &PTR_LAB_008ada4c;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

