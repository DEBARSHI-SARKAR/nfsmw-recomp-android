/* speed.exe 00425f20 FUN_00425f20; analysis pseudocode, not buildable source.
 * calls 0041e710 FUN_0041e710
 */

void FUN_00425f20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 5;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x20 + param_1;
    FUN_0041e710(param_1,iVar1,iVar2 * 0x40 + param_1);
    FUN_0041e710(param_2 + iVar2 * -0x20,param_2,iVar2 * 0x20 + param_2);
    iVar3 = param_3 + iVar2 * -0x20;
    FUN_0041e710(param_3 + iVar2 * -0x40,iVar3,param_3);
    FUN_0041e710(iVar1,param_2,iVar3);
    return;
  }
  FUN_0041e710(param_1,param_2,param_3);
  return;
}

