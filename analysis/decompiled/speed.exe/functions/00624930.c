/* speed.exe 00624930 FUN_00624930; analysis pseudocode, not buildable source.
 * calls 0074d320 FUN_0074d320
 */

void __fastcall FUN_00624930(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7364;
  local_4 = 0;
  FUN_0074d320();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

