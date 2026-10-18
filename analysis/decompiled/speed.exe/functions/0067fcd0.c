/* speed.exe 0067fcd0 FUN_0067fcd0; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

undefined4 * __fastcall FUN_0067fcd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa3c4;
  FUN_0041c080(0x14);
  ExceptionList = local_c;
  return param_1;
}

