/* speed.exe 0044a670 FUN_0044a670; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0044a670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + -4;
  }
  while( true ) {
    iVar2 = param_1;
    if (param_1 == -4) {
      iVar2 = 0;
    }
    if (iVar1 == iVar2) break;
    if (param_2 == *(int *)(iVar1 + 0xc)) {
      return iVar1;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
  }
  return 0;
}

