/* speed.exe 004b8900 FUN_004b8900; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 * calls 004aaa60 FUN_004aaa60
 */

undefined4 * __fastcall FUN_004b8900(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b6b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aaa60();
  local_4 = 0;
  FUN_004aaa60();
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[4] = 1;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0045a760(DAT_00988e84);
  param_1[3] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  ExceptionList = local_c;
  return param_1;
}

