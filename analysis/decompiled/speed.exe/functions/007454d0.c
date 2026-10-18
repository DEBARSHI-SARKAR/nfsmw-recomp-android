/* speed.exe 007454d0 FUN_007454d0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004ff180 FUN_004ff180
 * calls 007267a0 FUN_007267a0
 */

void __fastcall FUN_007454d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00880c83;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_007267a0();
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  local_4._0_1_ = 3;
  if (param_1[0x35] != 0) {
    FUN_004ff180();
  }
  local_4._0_1_ = 2;
  if (param_1[0x2f] != 0) {
    FUN_004ff180();
  }
  local_4._0_1_ = 1;
  if (param_1[0x29] != 0) {
    FUN_004ff180();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_007267a0();
  ExceptionList = local_c;
  return;
}

