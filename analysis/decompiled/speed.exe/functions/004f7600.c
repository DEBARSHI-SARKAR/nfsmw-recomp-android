/* speed.exe 004f7600 FUN_004f7600; analysis pseudocode, not buildable source.
 * calls 00786940 FUN_00786940
 */

undefined4 * __fastcall FUN_004f7600(undefined4 *param_1)

{
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0086da18;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_009142d8 = 0;
  DAT_009142dc = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xc1200000;
  local_14 = 0;
  *param_1 = &PTR_FUN_00899ac0;
  FUN_00786940(0);
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  ExceptionList = local_1c;
  return param_1;
}

