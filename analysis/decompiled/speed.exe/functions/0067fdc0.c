/* speed.exe 0067fdc0 FUN_0067fdc0; analysis pseudocode, not buildable source.
 * calls 004792a0 FUN_004792a0
 */

undefined4 * __fastcall FUN_0067fdc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b3a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa40c;
  FUN_004792a0(8);
  ExceptionList = local_c;
  return param_1;
}

