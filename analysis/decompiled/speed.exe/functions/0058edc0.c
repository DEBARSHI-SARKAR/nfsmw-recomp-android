/* speed.exe 0058edc0 FUN_0058edc0; analysis pseudocode, not buildable source.
 * calls 00526050 FUN_00526050
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_0058edc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008726c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a17d4;
  local_4 = 0;
  FUN_00526050();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

