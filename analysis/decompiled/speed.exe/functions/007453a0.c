/* speed.exe 007453a0 FUN_007453a0; analysis pseudocode, not buildable source.
 * calls 004aaa60 FUN_004aaa60
 * calls 00449320 FUN_00449320
 * calls 00738d50 FUN_00738d50
 */

undefined4 * __fastcall FUN_007453a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00880c33;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00449320(0x3ccccccd);
  param_1[0x17] = 0;
  local_14 = 0;
  FUN_004aaa60();
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x20] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_14 = CONCAT31(local_14._1_3_,4);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_00738d50(&DAT_00988e80);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  *DAT_009b3524 = param_1;
  puVar1 = param_1;
  param_1[1] = DAT_009b3524;
  DAT_009b3524 = puVar1;
  *param_1 = &DAT_009b3520;
  ExceptionList = local_1c;
  return param_1;
}

