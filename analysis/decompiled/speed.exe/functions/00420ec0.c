/* speed.exe 00420ec0 FUN_00420ec0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006fbea0 FUN_006fbea0
 * calls 00418d90 FUN_00418d90
 */

undefined4 * __thiscall FUN_00420ec0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867df8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00418d90(param_2,param_3);
  param_1[0x12] = &PTR___purecall_00890d38;
  *param_1 = &PTR_FUN_00891358;
  param_1[2] = &PTR_LAB_00891350;
  param_1[0x12] = &PTR_LAB_0089134c;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = DAT_008a2fb4;
  param_1[0x1e] = DAT_008a2fb8;
  param_1[0x1f] = DAT_008a2fbc;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_00403700);
  param_1[0x13] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004038e0);
  param_1[0x17] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_004040e0);
  param_1[0x14] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404060);
  param_1[0x16] = uVar1;
  uVar1 = (**(code **)(*(int *)*param_2 + 0x54))();
  param_1[0x15] = uVar1;
  FUN_006fbea0(param_1 + 0x12,uVar1,"AIActionHeliPursuit");
  ExceptionList = pvStack_c;
  return param_1;
}

