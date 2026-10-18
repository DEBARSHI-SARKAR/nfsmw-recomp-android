/* speed.exe 004f55b0 FUN_004f55b0; analysis pseudocode, not buildable source.
 * calls 0065c540 FUN_0065c540
 * calls 004ba280 FUN_004ba280
 * calls 004b0280 FUN_004b0280
 */

undefined4 * __fastcall FUN_004f55b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d5ae;
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
  *param_1 = &PTR_FUN_00899388;
  FUN_004b0280();
  local_4._0_1_ = 1;
  FUN_004ba280();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0065c540(3);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1a] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x3e] = 0;
  param_1[0x16] = 0;
  ExceptionList = local_c;
  return param_1;
}

