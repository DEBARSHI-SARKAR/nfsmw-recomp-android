/* speed.exe 006b9920 FUN_006b9920; analysis pseudocode, not buildable source.
 * calls 006a5360 FUN_006a5360
 * calls 005d59f0 FUN_005d59f0
 * calls 00677480 FUN_00677480
 * calls 005d7930 FUN_005d7930
 * calls 006fbea0 FUN_006fbea0
 * calls 006a5700 FUN_006a5700
 * calls 006a57e0 FUN_006a57e0
 */

undefined4 * __thiscall FUN_006b9920(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087df12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00677480(param_2,2);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar5;
  FUN_005d7930(&LAB_00405000,puVar1);
  *puVar1 = &PTR_FUN_008ab0e0;
  param_1[0x15] = &PTR___purecall_00890d38;
  local_4._0_1_ = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar2 = param_1 + 0x16;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x17] = iVar5;
  FUN_005d7930(&LAB_00620fd0,puVar2);
  *puVar2 = &PTR_FUN_008ab104;
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 4;
  }
  puVar3 = param_1 + 0x18;
  *puVar3 = &PTR_FUN_00890970;
  param_1[0x19] = puVar6;
  FUN_005d7930(&LAB_00668440,puVar3);
  *puVar3 = &PTR_FUN_008a9410;
  *puVar2 = &PTR_LAB_008ad290;
  *puVar3 = &PTR_LAB_008ad288;
  *puVar1 = &PTR_LAB_008ad2a0;
  local_4._0_1_ = 3;
  *param_1 = &PTR_FUN_008ad2cc;
  param_1[2] = &PTR_LAB_008ad2c4;
  param_1[0x15] = &PTR_FUN_008ad29c;
  param_1[0x1a] = 0;
  uVar4 = FUN_006a5700(param_1[0xd],0);
  FUN_006a5360(uVar4);
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = DAT_008a2fb4;
  param_1[0x28] = DAT_008a2fb8;
  param_1[0x29] = DAT_008a2fbc;
  local_4._0_1_ = 4;
  uVar4 = FUN_006a57e0();
  param_1[0x2b] = uVar4;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  uVar4 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x23] = uVar4;
  uVar4 = FUN_005d59f0(&LAB_004039f0);
  param_1[0x24] = uVar4;
  uVar4 = FUN_005d59f0(&LAB_00404ff0);
  param_1[0x25] = uVar4;
  FUN_006fbea0(param_1 + 0x15,param_1[0xd],"DamageVehicle");
  ExceptionList = local_c;
  return param_1;
}

