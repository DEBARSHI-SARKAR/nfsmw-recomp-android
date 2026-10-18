/* speed.exe 005a6e20 FUN_005a6e20; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005a1840 FUN_005a1840
 */

undefined4 FUN_005a6e20(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008739d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x354);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_005a1840(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

