/* speed.exe 004219f0 FUN_004219f0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00418d90 FUN_00418d90
 */

undefined4 * FUN_004219f0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867f3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0x48,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00418d90(param_1,0);
    *puVar1 = &PTR_FUN_00891448;
    puVar1[2] = &PTR_LAB_00891440;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

