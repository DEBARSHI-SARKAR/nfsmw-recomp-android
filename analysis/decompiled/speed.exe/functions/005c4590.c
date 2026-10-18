/* speed.exe 005c4590 FUN_005c4590; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 * calls 00652ac0 _malloc
 */

undefined4 * __thiscall FUN_005c4590(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087478b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x60);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_005c31a0(param_1,param_2);
    *puVar1 = &PTR_FUN_008a2e34;
    puVar1[0x17] = *(undefined4 *)(param_1 + 0x5c);
    *puVar1 = &PTR_FUN_008a2e44;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

