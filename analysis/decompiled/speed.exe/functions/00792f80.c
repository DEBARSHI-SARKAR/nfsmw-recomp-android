/* speed.exe 00792f80 FUN_00792f80; analysis pseudocode, not buildable source.
 * calls 007ec1a7 FUN_007ec1a7
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void * __fastcall FUN_00792f80(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088265e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_(param_1,8,6,FUN_0078b650,FUN_007925e0);
  iVar1 = (int)param_1 + 0x30;
  *(int *)iVar1 = iVar1;
  *(int *)((int)param_1 + 0x34) = iVar1;
  local_4 = 1;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x70) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  FUN_007ec1a7();
  ExceptionList = local_c;
  return param_1;
}

