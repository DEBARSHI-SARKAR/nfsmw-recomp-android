/* speed.exe 004cf990 FUN_004cf990; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004cb770 FUN_004cb770
 * calls 004c00a0 FUN_004c00a0
 * calls 004c00c0 FUN_004c00c0
 * calls 004bfc60 FUN_004bfc60
 */

undefined4 * __fastcall FUN_004cf990(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c780;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00897938;
  param_1[0x25] = 0;
  uVar2 = FUN_004c00a0();
  param_1[0x2a] = uVar2;
  param_1[0x2b] = 0;
  local_4._0_1_ = 1;
  uVar2 = FUN_004c00c0();
  param_1[0x2f] = uVar2;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3d] = 0x10000;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[1] = 0;
  iVar1 = param_1[0x38];
  local_4 = CONCAT31(local_4._1_3_,4);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x3a] - iVar1 >> 2) << 2,0);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_004bfc60();
  FUN_004cb770();
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  ExceptionList = local_c;
  return param_1;
}

