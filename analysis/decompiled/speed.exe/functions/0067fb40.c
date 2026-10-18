/* speed.exe 0067fb40 FUN_0067fb40; analysis pseudocode, not buildable source.
 * calls 006746d0 FUN_006746d0
 */

undefined4 * __fastcall FUN_0067fb40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa34c;
  FUN_006746d0(8);
  ExceptionList = local_c;
  return param_1;
}

