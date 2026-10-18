/* speed.exe 0052c360 FUN_0052c360; analysis pseudocode, not buildable source.
 * calls 0051dcf0 FUN_0051dcf0
 */

undefined4 * __thiscall FUN_0052c360(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086f35b;
  local_c = ExceptionList;
  puVar1 = param_1 + 3;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089d344;
  *puVar1 = puVar1;
  param_1[4] = puVar1;
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_0051dcf0(param_2,param_3);
  ExceptionList = local_c;
  return param_1;
}

