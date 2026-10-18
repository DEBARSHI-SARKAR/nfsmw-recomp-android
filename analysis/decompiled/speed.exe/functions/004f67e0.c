/* speed.exe 004f67e0 FUN_004f67e0; analysis pseudocode, not buildable source.
 * calls 004b02b0 FUN_004b02b0
 * calls 004b0280 FUN_004b0280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004f67e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d893;
  local_c = ExceptionList;
  ExceptionList = &local_c;
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
  local_4 = 0;
  *param_1 = &PTR_FUN_00899870;
  FUN_004b0280();
  DAT_00914b00 = DAT_00914b00 + 1 & 0x80000001;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((int)DAT_00914b00 < 0) {
    DAT_00914b00 = (DAT_00914b00 - 1 | 0xfffffffe) + 1;
  }
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  FUN_004b02b0(0x3f800000,0x3f800000,1,0);
  param_1[0xe] = 0;
  _DAT_00914324 = 0;
  param_1[0x1a] = 0;
  ExceptionList = local_c;
  return param_1;
}

