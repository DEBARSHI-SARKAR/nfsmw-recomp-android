/* speed.exe 0067fd70 FUN_0067fd70; analysis pseudocode, not buildable source.
 * calls 0041d8c0 FUN_0041d8c0
 */

undefined4 * __fastcall FUN_0067fd70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa3f4;
  FUN_0041d8c0(8);
  ExceptionList = local_c;
  return param_1;
}

