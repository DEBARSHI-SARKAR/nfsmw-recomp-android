/* speed.exe 00680c50 FUN_00680c50; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 00674580 FUN_00674580
 */

void * __fastcall FUN_00680c50(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b4d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1,0x30,4,(_func_void_void_ptr *)&LAB_006801c0,thunk_FUN_0067c9c0);
  local_4 = 0;
  iVar1 = 4;
  do {
    FUN_00674580(8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return param_1;
}

