/* speed.exe 005870f0 FUN_005870f0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005870f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    return 0;
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
    if (param_2 == iVar3) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 4);
    iVar3 = iVar3 + 1;
  }
  return 0;
}

