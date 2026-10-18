/* speed.exe 007c2a40 FUN_007c2a40; analysis pseudocode, not buildable source.
 * calls 007bce90 FUN_007bce90
 * calls 00593090 FUN_00593090
 * calls 00586fa0 FUN_00586fa0
 * calls 007c0980 FUN_007c0980
 */

undefined4 * __thiscall FUN_007c2a40(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883b14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007bce90(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b8068;
  param_1[0x6f] = 0xffffffff;
  FUN_00586fa0(0,0,0);
  param_1[0x73] = &PTR_FUN_008b7570;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  local_4._0_1_ = 1;
  FUN_00593090(*param_2,0x14,4,1);
  param_1[0xb8] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0xb3] = 0x406415e3;
  FUN_007c0980();
  ExceptionList = local_c;
  return param_1;
}

