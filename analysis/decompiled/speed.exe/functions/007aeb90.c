/* speed.exe 007aeb90 FUN_007aeb90; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007aeb90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1b4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1b4) + -4;
  }
  while( true ) {
    if (param_1 == -0x1b4) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x1b0;
    }
    if (iVar1 == iVar2) break;
    if (*(char *)(param_2 + 0x1c) == '\0') {
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x10);
      iVar3 = *(int *)(param_2 + 0x10);
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x18);
      iVar3 = *(int *)(param_2 + 0x18);
    }
    if (iVar2 == iVar3) {
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

