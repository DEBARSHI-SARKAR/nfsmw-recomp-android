/* speed.exe 0061f590 FUN_0061f590; analysis pseudocode, not buildable source.
 * calls 00619cb0 FUN_00619cb0
 * calls 005d0370 FUN_005d0370
 * calls 0061cc70 FUN_0061cc70
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_0061f590(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00876a73;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  local_10 = param_1;
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x14) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00664cc0(*(undefined4 *)(iVar1 + uVar2 * 4));
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x18) - iVar1 >> 2) * 4,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00619cb0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x10);
  local_4 = local_4 & 0xffffff00;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x18) - iVar1 >> 2) * 4,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_4 = 0xffffffff;
  FUN_0061cc70(&local_10,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x24,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

