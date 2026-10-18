/* speed.exe 007572c0 FUN_007572c0; analysis pseudocode, not buildable source.
 * calls 0074c760 FUN_0074c760
 * calls 00754660 FUN_00754660
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00754590 FUN_00754590
 * calls 0074c720 FUN_0074c720
 */

void __fastcall FUN_007572c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00881022;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_00754660();
  piVar1 = *(int **)(param_1 + 0x50);
  while (piVar1 != (int *)(param_1 + 0x50)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = *(int **)(param_1 + 0x50);
  }
  piVar1 = *(int **)(param_1 + 0x48);
  while (piVar1 != (int *)(param_1 + 0x48)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = *(int **)(param_1 + 0x48);
  }
  piVar1 = *(int **)(param_1 + 0x40);
  while (piVar1 != (int *)(param_1 + 0x40)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = *(int **)(param_1 + 0x40);
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_00754590();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0074c760();
  local_4 = 0xffffffff;
  FUN_0074c720();
  ExceptionList = local_c;
  return;
}

