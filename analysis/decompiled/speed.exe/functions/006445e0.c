/* speed.exe 006445e0 FUN_006445e0; analysis pseudocode, not buildable source.
 * calls 00635080 FUN_00635080
 */

undefined4 * __fastcall FUN_006445e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a7e80;
  FUN_00635080(0x14);
  ExceptionList = local_c;
  return param_1;
}

