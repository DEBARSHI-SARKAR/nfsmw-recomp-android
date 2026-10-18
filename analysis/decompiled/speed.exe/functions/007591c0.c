/* speed.exe 007591c0 FUN_007591c0; analysis pseudocode, not buildable source.
 * calls 0074cde0 FUN_0074cde0
 * calls 0045a760 FUN_0045a760
 * calls 00456050 FUN_00456050
 * calls 006eeb40 FUN_006eeb40
 * calls 007327e0 FUN_007327e0
 * calls 00786940 FUN_00786940
 * calls 004549b0 FUN_004549b0
 */

undefined4 * __thiscall FUN_007591c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881109;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006eeb40(param_2);
  local_4 = 0;
  FUN_0074cde0();
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008b5100;
  FUN_007327e0(0,0,0);
  param_1[0xb] = param_3;
  local_4._0_1_ = 2;
  param_1[10] = 0;
  FUN_00786940(0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar1 = FUN_004549b0(param_1[0xb] * 0xd0 + DAT_009b09d8 + 0x10);
  uVar1 = FUN_00456050(0xa5b543b7,uVar1);
  FUN_0045a760(uVar1);
  ExceptionList = local_c;
  return param_1;
}

