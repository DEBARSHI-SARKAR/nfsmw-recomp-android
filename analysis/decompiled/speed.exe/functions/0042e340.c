/* speed.exe 0042e340 FUN_0042e340; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 00425300 FUN_00425300
 */

undefined4 * __thiscall FUN_0042e340(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008682e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00404030,param_1);
  local_4 = 0;
  FUN_00425300();
  *param_1 = &PTR_FUN_0089187c;
  ExceptionList = local_c;
  return param_1;
}

