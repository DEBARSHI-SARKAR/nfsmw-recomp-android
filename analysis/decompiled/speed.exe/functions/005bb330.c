/* speed.exe 005bb330 FUN_005bb330; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bb330(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x14);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_005b6dc0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

