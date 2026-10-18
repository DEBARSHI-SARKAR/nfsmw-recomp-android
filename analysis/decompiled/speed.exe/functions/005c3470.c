/* speed.exe 005c3470 FUN_005c3470; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 * calls 00652ac0 _malloc
 */

undefined4 __thiscall FUN_005c3470(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087460b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x5c);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_005c31a0(param_1,param_2);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

