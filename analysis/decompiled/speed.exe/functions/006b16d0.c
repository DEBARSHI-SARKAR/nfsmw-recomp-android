/* speed.exe 006b16d0 FUN_006b16d0; analysis pseudocode, not buildable source.
 * calls 006a6b40 FUN_006a6b40
 */

void FUN_006b16d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0x30;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x30 + param_1;
    FUN_006a6b40(param_1,iVar1,iVar2 * 0x60 + param_1);
    FUN_006a6b40(param_2 + iVar2 * -0x30,param_2,iVar2 * 0x30 + param_2);
    iVar3 = param_3 + iVar2 * -0x30;
    FUN_006a6b40(param_3 + iVar2 * -0x60,iVar3,param_3);
    FUN_006a6b40(iVar1,param_2,iVar3);
    return;
  }
  FUN_006a6b40(param_1,param_2,param_3);
  return;
}

