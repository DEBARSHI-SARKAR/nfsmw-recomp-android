/* speed.exe 0060cfd0 FUN_0060cfd0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060cfd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
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
  if ((piVar1 < *(int **)(param_1 + 8)) && (piVar1 != (int *)0x0)) {
    if (*piVar1 == 2) {
      puVar5 = (undefined4 *)piVar1[1];
    }
    else {
      if (*piVar1 != 7) goto LAB_0060d035;
      puVar5 = (undefined4 *)(piVar1[1] + 0x10);
    }
    if (puVar5 != (undefined4 *)0x0) {
      (*pcVar4)(*puVar5);
      return 0;
    }
  }
LAB_0060d035:
  (*pcVar4)(0);
  return 0;
}

