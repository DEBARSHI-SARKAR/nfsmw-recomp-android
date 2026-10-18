/* speed.exe 00488830 FUN_00488830; analysis pseudocode, not buildable source.
 * calls 00486da0 FUN_00486da0
 * calls 00486e30 FUN_00486e30
 * calls 004886f0 FUN_004886f0
 * calls 00486bd0 FUN_00486bd0
 * calls 00488680 FUN_00488680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00488830(int param_1,int param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
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
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float *local_10c;
  int local_108;
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
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_74;
  float local_68;
  float local_5c;
  float local_50;
  float local_4c;
  undefined1 local_40 [64];
  
  local_19c = *(float *)(param_2 + 0xc);
  local_198 = *(float *)(param_2 + 0x10);
  local_194 = *(float *)(param_2 + 0x14);
  local_134 = 0.0;
  local_130 = 0.0;
  local_12c = 0.0;
  local_158 = 0.0;
  local_154 = 0.0;
  local_150 = 0.0;
  local_140 = 0.0;
  local_13c = 0.0;
  local_138 = 0.0;
  FUN_00488680();
  local_128 = *(float *)(param_1 + 0xd0);
  local_190 = 0.0;
  FUN_00486e30(param_2,&local_134);
  local_18c = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0xbc);
  local_188 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0xc0);
  local_184 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0xc4);
  FUN_00486bd0(param_1,local_40);
  pfVar1 = (float *)(param_1 + 0xa4);
  local_180 = *pfVar1;
  local_17c = *(float *)(param_1 + 0xa8);
  local_178 = *(float *)(param_1 + 0xac);
  local_10c = (float *)(param_1 + 0x98);
  local_164 = *local_10c;
  local_160 = *(float *)(param_1 + 0x9c);
  local_15c = *(float *)(param_1 + 0xa0);
  local_108 = 0;
  uVar4 = param_3;
  if (0 < (int)param_3) {
    do {
      iVar3 = local_108;
      local_124 = 0.0;
      local_120 = 0.0;
      local_11c = 0.0;
      local_e0 = 0.0;
      local_dc = 0.0;
      local_d4 = local_12c * local_17c - local_130 * local_178;
      local_d8 = 0.0;
      local_118 = 0.0;
      local_114 = 0.0;
      local_110 = 0.0;
      local_f8 = 0.0;
      local_f4 = 0.0;
      local_d0 = local_178 * local_134 - local_12c * local_180;
      local_f0 = 0.0;
      local_cc = local_130 * local_180 - local_17c * local_134;
      local_14c = local_d4 + local_164;
      local_148 = local_d0 + local_160;
      local_144 = local_cc + local_15c;
      local_94 = local_14c * local_128;
      local_90 = local_148 * local_128;
      local_8c = local_144 * local_128;
      local_174 = local_94 * local_19c + local_198 * local_90 + local_194 * local_8c;
      uVar4 = CONCAT22((short)((uint)local_cc >> 0x10),
                       (ushort)(local_174 < _DAT_00890968) << 8 |
                       (ushort)(NAN(local_174) || NAN(_DAT_00890968)) << 10 |
                       (ushort)(local_174 == _DAT_00890968) << 0xe);
      if (local_174 >= _DAT_00890968) break;
      local_fc = -local_174;
      local_104 = local_19c * local_fc;
      local_170 = 0.0;
      local_16c = 0.0;
      local_168 = 0.0;
      local_100 = local_198 * local_fc;
      local_fc = local_194 * local_fc;
      local_ec = local_104;
      local_e8 = local_100;
      local_e4 = local_fc;
      local_bc = local_d4;
      local_b8 = local_d0;
      local_b4 = local_cc;
      local_b0 = FUN_004886f0(&local_94,local_174,&local_19c,&local_170);
      if (iVar3 == 0) {
        local_c0 = local_19c * local_14c + local_198 * local_148 + local_194 * local_144;
        local_c8 = local_19c * local_c0;
        local_c4 = local_198 * local_c0;
        local_c0 = local_194 * local_c0;
        *(float *)(param_1 + 0xd8) = local_c8;
        *(float *)(param_1 + 0xdc) = local_c4;
        *(float *)(param_1 + 0xe0) = local_c0;
        local_18c = local_14c - *(float *)(param_1 + 0xd8);
        local_188 = local_148 - *(float *)(param_1 + 0xdc);
        local_184 = local_144 - *(float *)(param_1 + 0xe0);
        *(float *)(param_1 + 0xe4) = local_18c;
        *(float *)(param_1 + 0xe8) = local_188;
        *(float *)(param_1 + 0xec) = local_184;
        *(float *)(param_1 + 0xfc) = local_170;
        *(undefined4 *)(param_1 + 0x108) = local_b0;
        *(float *)(param_1 + 0x100) = local_16c;
        *(float *)(param_1 + 0x104) = local_168;
        local_5c = local_c0;
        local_50 = local_184;
      }
      else {
        fVar2 = (float)local_108 / (float)(int)param_3;
        local_ec = local_104 * fVar2;
        local_e8 = local_100 * fVar2;
        local_e4 = local_fc * fVar2;
        local_170 = local_170 * fVar2;
        local_16c = local_16c * fVar2;
        local_168 = local_168 * fVar2;
        local_190 = local_190 - fVar2 * local_174;
        FUN_00486da0(&local_ec,&local_134,local_40,&local_124,&local_118);
        FUN_00486da0(&local_170,&local_134,local_40,&local_e0,&local_f8);
        local_68 = local_f0 + local_110;
        local_74 = local_d8 + local_11c;
        local_164 = local_e0 + local_124 + local_164;
        local_160 = local_160 + local_dc + local_120;
        local_15c = local_74 + local_15c;
        local_180 = local_f8 + local_118 + local_180;
        local_17c = local_f4 + local_114 + local_17c;
        local_178 = local_68 + local_178;
        fVar2 = *(float *)(param_1 + 0x10c);
        local_a8 = local_120 * fVar2;
        local_a4 = local_11c * fVar2;
        local_4c = local_124 * fVar2 + local_e0 + local_124;
        local_158 = local_158 + local_4c;
        local_154 = local_154 + local_a8 + local_dc + local_120;
        local_150 = local_150 + local_a4 + local_74;
        fVar2 = *(float *)(param_1 + 0x10c);
        local_9c = local_114 * fVar2;
        local_98 = local_110 * fVar2;
        local_88 = local_118 * fVar2 + local_f8 + local_118;
        local_140 = local_140 + local_88;
        local_13c = local_13c + local_9c + local_f4 + local_114;
        local_138 = local_138 + local_98 + local_68;
      }
      local_108 = iVar3 + 1;
      uVar4 = param_3;
    } while (local_108 < (int)param_3);
    if (local_108 != 0) {
      *(float *)(param_1 + 0xf0) = local_19c * local_190;
      *(float *)(param_1 + 0xf4) = local_198 * local_190;
      *(float *)(param_1 + 0xf8) = local_194 * local_190;
      *local_10c = local_158 + *local_10c;
      local_10c[1] = local_154 + local_10c[1];
      local_10c[2] = local_150 + local_10c[2];
      *pfVar1 = local_140 + *pfVar1;
      *(float *)(param_1 + 0xa8) = local_13c + *(float *)(param_1 + 0xa8);
      *(float *)(param_1 + 0xac) = local_138 + *(float *)(param_1 + 0xac);
      return CONCAT31((int3)((uint)(local_194 * local_190) >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}

