/* speed.exe 00550dc0 FUN_00550dc0; analysis pseudocode, not buildable source.
 * calls 005470e0 FUN_005470e0
 * calls 00586290 FUN_00586290
 */

undefined4 * __thiscall FUN_00550dc0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008708c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089eaf8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_005470e0();
  ExceptionList = local_c;
  return param_1;
}

