/* speed.exe 005abad0 FUN_005abad0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005ab900 FUN_005ab900
 * calls 005992e0 FUN_005992e0
 */

void FUN_005abad0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873dc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0xb78);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_0091cf90 = 0;
  }
  else {
    DAT_0091cf90 = FUN_005992e0(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_005ab900();
  ExceptionList = local_c;
  return;
}

