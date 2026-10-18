/* speed.exe 00594ca0 FUN_00594ca0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00466440 FUN_00466440
 * calls 00514c70 FUN_00514c70
 */

void __fastcall FUN_00594ca0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872b8b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00514c70(*param_1);
  param_1[4] = 0;
  param_1[3] = 0;
  piVar4 = param_1 + 5;
  piVar1 = (int *)param_1[5];
  while (piVar1 != piVar4) {
    thunk_FUN_007c7250(*(undefined4 *)(*piVar4 + 8));
    piVar1 = (int *)*piVar4;
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)*piVar4;
  }
  piVar1 = (int *)*piVar4;
  local_4 = 0xffffffff;
  while (piVar1 != piVar4) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)*piVar4;
  }
  ExceptionList = local_c;
  return;
}

