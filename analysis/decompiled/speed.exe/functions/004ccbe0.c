/* speed.exe 004ccbe0 FUN_004ccbe0; analysis pseudocode, not buildable source.
 * calls 004c0140 FUN_004c0140
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void * __fastcall FUN_004ccbe0(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c4e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1,0x74,3,(_func_void_void_ptr *)&LAB_004cb950,thunk_FUN_004c9240);
  local_4 = 0;
  iVar1 = 3;
  do {
    FUN_004c0140(0x19);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return param_1;
}

