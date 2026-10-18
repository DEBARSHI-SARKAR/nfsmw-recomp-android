/* speed.exe 0061f750 FUN_0061f750; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0061f6d0 FUN_0061f6d0
 */

void FUN_0061f750(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876ab4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x10);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_0091e0d8 = FUN_0061f6d0(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0091e0d8 = 0;
  ExceptionList = local_c;
  return;
}

