/* speed.exe 0075d100 FUN_0075d100; analysis pseudocode, not buildable source.
 * calls 00785270 FUN_00785270
 * calls 007831e0 FUN_007831e0
 * calls 006eeb60 FUN_006eeb60
 * calls 0045a430 FUN_0045a430
 * calls 007548e0 FUN_007548e0
 * calls 0075c4d0 FUN_0075c4d0
 */

void __fastcall FUN_0075d100(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00881405;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5100;
  local_4 = 3;
  if (param_1[0x11] != 0) {
    *(undefined4 *)(param_1[0x11] + 0x44) = 0;
  }
  if (param_1[0x19] != 0) {
    FUN_00785270(param_1[0x19]);
    param_1[0x19] = 0;
  }
  FUN_0075c4d0();
  local_4._0_1_ = 2;
  FUN_007831e0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0045a430();
  FUN_007548e0();
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = local_c;
  return;
}

