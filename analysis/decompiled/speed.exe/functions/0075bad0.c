/* speed.exe 0075bad0 FUN_0075bad0; analysis pseudocode, not buildable source.
 * calls 00759c60 FUN_00759c60
 */

void __thiscall FUN_0075bad0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x58);
  piVar1 = (int *)(param_1 + 0x58);
  if (piVar5 != piVar1) {
    while (piVar5[0x1b4] != param_2) {
      piVar5 = (int *)*piVar5;
      if (piVar5 == piVar1) {
        return;
      }
    }
    if (piVar5[2] != 0) {
      if (piVar5[4] != 0) {
        iVar2 = *piVar5;
        piVar3 = (int *)piVar5[1];
        *piVar3 = iVar2;
        *(int **)(iVar2 + 4) = piVar3;
        puVar4 = *(undefined4 **)(param_1 + 0x5c);
        *puVar4 = piVar5;
        *(int **)(param_1 + 0x5c) = piVar5;
        piVar5[1] = (int)puVar4;
        *piVar5 = (int)piVar1;
      }
      piVar1 = piVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      if ((piVar5[2] == 0) && (piVar5[3] == 0)) {
        FUN_00759c60(piVar5,0);
      }
    }
  }
  return;
}

