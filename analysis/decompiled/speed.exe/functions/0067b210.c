/* speed.exe 0067b210 FUN_0067b210; analysis pseudocode, not buildable source.
 * calls 00676c80 FUN_00676c80
 */

void FUN_0067b210(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_00676c80(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    FUN_00676c80(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    FUN_00676c80(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    FUN_00676c80(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_00676c80(param_1,param_2,param_3,param_4);
  return;
}

