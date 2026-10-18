/* speed.exe 00625030 FUN_00625030; analysis pseudocode, not buildable source.
 * calls 00516e10 FUN_00516e10
 */

undefined4 * __thiscall FUN_00625030(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008774d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a74cc;
  param_1[2] = param_2;
  puVar1 = (undefined1 *)FUN_00516e10();
  *puVar1 = 1;
  ExceptionList = local_c;
  return param_1;
}

