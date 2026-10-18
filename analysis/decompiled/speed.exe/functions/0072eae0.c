/* speed.exe 0072eae0 FUN_0072eae0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

/* WARNING: Removing unreachable block (ram,0x0072eaf5) */

void __fastcall FUN_0072eae0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = param_1 + 0x1909;
  *piVar1 = (int)piVar1;
  param_1[0x190a] = (int)piVar1;
  piVar1 = (int *)param_1[0x12];
  while (piVar1 != param_1 + 0x12) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x12];
  }
  piVar1 = (int *)param_1[0x10];
  while (piVar1 != param_1 + 0x10) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x10];
  }
  piVar1 = (int *)param_1[0xe];
  while (piVar1 != param_1 + 0xe) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0xe];
  }
  piVar1 = (int *)param_1[0xc];
  while (piVar1 != param_1 + 0xc) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0xc];
  }
  piVar1 = (int *)param_1[10];
  while (piVar1 != param_1 + 10) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[10];
  }
  piVar1 = (int *)param_1[8];
  while (piVar1 != param_1 + 8) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[8];
  }
  piVar1 = (int *)param_1[6];
  while (piVar1 != param_1 + 6) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[6];
  }
  piVar1 = (int *)param_1[4];
  while (piVar1 != param_1 + 4) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[4];
  }
  piVar1 = (int *)param_1[2];
  while (piVar1 != param_1 + 2) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[2];
  }
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

