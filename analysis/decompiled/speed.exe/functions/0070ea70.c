/* speed.exe 0070ea70 FUN_0070ea70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070ea70(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087fc6f;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 100);
  local_4 = 5;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x6c) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  local_4._0_1_ = 4;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x5c) - iVar1 >> 2) * 4,0);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x4c) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar1 = *(int *)(param_1 + 0x34);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x3c) - iVar1 >> 2) * 4,0);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = *(int *)(param_1 + 0x24);
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x2c) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x1c) - iVar1 >> 2) * 4,0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

