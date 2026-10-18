/* speed.exe 00624300 FUN_00624300; analysis pseudocode, not buildable source.
 * calls 005258b0 FUN_005258b0
 */

void __fastcall FUN_00624300(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008772d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7250;
  local_4 = 0;
  FUN_005258b0(0);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

