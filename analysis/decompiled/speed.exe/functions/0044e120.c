/* speed.exe 0044e120 FUN_0044e120; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0044e120(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00869b1b;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00893ae0;
  piVar2 = (int *)param_1[5];
  piVar1 = param_1 + 5;
  local_4 = 0;
  while (piVar2 != piVar1) {
    piVar2 = (int *)param_1[6];
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    piVar5 = (int *)piVar2[2];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    (**(code **)(*piVar5 + 8))();
    (**(code **)*piVar5)(1);
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
  ExceptionList = pvStack_c;
  return;
}

