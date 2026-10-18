/* speed.exe 005cf6b0 FUN_005cf6b0; analysis pseudocode, not buildable source.
 * calls 005cf6b0 FUN_005cf6b0
 */

int __thiscall FUN_005cf6b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    iVar3 = iVar3 * 0x10 + param_1;
  }
  while( true ) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      iVar1 = iVar1 * 0x10 + param_1;
    }
    if (iVar3 == (*(uint *)(param_1 + 4) >> 5) * 0x10 + iVar1) break;
    iVar1 = FUN_005cf6b0(param_2);
    iVar2 = iVar1 + 0xe + iVar2;
    iVar3 = iVar3 + 0x10;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    iVar3 = iVar3 * 0x10 + param_1;
  }
  iVar3 = (*(uint *)(param_1 + 4) >> 5) * 0x10 + iVar3;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      iVar1 = iVar1 * 0x10 + param_1;
    }
    if (iVar3 == ((*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8)) * 0x10 + iVar1) break;
    *param_2 = *param_2 + ((*(uint *)(iVar3 + 4) >> 8) + 0xff & 0xffffff00);
    iVar3 = iVar3 + 0x10;
  }
  return iVar2;
}

