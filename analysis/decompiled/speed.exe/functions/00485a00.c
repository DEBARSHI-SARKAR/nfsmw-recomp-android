/* speed.exe 00485a00 FUN_00485a00; analysis pseudocode, not buildable source.
 * calls 00480b10 FUN_00480b10
 */

undefined4 * __thiscall FUN_00485a00(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ac28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00895028;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  FUN_00480b10(*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4);
  ExceptionList = local_c;
  return param_1;
}

