/* speed.exe 0043d330 FUN_0043d330; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 00422480 FUN_00422480
 * calls 005cc240 FUN_005cc240
 * calls 0043cff0 FUN_0043cff0
 */

undefined4 * __thiscall FUN_0043d330(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008692c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043cff0(param_2);
  iVar3 = 0;
  local_4 = 0;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar3 = *(int *)(iVar2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1f1;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1f2] = iVar3;
  FUN_005d7930(&LAB_00403850,puVar1);
  *puVar1 = &PTR_FUN_00890af0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00892720;
  param_1[2] = &PTR_LAB_00892718;
  param_1[0x13] = &PTR_LAB_00892640;
  param_1[0x15] = &PTR_LAB_00892638;
  param_1[0x1d6] = &PTR_LAB_008925d8;
  param_1[0x1d8] = &PTR_LAB_008925cc;
  param_1[0x1db] = &PTR_LAB_008925c4;
  *puVar1 = &PTR_LAB_008925b4;
  param_2 = FUN_005cc240("AIGoalRacer");
  FUN_00422480(&param_2);
  ExceptionList = local_c;
  return param_1;
}

