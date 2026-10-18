/* speed.exe 005a8b00 FUN_005a8b00; analysis pseudocode, not buildable source.
 * calls 005a4820 FUN_005a4820
 */

void __thiscall FUN_005a8b00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_80 [32];
  
  iVar3 = 0;
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
    if (((*(int *)(iVar1 + 0x20) != 0) && (iVar3 < 0x20)) &&
       ((param_2 != -0x67fc091e || (*(char *)(*(int *)(iVar1 + 0x20) + 0x28) != '\0')))) {
      aiStack_80[iVar3] = iVar1;
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
  }
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = *(int *)(aiStack_80[iVar1] + 0x20);
      if ((iVar2 != 0) && (*(int *)(aiStack_80[iVar1] + 0x1c) != 0)) {
        FUN_005a4820(param_2,0,0,iVar2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return;
}

