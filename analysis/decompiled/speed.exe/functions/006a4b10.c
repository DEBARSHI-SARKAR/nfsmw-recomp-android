/* speed.exe 006a4b10 FUN_006a4b10; analysis pseudocode, not buildable source.
 * calls 006ee930 FUN_006ee930
 * calls 005d5a50 FUN_005d5a50
 * calls 006eea10 FUN_006eea10
 */

void __fastcall FUN_006a4b10(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087ca3f;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x13;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008aba64;
  param_1[2] = &PTR_LAB_008aba5c;
  *puVar1 = &PTR_LAB_008aba54;
  local_4 = 1;
  if (param_1[0x15] != 0) {
    FUN_006eea10(param_1[0x15]);
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

