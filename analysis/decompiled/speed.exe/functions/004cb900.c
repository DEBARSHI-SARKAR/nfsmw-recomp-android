/* speed.exe 004cb900 FUN_004cb900; analysis pseudocode, not buildable source.
 * calls 004c0420 FUN_004c0420
 */

undefined4 * __fastcall FUN_004cb900(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008977bc;
  FUN_004c0420(0x14);
  ExceptionList = local_c;
  return param_1;
}

