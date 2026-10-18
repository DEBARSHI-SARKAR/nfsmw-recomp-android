/* speed.exe 006b8c20 FUN_006b8c20; analysis pseudocode, not buildable source.
 * calls 006b6790 FUN_006b6790
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_006b8c20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087dd52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x330,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_006b6790(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

