/* speed.exe 0061b350 FUN_0061b350; analysis pseudocode, not buildable source.
 * calls 00614c50 FUN_00614c50
 */

undefined4 FUN_0061b350(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(param_1 + 0xc);
  iVar5 = piVar4[-1];
  if ((*(char *)(iVar5 + 7) == '\0') || ((int *)(iVar5 + 0x10) == (int *)0x0)) {
    pcVar3 = (code *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar1 == 2) {
      pcVar3 = *(code **)(iVar5 + 0x14);
    }
    else if (iVar1 == 7) {
      pcVar3 = (code *)(*(int *)(iVar5 + 0x14) + 0x10);
    }
    else {
      pcVar3 = (code *)0x0;
    }
  }
  if ((piVar4 < *(int **)(param_1 + 8)) && (piVar4 != (int *)0x0)) {
    if (*piVar4 == 4) {
      iVar5 = piVar4[1] + 0x10;
    }
    else {
      iVar5 = FUN_00614c50(param_1,piVar4);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = piVar4[1] + 0x10;
      }
    }
  }
  else {
    iVar5 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  piVar4 = (int *)(iVar1 + 8);
  if (((piVar4 < *(int **)(param_1 + 8)) && (piVar4 != (int *)0x0)) &&
     ((*piVar4 == 4 || (iVar2 = FUN_00614c50(param_1,piVar4), iVar2 != 0)))) {
    (*pcVar3)(iVar5,*(int *)(iVar1 + 0xc) + 0x10);
    return 0;
  }
  (*pcVar3)(iVar5,0);
  return 0;
}

