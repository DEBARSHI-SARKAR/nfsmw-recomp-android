/* speed.exe 0069bd80 FUN_0069bd80; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0069b900 FUN_0069b900
 */

undefined4 * __thiscall FUN_0069bd80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069b900(param_2);
  *param_1 = &PTR_FUN_008ab458;
  param_1[2] = &PTR_LAB_008ab44c;
  param_1[0x12] = &PTR_FUN_008ab448;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00404040);
  param_1[0x3b] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

