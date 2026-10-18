/* speed.exe 00483be0 FUN_00483be0; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0047cb70 FUN_0047cb70
 */

void __fastcall FUN_00483be0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x14,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_0047cae0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x14,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_0047cae0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x14,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_0047cae0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x14,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_0047cae0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    FUN_0047cb70();
    thunk_FUN_007c7250(iVar2);
  }
  return;
}

