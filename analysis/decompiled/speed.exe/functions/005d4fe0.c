/* speed.exe 005d4fe0 FUN_005d4fe0; analysis pseudocode, not buildable source.
 * calls 005d39b0 FUN_005d39b0
 */

void FUN_005d4fe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_005d39b0(param_1,iVar1,iVar2 * 8 + param_1);
    FUN_005d39b0(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2);
    iVar3 = param_3 + iVar2 * -4;
    FUN_005d39b0(param_3 + iVar2 * -8,iVar3,param_3);
    FUN_005d39b0(iVar1,param_2,iVar3);
    return;
  }
  FUN_005d39b0(param_1,param_2,param_3);
  return;
}

