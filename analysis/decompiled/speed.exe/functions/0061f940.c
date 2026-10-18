/* speed.exe 0061f940 FUN_0061f940; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0061f8a0 FUN_0061f8a0
 */

void FUN_0061f940(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876af4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x1c);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_0091e0d0 = FUN_0061f8a0(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0091e0d0 = 0;
  ExceptionList = local_c;
  return;
}

