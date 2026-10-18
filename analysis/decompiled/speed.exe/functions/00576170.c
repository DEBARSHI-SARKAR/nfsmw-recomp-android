/* speed.exe 00576170 FUN_00576170; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00625840 FUN_00625840
 */

void __fastcall FUN_00576170(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871d4f;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 0x26c);
  local_20 = 3;
  ExceptionList = &local_c;
  do {
    *(undefined4 *)(*(int *)(param_1 + 300) + (-0x134 - param_1) + (int)puVar1) = puVar1[-1];
    *(undefined4 *)(*(int *)(param_1 + 300) + (-0x130 - param_1) + (int)puVar1) = *puVar1;
    *(undefined4 *)(*(int *)(param_1 + 300) + (-300 - param_1) + (int)puVar1) = puVar1[1];
    *(undefined4 *)(*(int *)(param_1 + 300) + (-0x128 - param_1) + (int)puVar1) = puVar1[2];
    *(undefined4 *)(*(int *)(param_1 + 300) + (-0x124 - param_1) + (int)puVar1) = puVar1[3];
    *(undefined4 *)(*(int *)(param_1 + 300) + (-0x120 - param_1) + (int)puVar1) = puVar1[4];
    *(undefined4 *)((int)puVar1 + *(int *)(param_1 + 300) + (-0x11c - param_1)) = puVar1[5];
    puVar1 = puVar1 + 7;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  *(undefined4 *)(*(int *)(param_1 + 300) + 0x18c) = *(undefined4 *)(param_1 + 0x2c8);
  iVar2 = FUN_00627400(0x10);
  local_4 = 0;
  if (iVar2 != 0) {
    FUN_00625840(0,*(int *)(*(int *)(param_1 + 300) + 0x18c) * 0x1c + 0x138 +
                   *(int *)(param_1 + 300));
  }
  ExceptionList = local_c;
  return;
}

