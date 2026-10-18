/* speed.exe 00620df0 FUN_00620df0; analysis pseudocode, not buildable source.
 * calls 005e4850 FUN_005e4850
 * calls 00405b70 FUN_00405b70
 * calls 005cc240 FUN_005cc240
 * calls 00654af0 FUN_00654af0
 */

void __fastcall FUN_00620df0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876be8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a68cc;
  local_60 = param_1[4];
  local_38 = param_1[5];
  local_34 = param_1[6];
  local_44 = (undefined1 *)&local_60;
  local_4 = 0;
  local_40 = param_1;
  local_3c = local_60;
  local_60 = FUN_005cc240("AICopManager");
  uVar3 = local_34;
  uVar2 = local_38;
  uVar1 = local_3c;
  local_44 = (undefined1 *)param_1[2];
  local_48 = param_1[3];
  FUN_00405b70(&local_4c);
  local_2c = 0;
  local_24 = 0;
  local_30 = local_4c;
  local_28 = 0x24;
  local_20 = uVar1;
  local_1c = uVar2;
  local_18 = uVar3;
  local_14 = local_48;
  local_10 = local_44;
  FUN_00654af0();
  local_60 = 0x41a00000;
  FUN_005e4850(&local_3c);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

