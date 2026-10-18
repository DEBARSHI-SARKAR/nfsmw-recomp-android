/* speed.exe 005be390 FUN_005be390; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005be390(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x1c,*(int *)((int)pvVar1 + -4),FUN_005ba980);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  param_1[9] = 0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

