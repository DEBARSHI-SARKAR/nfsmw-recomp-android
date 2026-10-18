/* speed.exe 00677480 FUN_00677480; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006717f0 FUN_006717f0
 */

undefined4 * __thiscall FUN_00677480(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087aa98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006717f0(param_2,param_3);
  param_1[0x12] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a9a2c;
  param_1[2] = &PTR_LAB_008a9a24;
  uVar1 = FUN_005d59f0(&LAB_004040e0);
  param_1[0x12] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

