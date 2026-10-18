/* speed.exe 006fd620 FUN_006fd620; analysis pseudocode, not buildable source.
 * calls 006fd3a0 FUN_006fd3a0
 * calls 005d29d0 FUN_005d29d0
 */

int FUN_006fd620(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f832;
  local_c = ExceptionList;
  if (DAT_009885c8 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005d29d0(0x410,0);
    local_4 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_006fd3a0(iVar1);
      if (iVar1 != 0) {
        ExceptionList = local_c;
        return iVar1 + 0x2c;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

