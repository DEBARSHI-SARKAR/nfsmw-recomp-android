/* speed.exe 00591b50 FUN_00591b50; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00586290 FUN_00586290
 */

undefined4 * FUN_00591b50(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008729c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x2c);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00586290(param_1);
    *puVar1 = &PTR_FUN_008a0ed8;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

