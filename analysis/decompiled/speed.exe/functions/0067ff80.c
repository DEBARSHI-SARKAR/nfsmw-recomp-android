/* speed.exe 0067ff80 FUN_0067ff80; analysis pseudocode, not buildable source.
 * calls 006749e0 FUN_006749e0
 */

undefined4 * __fastcall FUN_0067ff80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b456;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008aa038;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x144] = &PTR_FUN_008aa038;
  local_4 = 1;
  FUN_006749e0(0xa0);
  FUN_006749e0(0xa0);
  ExceptionList = local_c;
  return param_1;
}

