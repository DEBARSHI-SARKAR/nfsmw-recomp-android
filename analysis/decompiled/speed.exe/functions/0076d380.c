/* speed.exe 0076d380 FUN_0076d380; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0076d380(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) + -4;
  }
  while( true ) {
    if (param_1 == -0x4c) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x48;
    }
    if (iVar1 == iVar2) break;
    if (param_2 == *(int *)(iVar1 + 0x2c)) {
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

