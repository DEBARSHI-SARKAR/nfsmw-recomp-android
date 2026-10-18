/* speed.exe 00633bd0 FUN_00633bd0; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00452950 FUN_00452950
 */

undefined4 * FUN_00633bd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x10);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    FUN_00452950(param_1 + 1);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

