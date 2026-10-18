/* speed.exe 007c12c0 FUN_007c12c0; analysis pseudocode, not buildable source.
 * calls 0056c9f0 FUN_0056c9f0
 * calls 007be7d0 FUN_007be7d0
 * calls 005938a0 FUN_005938a0
 */

undefined4 * __thiscall FUN_007c12c0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883a92;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,5,2,1);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b8028;
  param_1[0xb] = &PTR_LAB_008b801c;
  FUN_0056c9f0();
  param_1[0x38] = &PTR_FUN_0089b098;
  local_4._0_1_ = 1;
  FUN_0056c9f0();
  param_1[0x49] = &PTR_FUN_0089b098;
  local_4._0_1_ = 2;
  FUN_0056c9f0();
  param_1[0x5a] = &PTR_FUN_0089b098;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
  FUN_007be7d0();
  ExceptionList = local_c;
  return param_1;
}

