/* speed.exe 007a92b0 FUN_007a92b0; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_007a92b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),thunk_FUN_00501480);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

