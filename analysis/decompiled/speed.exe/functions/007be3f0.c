/* speed.exe 007be3f0 FUN_007be3f0; analysis pseudocode, not buildable source.
 * calls 007bce90 FUN_007bce90
 * calls 0056c9f0 FUN_0056c9f0
 * calls 007b8f10 FUN_007b8f10
 */

undefined4 * __thiscall FUN_007be3f0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883812;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007bce90(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7f24;
  FUN_0056c9f0();
  param_1[0x75] = &PTR_FUN_0089b098;
  local_4._0_1_ = 1;
  FUN_0056c9f0();
  param_1[0x86] = &PTR_FUN_0089b098;
  local_4._0_1_ = 2;
  FUN_0056c9f0();
  param_1[0x97] = &PTR_FUN_0089b098;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_007b8f10();
  ExceptionList = local_c;
  return param_1;
}

