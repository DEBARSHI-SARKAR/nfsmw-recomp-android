/* speed.exe 007094c0 FUN_007094c0; analysis pseudocode, not buildable source.
 * calls 007070d0 FUN_007070d0
 */

void FUN_007094c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0x2c;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x2c + param_1;
    FUN_007070d0(param_1,iVar1,iVar2 * 0x58 + param_1);
    FUN_007070d0(param_2 + iVar2 * -0x2c,param_2,iVar2 * 0x2c + param_2);
    iVar3 = param_3 + iVar2 * -0x2c;
    FUN_007070d0(param_3 + iVar2 * -0x58,iVar3,param_3);
    FUN_007070d0(iVar1,param_2,iVar3);
    return;
  }
  FUN_007070d0(param_1,param_2,param_3);
  return;
}

