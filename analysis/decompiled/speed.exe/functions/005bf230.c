/* speed.exe 005bf230 FUN_005bf230; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __thiscall FUN_005bf230(int param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087436b;
  local_c = ExceptionList;
  pvVar1 = *(void **)(param_1 + 0x20);
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_005bcac0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x1c) = param_2;
  if (param_2 != 0) {
    piVar2 = _malloc(param_2 * 0x38 + 4);
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar2 = param_2;
      _eh_vector_constructor_iterator_
                (piVar3,0x38,param_2,(_func_void_void_ptr *)&LAB_005b95f0,FUN_005bcac0);
    }
    *(int **)(param_1 + 0x20) = piVar3;
  }
  ExceptionList = local_c;
  return;
}

