/* speed.exe 005c0c70 FUN_005c0c70; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 005b3b20 FUN_005b3b20
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005c0c70(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087448b;
  local_c = ExceptionList;
  pvVar1 = (void *)param_1[9];
  local_4 = 0;
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(pvVar1,0x1c,*(int *)((int)pvVar1 + -4),FUN_005ba980);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  param_1[9] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_4 = 0xffffffff;
  param_1[1] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  ExceptionList = local_c;
  return;
}

