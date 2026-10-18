/* speed.exe 006bc1c0 FUN_006bc1c0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006bbf30 FUN_006bbf30
 */

undefined4 * __thiscall FUN_006bc1c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e1c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006bbf30(param_2,param_3);
  *param_1 = &PTR_FUN_008adcec;
  param_1[2] = &PTR_LAB_008adce4;
  param_1[0x13] = &PTR_LAB_008adcc8;
  param_1[0x15] = &PTR_LAB_008adc48;
  param_1[0x18] = &PTR_LAB_008adc2c;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00604250);
  param_1[0x31] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

