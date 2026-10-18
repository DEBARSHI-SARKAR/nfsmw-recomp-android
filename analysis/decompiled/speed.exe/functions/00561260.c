/* speed.exe 00561260 FUN_00561260; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 0055afa0 FUN_0055afa0
 * calls 00551a20 FUN_00551a20
 * calls 00586290 FUN_00586290
 * calls 00621e80 FUN_00621e80
 */

undefined4 * __thiscall FUN_00561260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008710e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089d7b8;
  iVar1 = param_2[2];
  *(bool *)(param_1 + 0xb) = iVar1 != 0;
  param_1[0xc] = 0;
  local_4 = 0;
  FUN_0055afa0(*param_2,iVar1 != 0);
  local_4._0_1_ = 1;
  iVar1 = FUN_00627400(0xc);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    FUN_00621e80(0x161a918);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  if (*(char *)(param_1 + 0xb) != '\0') {
    *(bool *)((int)param_1 + 0x2d) = param_2[2] == 2;
    *(bool *)((int)param_1 + 0x2e) = param_2[2] == 3;
  }
  FUN_00551a20();
  ExceptionList = local_c;
  return param_1;
}

