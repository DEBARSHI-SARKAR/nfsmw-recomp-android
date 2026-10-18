/* speed.exe 006a8230 FUN_006a8230; analysis pseudocode, not buildable source.
 * calls 0069bd80 FUN_0069bd80
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 * FUN_006a8230(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087cdc2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0xf0,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0069bd80(param_1);
    *puVar1 = &PTR_FUN_008ab4a8;
    puVar1[2] = &PTR_LAB_008ab49c;
    puVar1[0x12] = &PTR_FUN_008ab498;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

