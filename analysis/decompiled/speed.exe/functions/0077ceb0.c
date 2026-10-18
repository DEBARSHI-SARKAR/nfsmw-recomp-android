/* speed.exe 0077ceb0 FUN_0077ceb0; analysis pseudocode, not buildable source.
 * calls 00771480 FUN_00771480
 */

undefined4 * __fastcall FUN_0077ceb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008b5d6c;
  FUN_00771480(100);
  ExceptionList = local_c;
  return param_1;
}

