/* speed.exe 005ba240 FUN_005ba240; analysis pseudocode, not buildable source.
 * calls 005b5bb0 FUN_005b5bb0
 */

undefined4 * __thiscall FUN_005ba240(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a2c30;
  FUN_005b5bb0(*(undefined4 *)(param_2 + 0xc));
  ExceptionList = local_c;
  return param_1;
}

