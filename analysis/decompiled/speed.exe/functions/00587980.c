/* speed.exe 00587980 FUN_00587980; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00587980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 1;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -4;
    }
    iVar2 = param_1;
    if (param_1 == -4) {
      iVar2 = 0;
    }
    if (iVar1 == iVar2) break;
    if (iVar1 == param_2) {
      return iVar3 - *(int *)(param_1 + 0xc0) / 2;
    }
    iVar1 = *(int *)(iVar1 + 4);
    iVar3 = iVar3 + 1;
  }
  return -1;
}

