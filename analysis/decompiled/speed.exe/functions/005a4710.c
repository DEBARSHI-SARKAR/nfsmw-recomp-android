/* speed.exe 005a4710 FUN_005a4710; analysis pseudocode, not buildable source.
 * calls 005a3030 FUN_005a3030
 * calls 00652ad0 _malloc
 */

undefined4 FUN_005a4710(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008736f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x38);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_005a3030(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

