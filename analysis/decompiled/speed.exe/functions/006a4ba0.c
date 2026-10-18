/* speed.exe 006a4ba0 FUN_006a4ba0; analysis pseudocode, not buildable source.
 * calls 006717f0 FUN_006717f0
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 * __thiscall FUN_006a4ba0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ca58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006717f0(param_2,0);
  *param_1 = &PTR_FUN_008aba94;
  param_1[2] = &PTR_LAB_008aba8c;
  local_4 = 0;
  piVar1 = (int *)FUN_005d59f0(&LAB_00668400);
  param_1[0x12] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(0x20b,0x8001);
  }
  ExceptionList = local_c;
  return param_1;
}

