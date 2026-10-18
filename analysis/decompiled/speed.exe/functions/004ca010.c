/* speed.exe 004ca010 FUN_004ca010; analysis pseudocode, not buildable source.
 * calls 004c6ea0 FUN_004c6ea0
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 0045a430 FUN_0045a430
 */

void __fastcall FUN_004ca010(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086c09e;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_0045a430();
  local_4._0_1_ = 1;
  FUN_0045a430();
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xbc),0x44,4,FUN_004aba50);
  FUN_004c6ea0();
  ExceptionList = local_c;
  return;
}

