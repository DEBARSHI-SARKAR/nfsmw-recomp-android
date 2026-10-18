/* speed.exe 00638540 FUN_00638540; analysis pseudocode, not buildable source.
 * calls 00633f40 FUN_00633f40
 */

undefined4 * __thiscall FUN_00638540(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a7c20;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  if ((param_2 != 0) && (param_3 == 0)) {
    FUN_00633f40(param_2,param_4 != 0);
  }
  ExceptionList = local_c;
  return param_1;
}

