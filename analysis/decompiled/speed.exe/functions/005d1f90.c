/* speed.exe 005d1f90 FUN_005d1f90; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005ceef0 FUN_005ceef0
 * calls 005cf3f0 FUN_005cf3f0
 */

void __fastcall FUN_005d1f90(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(uint *)(param_1 + 4) & 4) != 0) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    iVar3 = iVar1;
    if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
      iVar3 = iVar1 * 0x10 + param_1;
      iVar1 = iVar1 * 0x10 + param_1;
    }
    uVar2 = *(uint *)(param_1 + 4) >> 5;
    FUN_005cf3f0(uVar2 * 0x10 + iVar1,(*(int *)(param_1 + 8) + uVar2) * 0x10 + iVar3);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar3 = iVar1;
    if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
      iVar3 = iVar1 * 0x10 + param_1;
      iVar1 = iVar1 * 0x10 + param_1;
    }
    FUN_005ceef0(iVar1,(*(uint *)(param_1 + 4) >> 5) * 0x10 + iVar3);
    FUN_004655f0(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

