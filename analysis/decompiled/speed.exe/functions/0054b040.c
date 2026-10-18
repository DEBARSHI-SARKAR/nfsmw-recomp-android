/* speed.exe 0054b040 FUN_0054b040; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00460c70 FUN_00460c70
 * calls 00516af0 FUN_00516af0
 * calls 00586290 FUN_00586290
 * calls 0079bac0 FUN_0079bac0
 * calls 005750d0 FUN_005750d0
 * calls 0079a020 FUN_0079a020
 * calls 00514c70 FUN_00514c70
 * calls 00592170 FUN_00592170
 * calls 0056c9f0 FUN_0056c9f0
 * calls 0053ab30 FUN_0053ab30
 */

undefined4 * __thiscall FUN_0054b040(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008703ed;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089df94;
  FUN_00592170(param_1[4],0,0,1,1,0,1);
  local_4._0_1_ = 1;
  FUN_005750d0(param_1[4],"ScrollBar",1,0,0);
  *(undefined1 *)(param_1 + 0x53) = 0;
  FUN_0056c9f0();
  param_1[0x54] = &PTR_FUN_0089b098;
  local_4._0_1_ = 2;
  FUN_0056c9f0();
  param_1[0x65] = &PTR_FUN_0089b098;
  local_4._0_1_ = 3;
  FUN_0056c9f0();
  param_1[0x76] = &PTR_FUN_0089b098;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0079bac0();
  FUN_0079a020();
  FUN_0053ab30();
  FUN_00460c70(param_1 + 0x4f,DAT_0091ca80 + 0x2a);
  if (param_1[4] == 0) {
LAB_0054b14f:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(param_1[4]);
    if (iVar1 == 0) goto LAB_0054b14f;
    iVar1 = FUN_005b8550(0x444969fd);
    if (iVar1 == 0) goto LAB_0054b14f;
  }
  FUN_00514c70(iVar1);
  if (param_1[4] == 0) {
LAB_0054b181:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(param_1[4]);
    if (iVar1 == 0) goto LAB_0054b181;
    iVar1 = FUN_005b8550(0x444969fe);
    if (iVar1 == 0) goto LAB_0054b181;
  }
  FUN_00514c70(iVar1);
  if (param_1[4] == 0) {
LAB_0054b1b3:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(param_1[4]);
    if (iVar1 == 0) goto LAB_0054b1b3;
    iVar1 = FUN_005b8550(0x3fbb7a4e);
    if (iVar1 == 0) goto LAB_0054b1b3;
  }
  FUN_00514c70(iVar1);
  if (param_1[4] != 0) {
    iVar1 = FUN_00516af0(param_1[4]);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0x688a1551);
      if (iVar1 != 0) goto LAB_0054b1e7;
    }
  }
  iVar1 = 0;
LAB_0054b1e7:
  FUN_00514c70(iVar1);
  ExceptionList = pvStack_c;
  return param_1;
}

