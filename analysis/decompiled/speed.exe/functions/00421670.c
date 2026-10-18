/* speed.exe 00421670 FUN_00421670; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00418d90 FUN_00418d90
 */

undefined4 * __thiscall FUN_00421670(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867ed8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00418d90(param_2,param_3);
  *param_1 = &PTR_FUN_008913ec;
  param_1[2] = &PTR_LAB_008913e4;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x17] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00403700);
  param_1[0x12] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004038e0);
  param_1[0x15] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004040e0);
  param_1[0x14] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404010);
  param_1[0x16] = uVar1;
  uVar1 = (**(code **)(*(int *)*param_2 + 0x54))();
  param_1[0x13] = uVar1;
  DAT_0090d984 = DAT_0090d984 + 1;
  *(byte *)(param_1 + 0x18) = (byte)DAT_0090d984 & 1;
  ExceptionList = pvStack_c;
  return param_1;
}

