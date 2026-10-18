/* speed.exe 0043ceb0 FUN_0043ceb0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0043a9a0 FUN_0043a9a0
 */

undefined4 * FUN_0043ceb0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869202;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_005d29d0(0x73c,0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0043a9a0(param_1,0x3f800000,0,1);
    *puVar1 = &PTR_FUN_00892e28;
    puVar1[2] = &PTR_LAB_00892e20;
    puVar1[0x13] = &PTR_LAB_00892d48;
    puVar1[0x15] = &PTR_LAB_00892d40;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

