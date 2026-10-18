/* speed.exe 00410700 FUN_00410700; analysis pseudocode, not buildable source.
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00765850 FUN_00765850
 */

undefined4 * __fastcall FUN_00410700(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0077b9e0();
  *param_1 = &PTR_FUN_00890bf4;
  local_4 = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0xffffffff;
  param_1[0xbc] = 0x20;
  FUN_00765850(param_1 + 0xba);
  ExceptionList = local_c;
  return param_1;
}

