/* speed.exe 004c62e0 FUN_004c62e0; analysis pseudocode, not buildable source.
 * calls 004bf6a0 FUN_004bf6a0
 * calls 00829d20 FUN_00829d20
 */

int __thiscall FUN_004c62e0(int param_1,undefined4 param_2,byte param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_008f86fc == 0) {
    return 0;
  }
  (&DAT_009121d8)[*(int *)(param_1 + 0x3c)] = param_2;
  *(int *)(&DAT_009121d8)[*(int *)(param_1 + 0x3c)] = *(int *)(param_1 + 0x3c);
  uVar1 = 0x1000000 << (param_3 & 0x1f);
  *(uint *)((&DAT_009121d8)[*(int *)(param_1 + 0x3c)] + 0x20) = uVar1;
  uVar1 = uVar1 | 0x10000000;
  *(uint *)((&DAT_009121d8)[*(int *)(param_1 + 0x3c)] + 0x28) = uVar1;
  *(uint *)((&DAT_009121d8)[*(int *)(param_1 + 0x3c)] + 0x24) = 1 << (param_4 & 0x1f) | uVar1;
  iVar2 = FUN_00829d20(*(undefined4 *)((&DAT_009121d8)[*(int *)(param_1 + 0x3c)] + 0x1c));
  if (-1 < iVar2) {
    *(undefined1 *)((&DAT_009121d8)[*(int *)(param_1 + 0x3c)] + 5) = 1;
    FUN_004bf6a0(*(undefined4 *)(param_1 + 0x3c));
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = iVar2 + 1;
  return iVar2;
}

