/* speed.exe 0041fce0 FUN_0041fce0; analysis pseudocode, not buildable source.
 * calls 00418d90 FUN_00418d90
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 * __thiscall FUN_0041fce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00418d90(param_2,param_3);
  *param_1 = &PTR_FUN_008912c0;
  param_1[2] = &PTR_LAB_008912b8;
  param_1[0x15] = 0;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x16] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

