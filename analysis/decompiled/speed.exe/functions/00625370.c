/* speed.exe 00625370 FUN_00625370; analysis pseudocode, not buildable source.
 * calls 006f6ec0 FUN_006f6ec0
 */

void __fastcall FUN_00625370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a757c;
  local_4 = 0;
  FUN_006f6ec0();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

