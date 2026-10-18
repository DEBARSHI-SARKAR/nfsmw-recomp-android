/* speed.exe 007c8f50 `eh_vector_destructor_iterator'; analysis pseudocode, not buildable source.
 * calls 007c8fbf FUN_007c8fbf
 * calls 007c8fdb FUN_007c8fdb
 */

/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008b8a98;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  uVar1 = 1;
  local_8 = 0xffffffff;
  FUN_007c8fbf();
  FUN_007c8fdb(unaff_ESI,unaff_EBX,uVar1);
  return;
}

