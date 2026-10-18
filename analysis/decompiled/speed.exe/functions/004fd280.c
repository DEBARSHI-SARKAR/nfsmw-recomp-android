/* speed.exe 004fd280 FUN_004fd280; analysis pseudocode, not buildable source.
 * calls 0064a980 FUN_0064a980
 */

void FUN_004fd280(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_0064a980(iVar2);
  FUN_0064a980(iVar2 + 8);
  iVar1 = *(int *)(iVar2 + 0xc) + 8 + iVar2 + 8;
  FUN_0064a980(iVar1);
  iVar3 = *(int *)(iVar1 + 4);
  *(int *)(param_1 + 8) = iVar1 - iVar2;
  *(int *)(param_1 + 0xc) = iVar3 + 0x10;
  return;
}

