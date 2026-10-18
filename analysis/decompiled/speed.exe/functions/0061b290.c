/* speed.exe 0061b290 FUN_0061b290; analysis pseudocode, not buildable source.
 * calls 00614c50 FUN_00614c50
 */

undefined4 FUN_0061b290(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar3 = piVar2[-1];
  if ((*(char *)(iVar3 + 7) == '\0') || ((int *)(iVar3 + 0x10) == (int *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar1 == 2) {
      pcVar4 = *(code **)(iVar3 + 0x14);
    }
    else if (iVar1 == 7) {
      pcVar4 = (code *)(*(int *)(iVar3 + 0x14) + 0x10);
    }
    else {
      pcVar4 = (code *)0x0;
    }
  }
  if ((piVar2 < *(int **)(param_1 + 8)) && (piVar2 != (int *)0x0)) {
    if (*piVar2 == 4) {
      iVar3 = piVar2[1] + 0x10;
      goto LAB_0061b2f5;
    }
    iVar3 = FUN_00614c50(param_1,piVar2);
    if (iVar3 != 0) {
      iVar3 = piVar2[1] + 0x10;
      goto LAB_0061b2f5;
    }
  }
  iVar3 = 0;
LAB_0061b2f5:
  piVar2 = (int *)(*(int *)(param_1 + 0xc) + 8);
  if ((((piVar2 < *(int **)(param_1 + 8)) && (piVar2 != (int *)0x0)) && (*piVar2 != 0)) &&
     ((*piVar2 != 1 || (*(int *)(*(int *)(param_1 + 0xc) + 0xc) != 0)))) {
    (*pcVar4)(iVar3,1);
    return 0;
  }
  (*pcVar4)(iVar3,0);
  return 0;
}

