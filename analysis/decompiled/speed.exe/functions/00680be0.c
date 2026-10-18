/* speed.exe 00680be0 FUN_00680be0; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 00674510 FUN_00674510
 */

void * __fastcall FUN_00680be0(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b4b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1,0x30,3,(_func_void_void_ptr *)&LAB_006801a0,thunk_FUN_0067c950);
  local_4 = 0;
  iVar1 = 3;
  do {
    FUN_00674510(8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return param_1;
}

