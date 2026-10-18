/* speed.exe 004f5020 FUN_004f5020; analysis pseudocode, not buildable source.
 * calls 004ea920 FUN_004ea920
 */

undefined4 * __fastcall FUN_004f5020(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d4d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00899298;
  FUN_004ea920(0xf);
  ExceptionList = local_c;
  return param_1;
}

