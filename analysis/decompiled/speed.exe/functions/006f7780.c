/* speed.exe 006f7780 FUN_006f7780; analysis pseudocode, not buildable source.
 * calls 006ef850 FUN_006ef850
 */

undefined4 * __fastcall FUN_006f7780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087ecf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b06e8;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = &PTR_FUN_008b06e8;
  local_4 = 1;
  FUN_006ef850(0x28);
  FUN_006ef850(0x28);
  ExceptionList = local_c;
  return param_1;
}

