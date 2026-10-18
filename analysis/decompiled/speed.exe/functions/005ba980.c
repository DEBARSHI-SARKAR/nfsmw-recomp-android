/* speed.exe 005ba980 FUN_005ba980; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005ba980(undefined4 *param_1)

{
  void *pvVar1;
  
  thunk_FUN_007c7250(*param_1);
  thunk_FUN_007c7250(param_1[1]);
  thunk_FUN_007c7250(param_1[2]);
  thunk_FUN_007c7250(param_1[3]);
  thunk_FUN_007c7250(param_1[4]);
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_005b3230);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  return;
}

