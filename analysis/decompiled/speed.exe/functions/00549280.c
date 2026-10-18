/* speed.exe 00549280 FUN_00549280; analysis pseudocode, not buildable source.
 * calls 00532220 FUN_00532220
 * calls 0059bc40 FUN_0059bc40
 */

undefined4 * __thiscall FUN_00549280(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e750;
  FUN_00532220();
  ExceptionList = local_c;
  return param_1;
}

