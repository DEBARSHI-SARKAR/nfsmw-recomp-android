/* speed.exe 0044ae10 FUN_0044ae10; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0044ae10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30) + -4;
  }
  while( true ) {
    if (param_1 == -0x30) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x2c;
    }
    if (iVar1 == iVar2) break;
    if (*(int *)(iVar1 + 0xc) == param_2) {
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

