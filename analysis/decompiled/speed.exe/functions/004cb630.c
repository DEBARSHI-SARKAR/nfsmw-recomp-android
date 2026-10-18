/* speed.exe 004cb630 FUN_004cb630; analysis pseudocode, not buildable source.
 * calls 004bff50 FUN_004bff50
 */

undefined4 * __fastcall FUN_004cb630(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00897774;
  FUN_004bff50(0x14);
  ExceptionList = local_c;
  return param_1;
}

