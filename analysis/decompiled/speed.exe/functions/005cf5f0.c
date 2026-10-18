/* speed.exe 005cf5f0 FUN_005cf5f0; analysis pseudocode, not buildable source.
 * calls 005c77d0 FUN_005c77d0
 * calls 005cf5f0 FUN_005cf5f0
 */

/* WARNING: Removing unreachable block (ram,0x005cf61c) */

void __thiscall FUN_005cf5f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_005c77d0(param_1,*(int *)(param_1 + 0xc) << 4,*(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0xc) = iVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      iVar3 = iVar3 * 0x10 + param_1;
    }
    if (iVar1 == (*(uint *)(param_1 + 4) >> 5) * 0x10 + iVar3) break;
    FUN_005cf5f0(param_2);
    iVar1 = iVar1 + 0x10;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    iVar1 = iVar1 * 0x10 + param_1;
  }
  iVar1 = (*(uint *)(param_1 + 4) >> 5) * 0x10 + iVar1;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      iVar3 = iVar3 * 0x10 + param_1;
    }
    if (iVar1 == ((*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8)) * 0x10 + iVar3) break;
    uVar2 = FUN_005c77d0(iVar1,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
    iVar1 = iVar1 + 0x10;
  }
  return;
}

