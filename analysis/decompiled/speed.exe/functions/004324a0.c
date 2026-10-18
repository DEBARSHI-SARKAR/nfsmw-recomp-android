/* speed.exe 004324a0 FUN_004324a0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 00432240 FUN_00432240
 */

void __fastcall FUN_004324a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008685f8;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x1e9;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008920d8;
  param_1[2] = &PTR_LAB_008920d0;
  param_1[0x13] = &PTR_LAB_00891ff8;
  param_1[0x15] = &PTR_LAB_00891ff0;
  param_1[0x1d6] = &PTR_LAB_00891f60;
  *puVar1 = &PTR_LAB_00891f18;
  DAT_0090d61c = 0;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00432240();
  ExceptionList = local_c;
  return;
}

