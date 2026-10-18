/* speed.exe 005eafc0 FUN_005eafc0; analysis pseudocode, not buildable source.
 * calls 005e7d00 FUN_005e7d00
 */

void FUN_005eafc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    FUN_005e7d00(param_1,iVar1,iVar2 * 0x10 + param_1);
    FUN_005e7d00(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2);
    iVar3 = param_3 + iVar2 * -8;
    FUN_005e7d00(param_3 + iVar2 * -0x10,iVar3,param_3);
    FUN_005e7d00(iVar1,param_2,iVar3);
    return;
  }
  FUN_005e7d00(param_1,param_2,param_3);
  return;
}

