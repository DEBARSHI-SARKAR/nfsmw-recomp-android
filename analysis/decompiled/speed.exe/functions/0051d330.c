/* speed.exe 0051d330 FUN_0051d330; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 * calls 005881c0 FUN_005881c0
 */

undefined4 * __thiscall FUN_0051d330(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e3f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005881c0(0,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089c244;
  param_1[0x47] = param_2;
  FUN_00460ca0(param_1 + 6,&DAT_00890978,0x104);
  ExceptionList = local_c;
  return param_1;
}

