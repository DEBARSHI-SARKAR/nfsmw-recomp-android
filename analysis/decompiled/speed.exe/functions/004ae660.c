/* speed.exe 004ae660 FUN_004ae660; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void __fastcall FUN_004ae660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b238;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(param_1 + 0x11,0x14,4,thunk_FUN_0045a430);
  *param_1 = &PTR___purecall_008967e4;
  ExceptionList = local_c;
  return;
}

