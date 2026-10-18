/* speed.exe 00424380 FUN_00424380; analysis pseudocode, not buildable source.
 * calls 0041a5e0 FUN_0041a5e0
 * calls 005d29d0 FUN_005d29d0
 */

int FUN_00424380(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868042;
  local_c = ExceptionList;
  iVar1 = DAT_0090d8e4;
  if (DAT_0090d8e4 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0x378,0);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0041a5e0(iVar1);
    }
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return iVar1 + 0x2c;
}

