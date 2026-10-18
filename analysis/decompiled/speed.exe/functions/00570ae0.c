/* speed.exe 00570ae0 FUN_00570ae0; analysis pseudocode, not buildable source.
 * calls 007bf270 FUN_007bf270
 * calls 00652ad0 _malloc
 */

undefined4 FUN_00570ae0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871734;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(300);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_007bf270(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

