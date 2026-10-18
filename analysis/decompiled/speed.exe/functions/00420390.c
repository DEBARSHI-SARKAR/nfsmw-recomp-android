/* speed.exe 00420390 FUN_00420390; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00420240 FUN_00420240
 */

undefined4 FUN_00420390(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867de2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0xc0,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00420240(param_1,0x3c23d70a);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

