/* speed.exe 006b49a0 FUN_006b49a0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006b45c0 FUN_006b45c0
 */

undefined4 * __thiscall FUN_006b49a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b45c0(param_2,2);
  *param_1 = &PTR_FUN_008ac0b4;
  param_1[2] = &PTR_LAB_008ac0ac;
  param_1[0x13] = &PTR_LAB_008ac0a4;
  param_1[0x15] = &PTR_LAB_008ac09c;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_004038e0);
  param_1[0x26] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00620fd0);
  param_1[0x27] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

