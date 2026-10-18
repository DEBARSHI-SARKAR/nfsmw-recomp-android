/* speed.exe 00571a40 FUN_00571a40; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007c01f0 FUN_007c01f0
 */

undefined4 FUN_00571a40(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871c54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x1d0);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_007c01f0(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

