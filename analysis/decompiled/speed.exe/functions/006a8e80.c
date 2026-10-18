/* speed.exe 006a8e80 FUN_006a8e80; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0069cad0 FUN_0069cad0
 */

undefined4 * FUN_006a8e80(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ce9f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0x74,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0069cad0(param_1);
    *puVar1 = &PTR_FUN_008ab65c;
    puVar1[2] = &PTR_LAB_008ab654;
    puVar1[0x12] = &PTR_LAB_008ab610;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

