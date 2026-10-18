/* speed.exe 00589db0 FUN_00589db0; analysis pseudocode, not buildable source.
 * calls 00589300 FUN_00589300
 * calls 00574670 FUN_00574670
 */

int * __thiscall FUN_00589db0(int *param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008723b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00589300(1);
  *param_1 = (int)&PTR_FUN_008a1548;
  param_1[0x18] = (int)&PTR_LAB_0089b070;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (int)&PTR_LAB_0089b070;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = param_3;
  param_1[0x37] = param_4;
  *(undefined1 *)(param_1 + 0x3c) = param_5;
  param_1[0x3d] = param_2;
  local_4 = 2;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(0);
  ExceptionList = param_1;
  return param_1;
}

