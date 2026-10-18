/* speed.exe 0067fc80 FUN_0067fc80; analysis pseudocode, not buildable source.
 * calls 00674820 FUN_00674820
 */

undefined4 * __fastcall FUN_0067fc80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa3ac;
  FUN_00674820(0xa0);
  ExceptionList = local_c;
  return param_1;
}

