/* speed.exe 00680cc0 FUN_00680cc0; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 0041ae90 FUN_0041ae90
 */

void * __fastcall FUN_00680cc0(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b4f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1,0x60,10,(_func_void_void_ptr *)&LAB_00430910,FUN_00430930);
  local_4 = 0;
  iVar1 = 10;
  do {
    FUN_0041ae90(0x14);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return param_1;
}

