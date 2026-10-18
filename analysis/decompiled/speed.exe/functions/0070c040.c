/* speed.exe 0070c040 FUN_0070c040; analysis pseudocode, not buildable source.
 * calls 007096a0 FUN_007096a0
 */

void FUN_0070c040(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_007096a0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1));
  }
  return;
}

