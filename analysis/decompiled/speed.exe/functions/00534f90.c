/* speed.exe 00534f90 FUN_00534f90; analysis pseudocode, not buildable source.
 * calls 0056e360 FUN_0056e360
 * calls 00520e90 FUN_00520e90
 * calls 00460ca0 FUN_00460ca0
 * calls 00593920 FUN_00593920
 * calls 0056e320 FUN_0056e320
 */

undefined4 * __thiscall FUN_00534f90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_0089dc34;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  local_4 = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  uVar1 = FUN_0056e320(0x10);
  FUN_00460ca0(param_1 + 0x4b,uVar1);
  uVar1 = FUN_0056e360(0x10);
  FUN_00460ca0(param_1 + 0x50,uVar1);
  FUN_00520e90();
  ExceptionList = local_c;
  return param_1;
}

