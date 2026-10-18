/* speed.exe 004457d0 FUN_004457d0; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 * calls 006f82f0 FUN_006f82f0
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_004457d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086996f;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008933cc;
  param_1[2] = &PTR_LAB_008933c4;
  param_1[0xb] = &PTR_LAB_008933b0;
  param_1[0xe] = &PTR_LAB_00893394;
  *puVar1 = &PTR_LAB_0089338c;
  local_4 = 1;
  if (param_1[0x14] != 0) {
    FUN_00664cc0(param_1[0x14]);
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

