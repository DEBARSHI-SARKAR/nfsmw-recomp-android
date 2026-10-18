/* speed.exe 00670c70 FUN_00670c70; analysis pseudocode, not buildable source.
 * calls 006f82f0 FUN_006f82f0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00670c70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a82f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a9714;
  param_1[2] = &PTR_LAB_008a970c;
  param_1[0xb] = &PTR_LAB_008a96f8;
  param_1[0xe] = &PTR_LAB_008a96dc;
  local_4 = 1;
  FUN_006e9c90(param_1[0x12]);
  DAT_0092c664 = 0;
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

