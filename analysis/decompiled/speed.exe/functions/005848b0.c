/* speed.exe 005848b0 FUN_005848b0; analysis pseudocode, not buildable source.
 * calls 0045ecf0 FUN_0045ecf0
 * calls 005b2e10 FUN_005b2e10
 * calls 00466af0 FUN_00466af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_005848b0(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,float param_6)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  float local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((float)param_2[4] == _DAT_00890968) && ((float)param_2[5] == _DAT_00890968)) &&
     ((float)param_2[6] == _DAT_00890968)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((param_2[0xe] != 0x3f800000) || (param_2[0xf] != 0x3f800000)) ||
     ((param_2[0x10] != 0x3f800000 || (bVar3 = false, param_6 != _DAT_0089096c)))) {
    bVar3 = true;
  }
  if ((((float)param_2[10] != _DAT_00890968) || ((float)param_2[0xb] != _DAT_00890968)) ||
     (((float)param_2[0xc] != _DAT_00890968 || (bVar4 = false, param_2[0xd] != 0x3f800000)))) {
    bVar4 = true;
  }
  local_60 = param_2[7];
  local_5c = param_2[8];
  local_58 = param_2[9];
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_54 = 0x3f800000;
  if (bVar2) {
    local_e0 = param_2[4];
    local_dc = param_2[5];
    local_a0 = -(float)param_2[4];
    local_d8 = param_2[6];
    local_110 = 0x3f800000;
    local_9c = -(float)param_2[5];
    local_10c = 0;
    local_108 = 0;
    local_104 = 0;
    local_98 = -(float)param_2[6];
    local_100 = 0;
    local_fc = 0x3f800000;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0x3f800000;
    local_e4 = 0;
    local_d4 = 0x3f800000;
    local_d0 = 0x3f800000;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0x3f800000;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0x3f800000;
    local_a4 = 0;
    local_94 = 0x3f800000;
  }
  if (bVar3) {
    local_50[1] = 0.0;
    local_50[0] = param_6 * (float)param_2[0xe];
    local_50[2] = 0.0;
    local_50[3] = 0.0;
    local_50[4] = 0.0;
    local_38 = 0;
    local_34 = 0;
    local_50[5] = param_6 * (float)param_2[0xf];
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_28 = param_6 * (float)param_2[0x10];
    local_18 = 0;
    local_14 = 0x3f800000;
  }
  if (bVar4) {
    local_150 = 0x3f800000;
    local_14c = 0;
    local_148 = 0;
    local_144 = 0;
    local_140 = 0;
    local_13c = 0x3f800000;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0x3f800000;
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_114 = 0x3f800000;
    FUN_00466af0(&local_150);
  }
  *param_3 = 0x3f800000;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0x3f800000;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0x3f800000;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0x3f800000;
  FUN_0045ecf0(param_3,param_3,&local_90);
  if (bVar2) {
    FUN_0045ecf0(param_3,param_3,&local_110);
  }
  if (bVar4) {
    FUN_0045ecf0(param_3,param_3,&local_150);
  }
  if (bVar2) {
    FUN_0045ecf0(param_3,param_3,&local_d0);
  }
  if (bVar3) {
    FUN_0045ecf0(param_3,param_3,local_50);
  }
  if (param_5 != 0) {
    iVar1 = param_5 * 0xb0 + 0x10 + param_1;
    param_4[2] = (int)((uint)*(byte *)(param_5 * 0xb0 + 0xb9 + param_1) * param_2[2] + 0x80) >> 8;
    param_4[1] = (int)((uint)*(byte *)(iVar1 + 0xaa) * param_2[1] + 0x80) >> 8;
    *param_4 = (int)((uint)*(byte *)(iVar1 + 0xab) * *param_2 + 0x80) >> 8;
    param_4[3] = (int)((uint)*(byte *)(iVar1 + 0xa8) * param_2[3] + 0x80) >> 8;
    FUN_0045ecf0(param_3,iVar1,param_3);
    if (*(int *)(iVar1 + 0xa4) != 0) {
      return iVar1 + 0x40;
    }
    return 0;
  }
  FUN_005b2e10(param_2);
  return 0;
}

