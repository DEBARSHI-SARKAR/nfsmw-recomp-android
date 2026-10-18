/* speed.exe 00456910 FUN_00456910; analysis pseudocode, not buildable source.
 * calls 004556d0 FUN_004556d0
 */

void FUN_00456910(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 3;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 8;
    iVar3 = iVar3 + -1;
    FUN_004556d0(param_1,iVar3,iVar2,*(undefined4 *)(param_1 + -8 + iVar1),
                 *(undefined4 *)(param_1 + 4 + iVar3 * 8));
  }
  return;
}

