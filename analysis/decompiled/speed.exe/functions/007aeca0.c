/* speed.exe 007aeca0 FUN_007aeca0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007aeca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1b4) + -4;
  }
  do {
    if (param_1 == -0x1b4) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x1b0;
    }
    if (iVar1 == iVar2) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if (*(int *)(iVar2 + 0xc) == *(int *)(param_2 + 0xc)) {
        iVar2 = *(int *)(iVar2 + 0x10);
        iVar3 = *(int *)(param_2 + 0x10);
        goto LAB_007aecf7;
      }
    }
    else if (*(int *)(iVar2 + 0x18) == *(int *)(param_2 + 0x18)) {
      iVar2 = *(int *)(iVar2 + 0x14);
      iVar3 = *(int *)(param_2 + 0x14);
LAB_007aecf7:
      if (iVar2 == iVar3) {
        return iVar1;
      }
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
  } while( true );
}

