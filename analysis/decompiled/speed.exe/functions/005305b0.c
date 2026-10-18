/* speed.exe 005305b0 FUN_005305b0; analysis pseudocode, not buildable source.
 * calls 00588c90 FUN_00588c90
 */

void __fastcall FUN_005305b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x154) == 0) goto LAB_005305ca;
  piVar5 = (int *)(*(int *)(param_1 + 0x154) + -4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(param_1 + 0x150);
    }
    if (piVar5 == piVar2) break;
    (**(code **)(*piVar5 + 0x14))();
    (**(code **)(*piVar5 + 0x18))();
    if (piVar5[1] == 0) {
LAB_005305ca:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(piVar5[1] + -4);
    }
  }
  piVar5 = (int *)*piVar1;
  while (piVar5 != piVar1) {
    iVar3 = *piVar5;
    piVar2 = (int *)piVar5[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    if (piVar5 + -1 != (int *)0x0) {
      (**(code **)piVar5[-1])(1);
    }
    piVar5 = (int *)*piVar1;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    if (param_1 == -0x2c) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 0x28;
    }
    if (iVar3 == iVar4) break;
    *(undefined1 *)(iVar3 + 0x49) = 1;
    iVar3 = *(int *)(iVar3 + 4);
  }
  FUN_00588c90();
  return;
}

