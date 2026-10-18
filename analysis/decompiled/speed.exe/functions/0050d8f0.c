/* speed.exe 0050d8f0 FUN_0050d8f0; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 005c3c10 FUN_005c3c10
 */

undefined4 __thiscall FUN_0050d8f0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e1fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x78);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_005c3c10(param_1,param_2);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

