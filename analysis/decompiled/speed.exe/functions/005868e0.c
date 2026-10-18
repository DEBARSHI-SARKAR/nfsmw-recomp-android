/* speed.exe 005868e0 FUN_005868e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005868e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_2 + 4);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  *puVar2 = piVar3;
  piVar1 = (int *)(param_1 + 0x10);
  *(int **)(param_1 + 0x14) = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = (int)piVar1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*piVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1 + -4;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*piVar1 != 0) {
      *(int *)(param_1 + 0x24) = *piVar1 + -4;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

