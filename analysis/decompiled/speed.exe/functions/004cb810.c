/* speed.exe 004cb810 FUN_004cb810; analysis pseudocode, not buildable source.
 * calls 004c0320 FUN_004c0320
 */

undefined4 * __fastcall FUN_004cb810(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008977a4;
  FUN_004c0320(0x14);
  ExceptionList = local_c;
  return param_1;
}

