/* speed.exe 0045a760 FUN_0045a760; analysis pseudocode, not buildable source.
 * calls 00459f80 FUN_00459f80
 * calls 0045a5d0 FUN_0045a5d0
 */

void __thiscall FUN_0045a760(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    FUN_0045a5d0();
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x1c) < 2) {
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        FUN_00459f80(iVar1,*(int *)(DAT_0090dcbc + 4) + 0x38);
      }
      else {
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) - 1;
      }
    }
    *(int *)(param_1 + 4) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
      if (*(int *)(*(int *)(param_1 + 4) + 0x24) == 0) {
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
        return;
      }
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  return;
}

