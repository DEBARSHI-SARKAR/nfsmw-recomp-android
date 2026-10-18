/* speed.exe 00554130 FUN_00554130; analysis pseudocode, not buildable source.
 * calls 0054a730 FUN_0054a730
 * calls 00652ad0 _malloc
 */

undefined4 FUN_00554130(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870ad4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x124);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0054a730(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

