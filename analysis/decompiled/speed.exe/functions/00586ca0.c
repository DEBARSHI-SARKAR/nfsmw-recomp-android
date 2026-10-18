/* speed.exe 00586ca0 FUN_00586ca0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00586ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -4;
  }
  while( true ) {
    if ((int *)(param_1 + 0x10) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0xc;
    }
    if (iVar2 == iVar3) break;
    if (param_2 == iVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return 0;
}

