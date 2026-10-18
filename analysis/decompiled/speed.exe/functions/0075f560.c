/* speed.exe 0075f560 FUN_0075f560; analysis pseudocode, not buildable source.
 * calls 0075f010 FUN_0075f010
 * calls 00652ad0 _malloc
 */

void FUN_0075f560(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881694;
  local_c = ExceptionList;
  if (DAT_009b08f8 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x34);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_009b08f8 = FUN_0075f010(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_009b08f8 = 0;
  }
  ExceptionList = local_c;
  return;
}

