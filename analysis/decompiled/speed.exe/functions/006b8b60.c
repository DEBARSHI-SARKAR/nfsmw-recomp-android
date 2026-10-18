/* speed.exe 006b8b60 FUN_006b8b60; analysis pseudocode, not buildable source.
 * calls 006b87d0 FUN_006b87d0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_006b8b60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087dd28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ad438;
  param_1[2] = &PTR_LAB_008ad430;
  param_1[0x13] = &PTR_LAB_008ad40c;
  param_1[0x15] = &PTR_FUN_008ad408;
  param_1[0x16] = &PTR_LAB_008ad3fc;
  param_1[0x18] = &PTR_LAB_008ad3f4;
  local_4 = 0;
  FUN_006e9c90(param_1[0x2f]);
  local_4 = 0xffffffff;
  FUN_006b87d0();
  ExceptionList = local_c;
  return;
}

