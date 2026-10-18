/* speed.exe 005d8f20 FUN_005d8f20; analysis pseudocode, not buildable source.
 * calls 005d8e80 FUN_005d8e80
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_005d8f20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a36ec;
  local_4 = 0;
  FUN_005d8e80();
  piVar1 = (int *)param_1[10];
  local_4 = 0xffffffff;
  while (piVar1 != param_1 + 10) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)param_1[10];
  }
  ExceptionList = local_c;
  return;
}

