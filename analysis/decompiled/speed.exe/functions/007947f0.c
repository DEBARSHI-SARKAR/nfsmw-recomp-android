/* speed.exe 007947f0 FUN_007947f0; analysis pseudocode, not buildable source.
 * calls 00792610 FUN_00792610
 * calls 00793460 FUN_00793460
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 007ec1b2 FUN_007ec1b2
 */

void __fastcall FUN_007947f0(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008826de;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00793460();
  FUN_007ec1b2();
  FUN_00792610();
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(param_1,8,6,FUN_007925e0);
  ExceptionList = local_c;
  return;
}

