/* speed.exe 00433570 FUN_00433570; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 004331f0 FUN_004331f0
 */

void __fastcall FUN_00433570(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008687f8;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x1f1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00892720;
  param_1[2] = &PTR_LAB_00892718;
  param_1[0x13] = &PTR_LAB_00892640;
  param_1[0x15] = &PTR_LAB_00892638;
  param_1[0x1d6] = &PTR_LAB_008925d8;
  param_1[0x1d8] = &PTR_LAB_008925cc;
  param_1[0x1db] = &PTR_LAB_008925c4;
  *puVar1 = &PTR_LAB_008925b4;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_004331f0();
  ExceptionList = local_c;
  return;
}

