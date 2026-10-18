/* speed.exe 0054b3e0 FUN_0054b3e0; analysis pseudocode, not buildable source.
 * calls 00527c10 FUN_00527c10
 * calls 00572360 FUN_00572360
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00799fe0 FUN_00799fe0
 * calls 0079bac0 FUN_0079bac0
 * calls 0079a0b0 FUN_0079a0b0
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_0054b3e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087050b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089e8c4;
  local_4 = 5;
  if (DAT_009b0fa0 != 0) {
    FUN_0079bac0();
    FUN_0079a0b0();
    FUN_0079bac0();
    FUN_00799fe0();
  }
  piVar1 = (int *)param_1[0x3e];
  while (piVar1 != param_1 + 0x3e) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x3e];
  }
  piVar1 = (int *)param_1[0x3c];
  while (piVar1 != param_1 + 0x3c) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x3c];
  }
  piVar1 = (int *)param_1[0x3a];
  while (piVar1 != param_1 + 0x3a) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x3a];
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_00527c10();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

