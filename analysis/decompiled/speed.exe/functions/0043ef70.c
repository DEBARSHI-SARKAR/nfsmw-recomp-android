/* speed.exe 0043ef70 FUN_0043ef70; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 0043d330 FUN_0043d330
 */

undefined4 * __thiscall FUN_0043ef70(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043d330(param_2);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 499;
  *puVar1 = &PTR_FUN_00890970;
  param_1[500] = iVar2;
  FUN_005d7930(&LAB_00403770,puVar1);
  *puVar1 = &PTR_FUN_00890a68;
  *puVar1 = &PTR_LAB_0089293c;
  *(undefined1 *)(param_1 + 0x1f5) = 0;
  param_1[0x1f9] = 0;
  *(undefined1 *)(param_1 + 0x1fa) = 0;
  *param_1 = &PTR_FUN_00892ad0;
  param_1[2] = &PTR_LAB_00892ac8;
  param_1[0x13] = &PTR_LAB_008929f0;
  param_1[0x15] = &PTR_LAB_008929e8;
  param_1[0x1d6] = &PTR_LAB_00892988;
  param_1[0x1d8] = &PTR_LAB_0089297c;
  param_1[0x1db] = &PTR_LAB_00892974;
  param_1[0x1f1] = &PTR_LAB_00892964;
  ExceptionList = local_c;
  return param_1;
}

