/* speed.exe 005d5b30 FUN_005d5b30; analysis pseudocode, not buildable source.
 * calls 005d5aa0 FUN_005d5aa0
 */

undefined4 __thiscall FUN_005d5b30(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_0091dd94 = *(undefined4 *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  DAT_0091dd90 = 1;
  iVar4 = iVar3;
  if ((*(uint *)(param_2 + 4) & 2) != 0) {
    iVar4 = iVar3 * 0x10 + param_2;
  }
  uVar1 = *(uint *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  if ((uVar1 & 2) != 0) {
    iVar3 = iVar3 * 0x10 + param_2;
  }
  for (iVar3 = (*(uint *)(param_2 + 4) >> 5) * 0x10 + iVar3;
      iVar3 != ((uVar1 >> 5) + iVar2) * 0x10 + iVar4; iVar3 = iVar3 + 0x10) {
    FUN_005d5aa0(param_2,iVar3);
  }
  DAT_0091dd90 = 0;
  return 1;
}

