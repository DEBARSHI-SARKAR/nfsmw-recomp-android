/* speed.exe 006ab2b0 FUN_006ab2b0; analysis pseudocode, not buildable source.
 * calls 0068f7b0 FUN_0068f7b0
 * calls 0040fe20 FUN_0040fe20
 * calls 0068fd00 FUN_0068fd00
 * calls 00671530 FUN_00671530
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ab2b0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  char local_16d;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  int *local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  uint local_124;
  float local_120;
  float local_11c;
  float local_118;
  int local_114;
  float *local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [4];
  float local_84;
  float local_80;
  float local_7c [4];
  float local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [3];
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_f4 = param_2[0x30];
  local_18c = 0.0;
  local_188 = 0.0;
  local_184 = 0.0;
  local_120 = 0.0;
  local_11c = 0.0;
  local_118 = 0.0;
  FUN_0068fd00(param_2,&local_18c,&local_120);
  *(float *)(*(int *)(param_1 + 0xfc) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0x100) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0x104) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0x104) + 0xcc) = param_2[0x1f];
  *(float *)(*(int *)(param_1 + 0x108) + 200) = param_2[0x17];
  local_150 = (int *)(param_1 + 0xfc);
  *(float *)(*(int *)(param_1 + 0x108) + 0xcc) = param_2[0x1f];
  local_dc = param_2[0x2b];
  local_180 = param_2[0x1c];
  local_17c = param_2[0x1d];
  local_178 = param_2[0x1e];
  local_114 = 0;
  local_16c = 0.0;
  local_4c = local_17c * param_2[4] + local_180 * *param_2 + local_178 * param_2[8];
  local_48 = local_178 * param_2[9] + local_17c * param_2[5] + local_180 * param_2[1];
  iVar5 = *(int *)(param_1 + 0xc0);
  local_44 = local_180 * param_2[2] + local_17c * param_2[6] + local_178 * param_2[10];
  local_5c = *(undefined4 *)(iVar5 + 8);
  local_6c[2] = *(float *)(iVar5 + 0x30) * _DAT_008aae8c;
  local_54 = *(float *)(iVar5 + 0x38) * _DAT_008aae8c;
  local_6c[0] = *(float *)(iVar5 + 0x10) * _DAT_008a9388;
  local_94[0] = *(float *)(iVar5 + 0x18) * _DAT_008a9388;
  local_6c[3] = *(float *)(iVar5 + 0x34) * _DAT_008aae8c;
  local_50 = *(float *)(iVar5 + 0x3c) * _DAT_008aae8c;
  local_6c[1] = *(float *)(iVar5 + 0x14) * _DAT_008a9388;
  local_58 = *(undefined4 *)(iVar5 + 0xc);
  local_94[1] = *(float *)(iVar5 + 0x1c) * _DAT_008a9388;
  local_7c[0] = (*(float *)(*local_150 + 0x78) - *(float *)(*(int *)(param_1 + 0x100) + 0x78)) *
                *(float *)(iVar5 + 0x48) * _DAT_008aae8c;
  local_7c[1] = -local_7c[0];
  local_7c[2] = (*(float *)(*(int *)(param_1 + 0x104) + 0x78) -
                *(float *)(*(int *)(param_1 + 0x108) + 0x78)) *
                *(float *)(iVar5 + 0x4c) * _DAT_008aae8c;
  local_40 = local_120;
  local_7c[3] = -local_7c[2];
  local_3c = local_11c;
  local_38[0] = local_118;
  local_38[1] = 1.0;
  local_38[2] = local_18c;
  local_2c = local_188;
  local_28 = local_184;
  local_20 = param_2[8];
  local_18 = param_2[10];
  local_24 = 0x3f800000;
  local_1c = param_2[9];
  local_160 = param_2[8];
  local_14 = 0x3f800000;
  local_15c = param_2[9];
  local_158 = param_2[10];
  local_154 = 0x3f800000;
  local_110 = local_38;
  local_4 = 0x3f800000;
  local_16d = '\0';
  local_124 = 0;
  local_10 = local_160;
  local_c = local_15c;
  local_8 = local_158;
  do {
    iVar5 = *local_150;
    uVar7 = local_124 >> 1;
    FUN_00671530(param_2 + 0x18,param_2 + 0x14,param_2,local_6c + 8,param_2[0x30],
                 *(undefined4 *)(iVar5 + 0xc4),1,param_2[0x36],param_2[0x21] + param_2[0x21]);
    local_148 = *(float *)(iVar5 + 0x40);
    local_14c = *(float *)(iVar5 + 0x3c);
    local_144 = *(float *)(iVar5 + 0x44);
    local_140 = local_110[-2];
    local_138 = *local_110;
    local_e8 = local_138 * local_148;
    local_13c = local_110[-1];
    local_ec = local_13c * local_144;
    local_130 = local_e8 - local_ec;
    local_e0 = local_144 * local_140;
    local_d8 = local_138 * local_14c;
    local_12c = local_e0 - local_d8;
    local_168 = local_13c * local_14c;
    local_f0 = local_148 * local_140;
    local_128 = local_168 - local_f0;
    local_b8 = local_130;
    local_b4 = local_12c;
    local_b0 = local_128;
    FUN_0040fe20(&local_130,&local_130);
    fVar4 = _DAT_00890968;
    local_94[2] = *(float *)(iVar5 + 0x48);
    fVar2 = local_144 * param_2[6] + local_14c * param_2[4] + local_148 * param_2[5];
    fVar3 = _DAT_0089096c;
    if ((fVar2 < _DAT_0089096c) && (fVar3 = fVar2, fVar2 < _DAT_00890968)) {
      fVar3 = _DAT_00890968;
    }
    local_164 = fVar3 * local_94[uVar7] + *(float *)(iVar5 + 0x48);
    local_174 = local_6c[uVar7];
    fVar2 = local_16c;
    if ((*(float *)(iVar5 + 0x78) == _DAT_00890968) &&
       (fVar2 = local_164 - local_174, local_164 - local_174 < local_16c)) {
      fVar2 = local_16c;
    }
    local_16c = fVar2;
    if (local_164 <= _DAT_00890968) {
      local_164 = _DAT_00890968;
    }
    fVar2 = local_16c;
    if ((local_174 < local_164) &&
       (fVar2 = local_164 - local_174, local_164 = local_174, fVar2 < local_16c)) {
      fVar2 = local_16c;
    }
    local_16c = fVar2;
    if ((local_164 <= _DAT_00890968) || (fVar3 <= _DAT_008f8760)) {
      *(undefined4 *)(iVar5 + 0x5c) = DAT_008a2fb4;
      *(undefined4 *)(iVar5 + 0x60) = DAT_008a2fb8;
      *(undefined4 *)(iVar5 + 100) = DAT_008a2fbc;
      *(undefined4 *)(iVar5 + 0xd4) = 0;
      *(undefined4 *)(iVar5 + 0xe4) = 0;
      *(undefined1 *)(iVar5 + 0x104) = 0;
      *(undefined4 *)(iVar5 + 0xfc) = 0;
      if ((fVar4 < *(float *)(iVar5 + 0xcc)) || (_DAT_00890968 < *(float *)(iVar5 + 200))) {
        *(undefined4 *)(iVar5 + 0xd0) = 0;
      }
      *(undefined4 *)(iVar5 + 0xd8) = 0;
      *(undefined4 *)(iVar5 + 0xdc) = 0;
    }
    else {
      local_114 = local_114 + 1;
      local_174 = _DAT_0089096c / local_f4;
      fVar2 = (local_164 - *(float *)(iVar5 + 0x78)) * local_174 * local_6c[uVar7 + 2];
      if (local_dc * *(float *)(*(int *)(param_1 + 0xc0) + 0x58) * _DAT_00891608 < fVar2) {
        fVar2 = _DAT_00890968;
      }
      local_134 = fVar2 + local_7c[local_124] +
                  (local_164 * local_6c[uVar7 + 4] + _DAT_0089096c) * local_6c[uVar7 + 6] *
                  local_164;
      if (local_134 <= _DAT_00890968) {
        local_134 = 0.0;
      }
      local_158 = param_2[6];
      local_100 = local_134 * param_2[4];
      local_fc = param_2[5] * local_134;
      local_f8 = local_158 * local_134;
      local_ac = local_ec - local_e8;
      local_a8 = local_d8 - local_e0;
      local_a4 = local_f0 - local_168;
      local_180 = local_a8 * local_138 - local_a4 * local_13c;
      local_17c = local_a4 * local_140 - local_138 * local_ac;
      local_178 = local_13c * local_ac - local_a8 * local_140;
      local_e4 = (local_178 * local_144 + local_180 * local_14c + local_17c * local_148) *
                 _DAT_00890e98 - _DAT_008aac70;
      if (local_e4 <= _DAT_00894b58) {
        local_e4 = 0.3;
      }
      local_94[3] = local_180;
      local_84 = local_17c;
      local_80 = local_178;
      FUN_005c5e80(*(float *)(iVar5 + 0x90) * *(float *)(iVar5 + 0x90) +
                   *(float *)(iVar5 + 0x94) * *(float *)(iVar5 + 0x94) +
                   *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x8c));
      local_168 = local_128 * *(float *)(iVar5 + 0x94) +
                  local_12c * *(float *)(iVar5 + 0x90) + local_130 * *(float *)(iVar5 + 0x8c);
      FUN_0068f7b0(local_168,
                   local_138 * *(float *)(iVar5 + 0x94) +
                   local_13c * *(float *)(iVar5 + 0x90) + local_140 * *(float *)(iVar5 + 0x8c),
                   local_134 * local_e4,param_2[0x30]);
      local_c8 = *(float *)(iVar5 + 0xd8);
      local_104 = local_dc * _DAT_008910f0 * local_174 * local_168;
      if (local_104 < _DAT_00890968) {
        local_104 = -local_104;
      }
      local_168 = -local_104;
      if (local_c8 < local_104) {
        local_104 = local_c8;
      }
      if (local_104 < local_168) {
        local_104 = local_168;
      }
      local_10c = local_130 * local_104;
      local_108 = local_12c * local_104;
      local_104 = local_128 * local_104;
      local_18c = local_12c * local_144 - local_128 * local_148;
      local_188 = local_128 * local_14c - local_144 * local_130;
      local_184 = local_148 * local_130 - local_12c * local_14c;
      local_d4 = local_18c;
      local_d0 = local_188;
      local_cc = local_184;
      local_c0 = local_108;
      local_bc = local_104;
      local_a0 = local_10c;
      local_9c = local_108;
      local_98 = local_104;
      FUN_0040fe20(&local_18c,&local_18c);
      fVar2 = *(float *)(iVar5 + 0xdc);
      local_188 = local_188 * fVar2;
      local_184 = local_184 * fVar2;
      local_120 = local_18c * fVar2 + local_10c + local_100;
      *(float *)(iVar5 + 0x5c) = local_120;
      local_11c = local_108 + local_188 + local_fc;
      local_118 = local_104 + local_184 + local_f8;
      *(float *)(iVar5 + 0x60) = local_11c;
      *(float *)(iVar5 + 100) = local_118;
      local_16d = '\x01';
    }
    if (local_164 == _DAT_00890968) {
      *(float *)(iVar5 + 0x68) = local_f4 + *(float *)(iVar5 + 0x68);
    }
    else {
      *(undefined4 *)(iVar5 + 0x68) = 0;
    }
    fVar2 = _DAT_00890968;
    if (_DAT_00890968 < local_164) {
      fVar2 = local_164;
    }
    *(float *)(iVar5 + 0x78) = fVar2;
    local_124 = local_124 + 1;
    local_110 = local_110 + 4;
    local_150 = local_150 + 1;
  } while (local_124 < 4);
  if (local_16d != '\0') {
    local_188 = param_2[0x1d];
    local_184 = param_2[0x1e];
    local_18c = param_2[0x1c];
    uVar7 = 0;
    local_100 = local_18c * *param_2 + local_184 * param_2[8] + local_188 * param_2[4] +
                param_2[0xc];
    local_fc = local_18c * param_2[1] + local_184 * param_2[9] + local_188 * param_2[5] +
               param_2[0xd];
    local_f8 = local_18c * param_2[2] + local_188 * param_2[6] + local_184 * param_2[10] +
               param_2[0xe];
    iVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (iVar5 != 0) {
      local_150 = (int *)(param_1 + 0xfc);
      do {
        iVar5 = *local_150;
        local_18c = *(float *)(iVar5 + 0x6c);
        local_184 = *(float *)(iVar5 + 0x74);
        local_188 = (*(float *)(iVar5 + 0x70) + *(float *)(iVar5 + 0x78)) - local_94[uVar7 >> 1];
        pfVar1 = (float *)(iVar5 + 0x5c);
        local_180 = local_18c * *param_2 + local_184 * param_2[8] + local_188 * param_2[4] +
                    param_2[0xc];
        local_17c = local_18c * param_2[1] + local_184 * param_2[9] + local_188 * param_2[5] +
                    param_2[0xd];
        local_178 = local_18c * param_2[2] + local_188 * param_2[6] + local_184 * param_2[10] +
                    param_2[0xe];
        *(float *)(iVar5 + 0x4c) = local_180;
        *(float *)(iVar5 + 0x50) = local_17c;
        *(float *)(iVar5 + 0x54) = local_178;
        local_d0 = (local_17c - local_fc) * _DAT_008933d4;
        local_10c = local_d0 * *(float *)(iVar5 + 100) -
                    (local_178 - local_f8) * *(float *)(iVar5 + 0x60);
        local_108 = (local_178 - local_f8) * *pfVar1 -
                    (local_180 - local_100) * *(float *)(iVar5 + 100);
        local_104 = (local_180 - local_100) * *(float *)(iVar5 + 0x60) - local_d0 * *pfVar1;
        fStack_c4 = local_10c;
        local_c0 = local_108;
        local_bc = local_104;
        (**(code **)(**(int **)(param_1 + 0xe0) + 0x84))(pfVar1,&fStack_c4);
        local_158 = (float)((int)local_158 + 4);
        uVar7 = uVar7 + 1;
        uVar6 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      } while (uVar7 < uVar6);
    }
  }
  if (local_16c <= _DAT_00890968) {
    *(int *)(param_1 + 0xf4) = local_114;
    return;
  }
  uVar7 = 0;
  iVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (iVar5 != 0) {
    piVar8 = (int *)(param_1 + 0xfc);
    do {
      iVar5 = *piVar8;
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
      *(float *)(iVar5 + 0x50) = local_16c + *(float *)(iVar5 + 0x50);
      uVar6 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    } while (uVar7 < uVar6);
  }
  (**(code **)(**(int **)(param_1 + 0xe0) + 0x7c))(local_16c);
  *(float *)(param_1 + 0xf4) = local_118;
  return;
}

