/* speed.exe 00783730 FUN_00783730; analysis pseudocode, not buildable source.
 * calls 00782a30 FUN_00782a30
 * calls 005d0370 FUN_005d0370
 * calls 0077c6e0 FUN_0077c6e0
 * calls 00782970 FUN_00782970
 * calls 0077a3b0 FUN_0077a3b0
 */

void __fastcall FUN_00783730(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_008820b4;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_00782a30();
  iVar1 = *(int *)(param_1 + 0x74);
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x7c) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  local_4._0_1_ = 2;
  FUN_00782970();
  local_4._0_1_ = 1;
  FUN_0077c6e0();
  iVar1 = *(int *)(param_1 + 0x40);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x48) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_0077a3b0();
  ExceptionList = local_c;
  return;
}

