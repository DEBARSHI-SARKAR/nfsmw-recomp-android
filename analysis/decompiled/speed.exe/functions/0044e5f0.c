/* speed.exe 0044e5f0 FUN_0044e5f0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 * calls 0044c0d0 FUN_0044c0d0
 */

void __fastcall FUN_0044e5f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869b7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00893af8;
  local_4 = 0;
  FUN_0044c0d0();
  piVar1 = (int *)param_1[5];
  local_4 = 0xffffffff;
  while (piVar1 != param_1 + 5) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)param_1[5];
  }
  ExceptionList = local_c;
  return;
}

