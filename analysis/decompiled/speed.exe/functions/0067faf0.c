/* speed.exe 0067faf0 FUN_0067faf0; analysis pseudocode, not buildable source.
 * calls 00674660 FUN_00674660
 */

undefined4 * __fastcall FUN_0067faf0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa334;
  FUN_00674660(0x60);
  ExceptionList = local_c;
  return param_1;
}

