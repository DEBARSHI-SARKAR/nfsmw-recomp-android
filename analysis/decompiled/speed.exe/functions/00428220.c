/* speed.exe 00428220 FUN_00428220; analysis pseudocode, not buildable source.
 * calls 00421bd0 FUN_00421bd0
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_00428220(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008680ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x5c,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00421bd0(param_1,0);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

