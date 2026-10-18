/* speed.exe 00543db0 FUN_00543db0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00543db0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0xd4f4069);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) && (*(int *)(iVar1 + 0x24) != param_2)) {
        *(int *)(iVar1 + 0x24) = param_2;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
      }
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0xfac88427);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) && (*(int *)(iVar1 + 0x24) != param_2)) {
        *(int *)(iVar1 + 0x24) = param_2;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
      }
    }
  }
  return;
}

