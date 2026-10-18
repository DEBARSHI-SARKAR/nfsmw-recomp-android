/* speed.exe 0045a5d0 FUN_0045a5d0; analysis pseudocode, not buildable source.
 * calls 00459f80 FUN_00459f80
 */

void __fastcall FUN_0045a5d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(iVar2 + 0x10);
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 0x18);
      piVar1 = (int *)(*(int *)(param_1 + 4) + 0x1c);
      *piVar1 = *piVar1 + 1;
    }
    if (1 < *(uint *)(iVar2 + 0x1c)) {
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) - 1;
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
      return;
    }
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    FUN_00459f80(iVar2,*(int *)(DAT_0090dcbc + 4) + 0x38);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  return;
}

