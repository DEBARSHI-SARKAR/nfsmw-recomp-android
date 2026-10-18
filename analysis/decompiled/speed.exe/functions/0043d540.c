/* speed.exe 0043d540 FUN_0043d540; analysis pseudocode, not buildable source.
 * calls 0043b670 FUN_0043b670
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_0043d540(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086933f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x18,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0043b670(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

