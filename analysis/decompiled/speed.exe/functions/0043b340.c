/* speed.exe 0043b340 FUN_0043b340; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 005d59f0 FUN_005d59f0
 * calls 0043b1c0 FUN_0043b1c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043b340(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868f36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043b1c0(param_2);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x1e9;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x1ea] = iVar3;
  FUN_005d7930(&LAB_00404060,puVar1);
  *puVar1 = &PTR_FUN_00890b98;
  _DAT_0090d9a8 = _DAT_0090d9a8 + _DAT_00890bf8;
  *param_1 = &PTR_FUN_008920d8;
  param_1[2] = &PTR_LAB_008920d0;
  param_1[0x13] = &PTR_LAB_00891ff8;
  param_1[0x15] = &PTR_LAB_00891ff0;
  param_1[0x1d6] = &PTR_LAB_00891f60;
  *puVar1 = &PTR_LAB_00891f18;
  *(undefined1 *)((int)param_1 + 0x7d5) = 0;
  param_1[0x1f6] = 0x41f00000;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  *(undefined1 *)(param_1 + 0x1fd) = 0;
  param_1[0x1fc] = 0x447a0000;
  param_1[0x20c] = 0x447a0000;
  *(undefined1 *)(param_1 + 0x20d) = 0;
  param_1[0x21c] = 0x447a0000;
  *(undefined1 *)(param_1 + 0x21d) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_005d59f0(&LAB_00404050);
  param_1[0x22c] = uVar2;
  *(undefined1 *)(param_1 + 0x1f5) = 0;
  param_1[0x1ee] = DAT_008a2fb4;
  param_1[0x1ef] = DAT_008a2fb8;
  param_1[0x1f0] = DAT_008a2fbc;
  param_1[0x1f1] = DAT_008a2fb4;
  param_1[0x1f2] = DAT_008a2fb8;
  param_1[499] = DAT_008a2fbc;
  param_1[0x1eb] = DAT_008a2fb4;
  param_1[0x1ec] = DAT_008a2fb8;
  param_1[0x1ed] = DAT_008a2fbc;
  ExceptionList = local_c;
  return param_1;
}

