/* speed.exe 0069cad0 FUN_0069cad0; analysis pseudocode, not buildable source.
 * calls 006717f0 FUN_006717f0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0069cad0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006717f0(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x12;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x13] = iVar2;
  FUN_005d7930(&LAB_00403f90,puVar1);
  *puVar1 = &PTR_FUN_008aae98;
  *puVar1 = &PTR_LAB_008ab5c8;
  *param_1 = &PTR_FUN_008ab598;
  param_1[2] = &PTR_LAB_008ab590;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  ExceptionList = local_c;
  return param_1;
}

