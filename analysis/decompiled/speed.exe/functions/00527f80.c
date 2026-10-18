/* speed.exe 00527f80 FUN_00527f80; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void __fastcall FUN_00527f80(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086ea49;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 400),0x30,3,(_func_void_void_ptr *)&DAT_0050e0f0);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0xe0),0x30,3,(_func_void_void_ptr *)&DAT_0050e0f0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0x30),0x30,3,(_func_void_void_ptr *)&DAT_0050e0f0);
  ExceptionList = local_c;
  return;
}

