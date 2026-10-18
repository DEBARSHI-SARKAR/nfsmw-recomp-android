/* speed.exe 0054bb10 FUN_0054bb10; analysis pseudocode, not buildable source.
 * calls 0053dd80 FUN_0053dd80
 * calls 00652ad0 _malloc
 */

undefined4 FUN_0054bb10(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870574;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x128);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0053dd80(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

