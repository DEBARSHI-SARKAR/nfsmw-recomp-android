/* speed.exe 005855b0 FUN_005855b0; analysis pseudocode, not buildable source.
 * calls 005720b0 FUN_005720b0
 * calls 005b1560 FUN_005b1560
 * calls 005167e0 FUN_005167e0
 * calls 005be6a0 FUN_005be6a0
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005855b0(int param_1)

{
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008722d8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x20) != 0) {
    ExceptionList = &local_c;
    FUN_005167e0(*(int *)(param_1 + 0x20));
    local_18 = &PTR_FUN_0089b4b0;
    local_4 = 0;
    local_10 = DAT_0091cfa8;
    local_14 = FUN_005720b0(*(undefined4 *)(param_1 + 0x20));
    FUN_005b1560(&local_18);
    FUN_005be6a0(*(undefined4 *)(param_1 + 0x20));
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (**(int **)(param_1 + 0x18) == 0x30210) {
      FUN_004655f0(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

