/* speed.exe 0067b060 FUN_0067b060; analysis pseudocode, not buildable source.
 * calls 00676a60 FUN_00676a60
 */

void FUN_0067b060(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x18 + param_1;
    FUN_00676a60(param_1,iVar1,iVar2 * 0x30 + param_1,param_4);
    FUN_00676a60(param_2 + iVar2 * -0x18,param_2,iVar2 * 0x18 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x18;
    FUN_00676a60(param_3 + iVar2 * -0x30,iVar3,param_3,param_4);
    FUN_00676a60(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_00676a60(param_1,param_2,param_3,param_4);
  return;
}

