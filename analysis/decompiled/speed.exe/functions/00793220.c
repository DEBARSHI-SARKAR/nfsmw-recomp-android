/* speed.exe 00793220 FUN_00793220; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007900a0 FUN_007900a0
 * calls 0078fbc0 FUN_0078fbc0
 */

void __thiscall FUN_00793220(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x20) != param_2)) {
    piVar3 = *(int **)(param_1 + 0x30);
    if (piVar3 == (int *)(param_1 + 0x30)) {
      return;
    }
    while (piVar3[8] != param_2) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)(param_1 + 0x30)) {
        return;
      }
    }
    piVar4 = (int *)piVar3[1];
    iVar1 = *piVar3;
    iVar2 = piVar3[9];
    *piVar4 = iVar1;
    *(int **)(iVar1 + 4) = piVar4;
    FUN_0078fbc0();
    thunk_FUN_007c7250(piVar3);
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x24);
    FUN_007900a0();
  }
  if (iVar2 != 0) {
    piVar3 = *(int **)(param_1 + 0x30);
    while (piVar3 != (int *)(param_1 + 0x30)) {
      piVar4 = piVar3;
      if (piVar3[9] == iVar2) {
        piVar4 = (int *)piVar3[1];
        iVar1 = *piVar3;
        *piVar4 = iVar1;
        *(int **)(iVar1 + 4) = piVar4;
        FUN_0078fbc0();
        thunk_FUN_007c7250(piVar3);
      }
      piVar3 = (int *)*piVar4;
    }
  }
  return;
}

