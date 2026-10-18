/* speed.exe 005bf190 FUN_005bf190; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bf190(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874353;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a2cec;
  pvVar1 = (void *)param_1[8];
  local_4 = 1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_005bcac0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  param_1[8] = 0;
  if (param_1[0xb] != 0) {
    thunk_FUN_007c7250(param_1[0xb]);
  }
  param_1[0xb] = 0;
  thunk_FUN_007c7250(param_1[10]);
  param_1[10] = 0;
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

