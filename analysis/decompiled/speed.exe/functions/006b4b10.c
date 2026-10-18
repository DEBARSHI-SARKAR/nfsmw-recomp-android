/* speed.exe 006b4b10 FUN_006b4b10; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006b45c0 FUN_006b45c0
 */

undefined4 * __thiscall FUN_006b4b10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b45c0(param_2,param_3);
  *param_1 = &PTR_FUN_008ac0fc;
  param_1[2] = &PTR_LAB_008ac0f4;
  param_1[0x13] = &PTR_LAB_008ac0ec;
  param_1[0x15] = &PTR_LAB_008ac0e4;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00604250);
  param_1[0x26] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_0068cc70);
  param_1[0x27] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

