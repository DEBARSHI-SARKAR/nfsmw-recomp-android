/* speed.exe 00470bf0 FUN_00470bf0; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 0045f7c0 FUN_0045f7c0
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 * calls 0045f640 FUN_0045f640
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FUN_00470bf0(int param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float local_16c;
  float local_168;
  float local_150;
  float local_14c;
  float local_148;
  float local_138;
  int local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined1 local_110 [8];
  float local_108;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float local_50;
  
  local_130 = 0.0;
  local_12c = 0.0;
  local_128 = 0.0;
  fVar1 = (float)*(ushort *)(*(int *)(param_1 + 0x1c) + 0xc4) * _DAT_00894c14;
  local_168 = _DAT_0089096c;
  if ((_DAT_0089096c < fVar1) && (local_168 = fVar1, _DAT_00890d44 < fVar1)) {
    local_168 = 1.5;
  }
  local_120 = *param_3 - *param_4;
  local_11c = param_3[1] - param_4[1];
  local_118 = param_3[2] - param_4[2];
  fVar1 = SQRT(local_120 * local_120 + local_11c * local_11c + local_118 * local_118);
  if (_DAT_00890d60 <= fVar1) {
    local_148 = _DAT_0089096c / fVar1;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0x3f800000;
    local_150 = local_120 * local_148;
    local_14c = local_11c * local_148;
    local_148 = local_118 * local_148;
    local_134 = param_1;
    local_108 = local_148;
    FUN_0045f7c0(local_110,&local_d0,&local_150);
    fVar1 = local_168 * fVar1 * _DAT_00894c10;
    FUN_0045f640(local_90,&local_120,local_110,fVar1);
    FUN_0045f640(local_80,&local_120,local_110,-fVar1);
    local_16c = 0.0;
    puVar5 = local_90;
    local_168 = 2.8026e-45;
    do {
      FUN_0045f490(&local_e0,puVar5);
      local_c0 = local_e0;
      local_bc = local_dc;
      local_b8 = local_d8;
      FUN_0045f640(&local_100,param_4,&local_c0,0xbf666666);
      local_ac = param_3[2];
      local_b0 = -param_3[1];
      local_a8 = *param_3;
      local_a0 = -local_fc;
      local_9c = local_f8;
      local_98 = local_100;
      FUN_004048c0();
      iVar4 = FUN_007854b0(&local_b0,&local_68,2);
      if (iVar4 != 0) {
        local_ec = -local_68;
        local_f0 = local_60;
        fVar3 = local_54 * local_148;
        local_e8 = local_64;
        fVar1 = -local_58 * local_14c;
        fVar2 = local_50 * local_150;
        fVar6 = (float10)FUN_0045f340(param_3,&local_100);
        local_138 = (float)fVar6;
        fVar6 = (float10)FUN_0045f340(param_3,&local_f0);
        fVar6 = (((float10)_DAT_0089096c - ABS((float10)(fVar2 + fVar1 + fVar3))) *
                 (float10)_DAT_008945fc + (float10)_DAT_0089096c) * ((float10)local_138 - fVar6);
        if ((float10)local_16c < fVar6) {
          local_16c = (float)fVar6;
        }
      }
      puVar5 = puVar5 + 0x10;
      local_168 = (float)((int)local_168 + -1);
    } while (local_168 != 0.0);
    fVar1 = (local_16c + *(float *)(local_134 + 100)) * _DAT_00894594;
    *(float *)(local_134 + 100) = (local_16c - fVar1) + *(float *)(local_134 + 100);
    if (_DAT_00890968 < fVar1) {
      local_130 = local_150 * fVar1;
      local_12c = local_14c * fVar1;
      local_128 = fVar1 * local_148;
    }
    *param_5 = local_130;
    param_5[2] = local_128;
    param_5[1] = local_12c;
    param_5[3] = 0.0;
    return iVar4 != 0;
  }
  return false;
}

