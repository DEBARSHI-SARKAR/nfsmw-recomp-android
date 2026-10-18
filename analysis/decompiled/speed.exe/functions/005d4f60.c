/* speed.exe 005d4f60 FUN_005d4f60; analysis pseudocode, not buildable source.
 * calls 005d3910 FUN_005d3910
 */

void FUN_005d4f60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 3;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 8;
    iVar3 = iVar3 + -1;
    FUN_005d3910(param_1,iVar3,iVar2,*(undefined4 *)(param_1 + -8 + iVar1),
                 *(undefined4 *)(param_1 + 4 + iVar3 * 8));
  }
  return;
}

