/* speed.exe 0044e1c0 FUN_0044e1c0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0044e1c0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00869b3b;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00893adc;
  piVar2 = (int *)param_1[4];
  piVar1 = param_1 + 4;
  local_4 = 0;
  while (piVar2 != piVar1) {
    piVar2 = (int *)param_1[5];
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)*piVar1;
  }
  piVar2 = (int *)*piVar1;
  local_4 = 0xffffffff;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)*piVar1;
  }
  ExceptionList = local_c;
  return;
}

