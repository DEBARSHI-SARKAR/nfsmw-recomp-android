/* speed.exe 00450570 FUN_00450570; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0044f160 FUN_0044f160
 */

int FUN_00450570(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869c4f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x54,0);
  local_4 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0044f160(iVar1);
    if (iVar1 != 0) {
      ExceptionList = local_c;
      return iVar1 + 0x2c;
    }
  }
  ExceptionList = local_c;
  return 0;
}

