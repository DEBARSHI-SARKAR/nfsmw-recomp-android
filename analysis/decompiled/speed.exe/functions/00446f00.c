/* speed.exe 00446f00 FUN_00446f00; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 0044a3c0 FUN_0044a3c0
 * calls 006bddf0 FUN_006bddf0
 * calls 006bdd20 FUN_006bdd20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00446f00(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined3 extraout_var;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
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
  
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_2 = 0x3f800000;
  param_2[5] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[0xf] = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if (param_3 == '\0') {
    local_6c = 0.0;
    local_80 = 0;
    local_70 = _DAT_00890968;
    local_84 = _DAT_00890968;
  }
  else {
    local_6c = DAT_0090daa4;
    local_80 = DAT_0090da08;
    local_70 = _DAT_0090daa0;
    local_84 = _DAT_0090daa8;
  }
  local_60 = -local_6c;
  local_7c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  local_68 = local_84;
  local_5c = local_84;
  local_58 = local_70;
  cVar1 = FUN_0044a3c0(&local_60,&local_84,&local_7c);
  if (cVar1 != '\0') {
    local_68 = local_84;
  }
  uVar2 = FUN_006bddf0(param_2,&local_70);
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  if (param_3 != '\0') {
    FUN_006bdd20(&local_50,&local_50,local_80 + -0x4000);
    FUN_00444fe0(param_1,&local_50);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,1);
}

