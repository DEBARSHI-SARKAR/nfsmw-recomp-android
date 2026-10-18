/* speed.exe 005b5900 FUN_005b5900; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 */

void __thiscall FUN_005b5900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar2 = FUN_005ad440();
  }
  if (iVar2 != 0) {
    if (*(int *)(param_2 + 0xc) < *(int *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(param_1 + 0x30);
      *(int *)(param_2 + 4) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = param_2;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(int *)(param_1 + 0x30) = param_2;
      bVar3 = *(int *)(param_1 + 0x34) == 0;
      goto LAB_005b598f;
    }
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if ((iVar1 == 0) || (*(int *)(param_2 + 0xc) < *(int *)(iVar1 + 0xc))) break;
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  if (param_2 == 0) {
    return;
  }
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = param_2;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    iVar1 = *(int *)(iVar2 + 4);
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = param_2;
    }
    *(int *)(param_2 + 8) = iVar2;
    *(int *)(iVar2 + 4) = param_2;
  }
  bVar3 = *(int *)(param_1 + 0x34) == iVar2;
LAB_005b598f:
  if (bVar3) {
    *(int *)(param_1 + 0x34) = param_2;
  }
  return;
}

