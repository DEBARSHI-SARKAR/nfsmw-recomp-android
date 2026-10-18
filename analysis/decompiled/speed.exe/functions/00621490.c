/* speed.exe 00621490 FUN_00621490; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 */

void __fastcall FUN_00621490(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6a0c;
  local_4 = 0;
  *(undefined4 *)(param_1[2] + 4) = param_1[3];
  FUN_0065faf0();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

