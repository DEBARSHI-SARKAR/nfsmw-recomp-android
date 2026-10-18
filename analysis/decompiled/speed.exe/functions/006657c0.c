/* speed.exe 006657c0 FUN_006657c0; analysis pseudocode, not buildable source.
 * calls 006656a0 FUN_006656a0
 * calls 007c66d0 _malloc
 */

void FUN_006657c0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a404;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x1c);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_00925980 = FUN_006656a0(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_00925980 = 0;
  ExceptionList = local_c;
  return;
}

