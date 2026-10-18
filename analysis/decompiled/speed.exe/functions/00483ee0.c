/* speed.exe 00483ee0 FUN_00483ee0; analysis pseudocode, not buildable source.
 * calls 00478db0 FUN_00478db0
 */

undefined4 * __fastcall FUN_00483ee0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_0089529c;
  FUN_00478db0(2);
  ExceptionList = local_c;
  return param_1;
}

