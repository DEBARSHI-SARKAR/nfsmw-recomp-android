/* speed.exe 006ddad0 FUN_006ddad0; analysis pseudocode, not buildable source.
 * calls 006da160 FUN_006da160
 */

void FUN_006ddad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    FUN_006da160(param_1,iVar1,iVar2 * 0x10 + param_1);
    FUN_006da160(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2);
    iVar3 = param_3 + iVar2 * -8;
    FUN_006da160(param_3 + iVar2 * -0x10,iVar3,param_3);
    FUN_006da160(iVar1,param_2,iVar3);
    return;
  }
  FUN_006da160(param_1,param_2,param_3);
  return;
}

