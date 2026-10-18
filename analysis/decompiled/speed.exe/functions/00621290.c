/* speed.exe 00621290 FUN_00621290; analysis pseudocode, not buildable source.
 * calls 0075c760 FUN_0075c760
 */

void __fastcall FUN_00621290(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876ca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a69a4;
  local_4 = 0;
  FUN_0075c760(0,0);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

