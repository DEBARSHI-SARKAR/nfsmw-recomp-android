/* speed.exe 00425fb0 FUN_00425fb0; analysis pseudocode, not buildable source.
 * calls 0041e7c0 FUN_0041e7c0
 */

void FUN_00425fb0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_0041e7c0(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    FUN_0041e7c0(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    FUN_0041e7c0(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    FUN_0041e7c0(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_0041e7c0(param_1,param_2,param_3,param_4);
  return;
}

