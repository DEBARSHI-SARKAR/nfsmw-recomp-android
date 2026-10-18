/* speed.exe 007c90a0 `eh_vector_constructor_iterator'; analysis pseudocode, not buildable source.
 * calls 007c9111 FUN_007c9111
 * calls 007c912d FUN_007c912d
 */

/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar1;
  int iVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008b8ab8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
    (*param_4)(unaff_EDI);
  }
  uVar1 = 1;
  local_8 = 0xffffffff;
  FUN_007c9111();
  FUN_007c912d(unaff_ESI,unaff_EBX,uVar1,iVar2);
  return;
}

