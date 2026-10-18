/* speed.exe 006b3e80 FUN_006b3e80; analysis pseudocode, not buildable source.
 * calls 006b3b30 FUN_006b3b30
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_006b3e80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d452;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x1d4,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_006b3b30(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

