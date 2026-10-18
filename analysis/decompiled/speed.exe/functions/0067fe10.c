/* speed.exe 0067fe10 FUN_0067fe10; analysis pseudocode, not buildable source.
 * calls 00674890 FUN_00674890
 */

undefined4 * __fastcall FUN_0067fe10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa424;
  FUN_00674890(0xa0);
  ExceptionList = local_c;
  return param_1;
}

