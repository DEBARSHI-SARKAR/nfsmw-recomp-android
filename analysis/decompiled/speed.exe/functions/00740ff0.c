/* speed.exe 00740ff0 FUN_00740ff0; analysis pseudocode, not buildable source.
 * calls 0078a1d0 FUN_0078a1d0
 * calls 00734d80 FUN_00734d80
 * calls 0078a550 FUN_0078a550
 */

undefined4 * __fastcall FUN_00740ff0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880afe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)((int)param_1 + 0x111) = 0;
  *(undefined1 *)((int)param_1 + 0x112) = 0;
  FUN_0078a1d0();
  local_4 = 0;
  FUN_0078a1d0();
  local_4._0_1_ = 1;
  FUN_0078a1d0();
  local_4._0_1_ = 2;
  FUN_0078a1d0();
  local_4._0_1_ = 3;
  FUN_0078a1d0();
  local_4._0_1_ = 4;
  FUN_0078a1d0();
  local_4._0_1_ = 5;
  FUN_0078a550();
  local_4._0_1_ = 6;
  FUN_0078a550();
  local_4._0_1_ = 7;
  FUN_0078a550();
  local_4._0_1_ = 8;
  FUN_0078a550();
  local_4._0_1_ = 9;
  FUN_0078a550();
  local_4._0_1_ = 10;
  FUN_0078a550();
  local_4._0_1_ = 0xb;
  FUN_0078a550();
  local_4._0_1_ = 0xc;
  FUN_0078a550();
  local_4._0_1_ = 0xd;
  FUN_0078a550();
  local_4._0_1_ = 0xe;
  FUN_0078a550();
  local_4._0_1_ = 0xf;
  FUN_0078a550();
  local_4 = CONCAT31(local_4._1_3_,0x10);
  *param_1 = 0;
  puVar2 = param_1 + 0x20;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00734d80();
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x119) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  ExceptionList = local_c;
  return param_1;
}

