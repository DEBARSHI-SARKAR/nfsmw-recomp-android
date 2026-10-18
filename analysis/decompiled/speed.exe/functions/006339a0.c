/* speed.exe 006339a0 FUN_006339a0; analysis pseudocode, not buildable source.
 * calls 00633a00 FUN_00633a00
 * calls 00652ac0 _malloc
 */

undefined4 FUN_006339a0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008789eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x20);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00633a00(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

