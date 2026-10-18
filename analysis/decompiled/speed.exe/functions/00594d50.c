/* speed.exe 00594d50 FUN_00594d50; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00514cc0 FUN_00514cc0
 * calls 00515d70 FUN_00515d70
 * calls 00466440 FUN_00466440
 * calls 007c4b80 FUN_007c4b80
 * calls 00514c70 FUN_00514c70
 * calls 00654870 FUN_00654870
 */

void __thiscall FUN_00594d50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1[4] == 0) || (param_1[4] == 0x7fffffff)) {
LAB_00594d75:
    iVar4 = param_1[3];
    if (iVar4 < 1) goto LAB_00594dcb;
    uVar1 = *(undefined4 *)(param_1[5] + 8);
    FUN_00515d70(*param_1,uVar1);
    iVar4 = FUN_007c4b80();
    param_1[4] = iVar4;
    thunk_FUN_007c7250(uVar1);
    piVar2 = (int *)param_1[5];
    iVar4 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    FUN_00466440(piVar2);
    param_1[3] = param_1[3] + -1;
  }
  else {
    iVar4 = FUN_00654870(param_2);
    if (iVar4 == 0) goto LAB_00594d75;
  }
  iVar4 = param_1[3];
LAB_00594dcb:
  if ((iVar4 == 0) && ((iVar4 = param_1[4], iVar4 == 0 || (iVar4 == 0x7fffffff)))) {
    FUN_00514c70(*param_1);
    return;
  }
  FUN_00514cc0(*param_1);
  return;
}

