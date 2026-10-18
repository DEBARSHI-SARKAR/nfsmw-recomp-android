/* speed.exe 00485b00 FUN_00485b00; analysis pseudocode, not buildable source.
 * calls 00478d40 FUN_00478d40
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_00485b00(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ac6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0xc,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00478d40();
    *(undefined4 *)(iVar1 + 4) = uVar2;
    *(undefined4 *)(iVar1 + 8) = 0;
    DAT_00911050 = iVar1;
    ExceptionList = local_c;
    return;
  }
  DAT_00911050 = 0;
  ExceptionList = local_c;
  return;
}

