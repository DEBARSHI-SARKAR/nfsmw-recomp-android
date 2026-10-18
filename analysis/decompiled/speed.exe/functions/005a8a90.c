/* speed.exe 005a8a90 FUN_005a8a90; analysis pseudocode, not buildable source.
 * calls 005a6ec0 FUN_005a6ec0
 * calls 00652ad0 _malloc
 */

undefined4 FUN_005a8a90(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873bc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x200);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_005a6ec0(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

