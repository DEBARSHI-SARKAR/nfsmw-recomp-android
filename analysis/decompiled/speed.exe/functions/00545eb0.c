/* speed.exe 00545eb0 FUN_00545eb0; analysis pseudocode, not buildable source.
 * calls 0052a7b0 FUN_0052a7b0
 * calls 0052ac70 FUN_0052ac70
 * calls 005938a0 FUN_005938a0
 * calls 0052ab90 FUN_0052ab90
 */

undefined4 * __thiscall FUN_00545eb0(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ff98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,2,8,1);
  *param_1 = &PTR_FUN_0089d234;
  param_1[0xb] = &PTR_LAB_0089d228;
  *(bool *)(param_1 + 0x38) = *(int *)(param_2 + 8) != 0;
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0xe1) = 0;
  param_1[0x39] = 1;
  *(undefined1 *)(param_1 + 0x37) = 1;
  param_1[0x36] = 0x936a6a7f;
  FUN_0052a7b0();
  FUN_0052ac70();
  FUN_0052ab90();
  ExceptionList = local_c;
  return param_1;
}

