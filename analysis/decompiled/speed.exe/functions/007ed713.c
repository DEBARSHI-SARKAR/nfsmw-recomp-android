/* speed.exe 007ed713 FUN_007ed713; analysis pseudocode, not buildable source.
 * calls 007ee4ab FUN_007ee4ab
 */

int __thiscall FUN_007ed713(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *param_1;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) == param_2) break;
    iVar1 = iVar2;
    if (*(int *)(iVar2 + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8) + -8;
    }
  }
  if (param_3 == '\0') {
    return iVar2;
  }
  FUN_007ee4ab(iVar2,iVar1);
  return iVar2;
}

