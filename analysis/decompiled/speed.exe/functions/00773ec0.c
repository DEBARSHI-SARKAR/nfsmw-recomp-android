/* speed.exe 00773ec0 FUN_00773ec0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00773d00 FUN_00773d00
 */

int FUN_00773ec0(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881b5f;
  local_c = ExceptionList;
  if (DAT_009b38fc == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0x54,0);
    local_4 = 0;
    if (iVar1 == 0) {
      DAT_009b38fc = 0;
    }
    else {
      DAT_009b38fc = FUN_00773d00(iVar1);
    }
    if (DAT_009b38fc == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return DAT_009b38fc + 0x2c;
}

