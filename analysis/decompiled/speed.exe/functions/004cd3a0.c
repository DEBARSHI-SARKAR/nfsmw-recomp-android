/* speed.exe 004cd3a0 FUN_004cd3a0; analysis pseudocode, not buildable source.
 * calls 004c68d0 FUN_004c68d0
 * calls 004bfc60 FUN_004bfc60
 * calls 007283d0 FUN_007283d0
 * calls 004655f0 FUN_004655f0
 * calls 005d0370 FUN_005d0370
 * calls 004cb770 FUN_004cb770
 */

void __fastcall FUN_004cd3a0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086c5f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00897938;
  iVar1 = param_1[0x38];
  local_4 = 4;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x3a] - iVar1 >> 2) << 2,0);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  iVar1 = param_1[0x26];
  if (iVar1 == 3) {
    if (param_1[0x25] != 0) {
      FUN_004655f0(param_1[0x25]);
    }
  }
  else if (iVar1 == 1) {
    FUN_004655f0(param_1[0x25]);
  }
  else if (iVar1 == 2) {
    FUN_007283d0(param_1[0x25]);
  }
  param_1[0x25] = 0;
  param_1[0x3f] = 0;
  iVar1 = param_1[0x38];
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x3a] - iVar1 >> 2) << 2,0);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  local_4._0_1_ = 2;
  FUN_004c68d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004bfc60();
  if (param_1[0x2f] != 0) {
    FUN_005d0370(param_1[0x2f],0x30,0);
  }
  param_1[0x2f] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004cb770();
  if (param_1[0x2a] != 0) {
    FUN_005d0370(param_1[0x2a],0x2c,0);
  }
  param_1[0x2a] = 0;
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

