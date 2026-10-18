/* speed.exe 0043b0d0 FUN_0043b0d0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 00422480 FUN_00422480
 * calls 005cc240 FUN_005cc240
 * calls 0043a9a0 FUN_0043a9a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043b0d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868ef6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043a9a0(param_2,0x3dcccccd,DAT_0090d614,1);
  iVar3 = 0;
  local_4 = 0;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar3 = *(int *)(iVar2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1cf;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1d0] = iVar3;
  FUN_005d7930(&LAB_00403950,puVar1);
  *puVar1 = &PTR_FUN_00890b90;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00891cf8;
  param_1[2] = &PTR_LAB_00891cf0;
  param_1[0x13] = &PTR_LAB_00891c18;
  param_1[0x15] = &PTR_LAB_00891c10;
  *puVar1 = &PTR_LAB_00891c08;
  param_2 = FUN_005cc240("AIGoalNone");
  FUN_00422480(&param_2);
  DAT_0090d614 = DAT_0090d614 + _DAT_00890cd4;
  if (_DAT_0089096c <= DAT_0090d614) {
    DAT_0090d614 = 0.0;
  }
  ExceptionList = local_c;
  return param_1;
}

