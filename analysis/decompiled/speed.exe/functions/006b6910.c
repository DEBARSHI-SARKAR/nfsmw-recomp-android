/* speed.exe 006b6910 FUN_006b6910; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 0069ccc0 FUN_0069ccc0
 * calls 006b13d0 FUN_006b13d0
 * calls 006466b0 FUN_006466b0
 */

void __fastcall FUN_006b6910(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087d8bf;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x1d;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ac6bc;
  param_1[2] = &PTR_LAB_008ac6b4;
  param_1[0x12] = &PTR_LAB_008ac670;
  *puVar1 = &PTR_LAB_008ac658;
  local_4 = 1;
  FUN_006466b0();
  local_4 = local_4 & 0xffffff00;
  *puVar1 = &PTR_FUN_008ac12c;
  FUN_006b13d0();
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_0069ccc0();
  ExceptionList = local_c;
  return;
}

