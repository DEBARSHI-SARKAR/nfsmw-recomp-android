/* speed.exe 0059b790 FUN_0059b790; analysis pseudocode, not buildable source.
 * calls 005929d0 FUN_005929d0
 */

undefined4 __thiscall FUN_0059b790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + -4;
  }
  while( true ) {
    if (param_1 == -8) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 4;
    }
    if (iVar1 == iVar2) break;
    if (iVar3 == param_2) {
      FUN_005929d0(iVar1);
      return 1;
    }
    iVar3 = iVar3 + 1;
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
  }
  return 0;
}

