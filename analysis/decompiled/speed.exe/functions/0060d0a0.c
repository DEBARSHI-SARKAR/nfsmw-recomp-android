/* speed.exe 0060d0a0 FUN_0060d0a0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = piVar1[-1];
  if ((*(char *)(iVar2 + 7) == '\0') || ((int *)(iVar2 + 0x10) == (int *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 2) {
      pcVar4 = *(code **)(iVar2 + 0x14);
    }
    else if (iVar3 == 7) {
      pcVar4 = (code *)(*(int *)(iVar2 + 0x14) + 0x10);
    }
    else {
      pcVar4 = (code *)0x0;
    }
  }
  if ((((piVar1 < *(int **)(param_1 + 8)) && (piVar1 != (int *)0x0)) && (*piVar1 != 0)) &&
     ((*piVar1 != 1 || (piVar1[1] != 0)))) {
    (*pcVar4)(1);
    return 0;
  }
  (*pcVar4)(0);
  return 0;
}

