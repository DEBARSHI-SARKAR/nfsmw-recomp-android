/* speed.exe 00587140 FUN_00587140; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00587140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 1;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -4;
    }
    iVar3 = param_1;
    if ((int *)(param_1 + 4) == (int *)0x0) {
      iVar3 = 0;
    }
    if (iVar2 == iVar3) break;
    if (iVar2 == param_2) {
      return iVar1;
    }
    iVar2 = *(int *)(iVar2 + 4);
    iVar1 = iVar1 + 1;
  }
  return -1;
}

