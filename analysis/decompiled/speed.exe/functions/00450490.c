/* speed.exe 00450490 FUN_00450490; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 * calls 0044d700 FUN_0044d700
 * calls 0044c180 FUN_0044c180
 * calls 0044efc0 FUN_0044efc0
 */

void __fastcall FUN_00450490(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869c27;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  FUN_0044efc0(1,0);
  pvStack_c._0_1_ = 3;
  FUN_0044d700();
  piVar1 = *(int **)(param_1 + 0x3c);
  pvStack_c._0_1_ = 2;
  while (piVar1 != (int *)(param_1 + 0x3c)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = *(int **)(param_1 + 0x3c);
  }
  piVar1 = *(int **)(param_1 + 0x34);
  pvStack_c._0_1_ = 1;
  while (piVar1 != (int *)(param_1 + 0x34)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = *(int **)(param_1 + 0x34);
  }
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  FUN_0044c180();
  piVar1 = *(int **)(param_1 + 0x24);
  pvStack_c = (void *)0xffffffff;
  while (piVar1 != (int *)(param_1 + 0x24)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = *(int **)(param_1 + 0x24);
  }
  ExceptionList = unaff_ESI;
  return;
}

