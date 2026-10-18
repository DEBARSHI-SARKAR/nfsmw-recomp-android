/* speed.exe 005256d0 FUN_005256d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005168d0 FUN_005168d0
 */

void FUN_005256d0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e944;
  local_c = ExceptionList;
  if (DAT_0091cadc == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(8);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_0091cadc = 0;
    }
    else {
      DAT_0091cadc = FUN_005168d0(pvVar1);
    }
    DAT_0091cc24 = 0;
  }
  ExceptionList = local_c;
  return;
}

