/* speed.exe 00621340 FUN_00621340; analysis pseudocode, not buildable source.
 * calls 0071dce0 FUN_0071dce0
 */

void __fastcall FUN_00621340(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a69d8;
  local_4 = 0;
  FUN_0071dce0();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

