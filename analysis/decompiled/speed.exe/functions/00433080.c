/* speed.exe 00433080 FUN_00433080; analysis pseudocode, not buildable source.
 * calls 0041b930 FUN_0041b930
 */

undefined4 * __fastcall FUN_00433080(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086872b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_FUN_008918d8;
  local_4 = 0;
  uVar1 = FUN_0041b930();
  param_1[0x1b] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  ExceptionList = local_c;
  return param_1;
}

