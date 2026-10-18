/* speed.exe 006a84f0 FUN_006a84f0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0069b900 FUN_0069b900
 */

undefined4 * FUN_006a84f0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ce22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0xec,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0069b900(param_1);
    *puVar1 = &PTR_FUN_008ab548;
    puVar1[2] = &PTR_LAB_008ab53c;
    puVar1[0x12] = &PTR_FUN_008ab538;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

