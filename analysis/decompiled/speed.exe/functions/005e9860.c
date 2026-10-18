/* speed.exe 005e9860 FUN_005e9860; analysis pseudocode, not buildable source.
 * calls 005dc910 thunk_FUN_0045a430
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void __fastcall FUN_005e9860(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        thunk_FUN_0045a430();
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
    pvVar1 = *(void **)(param_1 + 0x24);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x1c,*(int *)((int)pvVar1 + -4),thunk_FUN_0045a430);
      thunk_FUN_007c7250((int)pvVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

