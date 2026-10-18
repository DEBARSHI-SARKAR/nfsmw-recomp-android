/* speed.exe 005be440 FUN_005be440; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005be440(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008742a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a2c28;
  pvVar1 = (void *)param_1[5];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_005b6dc0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

