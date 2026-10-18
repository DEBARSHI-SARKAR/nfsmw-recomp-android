/* speed.exe 00428290 FUN_00428290; analysis pseudocode, not buildable source.
 * calls 00421cf0 FUN_00421cf0
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_00428290(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086811f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(100,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00421cf0(param_1,0x3f800000);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

