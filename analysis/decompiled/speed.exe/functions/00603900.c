/* speed.exe 00603900 FUN_00603900; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00603720 FUN_00603720
 */

void FUN_00603900(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876324;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x4558);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_0091e000 = FUN_00603720(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0091e000 = 0;
  ExceptionList = local_c;
  return;
}

