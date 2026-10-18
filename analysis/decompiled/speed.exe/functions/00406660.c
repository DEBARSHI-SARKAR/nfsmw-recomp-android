/* speed.exe 00406660 FUN_00406660; analysis pseudocode, not buildable source.
 * calls 006f82f0 FUN_006f82f0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_00406660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008677a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890d14;
  param_1[2] = &PTR_LAB_00890d0c;
  param_1[0xb] = &PTR_LAB_00890cf8;
  param_1[0xe] = &PTR_LAB_00890cdc;
  local_4 = 0;
  FUN_006e9c90(param_1[0x12]);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

