/* speed.exe 00516d70 FUN_00516d70; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00514960 FUN_00514960
 */

void FUN_00516d70(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e3b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(4);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_0091cad0 = FUN_00514960(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0091cad0 = 0;
  ExceptionList = local_c;
  return;
}

