/* speed.exe 00508310 FUN_00508310; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_00508310(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void **ppvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086dece;
  piVar1 = *(int **)(param_1 + 0x88);
  local_4 = 0;
  ppvVar4 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar1 != (int *)(param_1 + 0x88)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    ppvVar4 = ExceptionList;
    piVar1 = *(int **)(param_1 + 0x88);
  }
  piVar1 = *(int **)(param_1 + 0x80);
  local_4 = 0xffffffff;
  while (piVar1 != (int *)(param_1 + 0x80)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = *(int **)(param_1 + 0x80);
  }
  ExceptionList = local_c;
  return;
}

