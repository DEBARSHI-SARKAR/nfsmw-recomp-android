/* speed.exe 006bc2d0 FUN_006bc2d0; analysis pseudocode, not buildable source.
 * calls 006bbc70 FUN_006bbc70
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 * FUN_006bc2d0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e1f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0xbc,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bbc70(param_1,4);
    *puVar1 = &PTR_FUN_008ad92c;
    puVar1[2] = &PTR_LAB_008ad924;
    puVar1[0x13] = &PTR_LAB_008ad908;
    puVar1[0x15] = &PTR_LAB_008ad888;
    puVar1[0x18] = &PTR_LAB_008ad86c;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

