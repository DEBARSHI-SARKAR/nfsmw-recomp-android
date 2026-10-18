/* speed.exe 005203d0 FUN_005203d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00512350 FUN_00512350
 */

undefined4 * FUN_005203d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e604;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x774);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00512350(param_1);
    *puVar1 = &PTR_FUN_0089b2a0;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

