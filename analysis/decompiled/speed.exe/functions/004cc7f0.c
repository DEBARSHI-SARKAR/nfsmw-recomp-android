/* speed.exe 004cc7f0 FUN_004cc7f0; analysis pseudocode, not buildable source.
 * calls 004af110 FUN_004af110
 * calls 004c6fa0 FUN_004c6fa0
 * calls 007869c0 FUN_007869c0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007831e0 FUN_007831e0
 * calls 006eeb60 FUN_006eeb60
 * calls 004ca010 FUN_004ca010
 */

void __fastcall FUN_004cc7f0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c44a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00897740;
  local_4 = 2;
  FUN_007869c0(0);
  if (DAT_00911fa8 != 0) {
    FUN_004af110(param_1[5]);
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    FUN_004ca010();
    thunk_FUN_007c7250(iVar1);
    param_1[5] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007831e0();
  FUN_004c6fa0();
  local_4 = 0xffffffff;
  FUN_006eeb60();
  ExceptionList = local_c;
  return;
}

