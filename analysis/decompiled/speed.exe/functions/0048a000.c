/* speed.exe 0048a000 FUN_0048a000; analysis pseudocode, not buildable source.
 * calls 00486da0 FUN_00486da0
 * calls 00486e30 FUN_00486e30
 * calls 005c5e80 FUN_005c5e80
 * calls 00486ec0 FUN_00486ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048a000(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float *pfVar1;
  char cVar2;
  float10 fVar3;
  char local_216;
  char local_215;
  int local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
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
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float *local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float *local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float *local_d8;
  float local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_b4;
  float local_a8;
  float local_9c;
  float local_90;
  float local_8c;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  cVar2 = *(char *)(param_1 + 200);
  local_194 = 0.0;
  local_190 = 0.0;
  local_18c = 0.0;
  local_1d0 = 0.0;
  local_1cc = 0.0;
  local_1c8 = 0.0;
  if ((cVar2 == '\0') || (local_216 = '\0', *(char *)(param_2 + 200) == '\0')) {
    local_216 = cVar2;
  }
  if ((cVar2 == '\0') || (*(char *)(param_2 + 200) == '\0')) {
    local_215 = *(char *)(param_2 + 200);
  }
  else {
    local_215 = '\0';
  }
  if ((local_216 != '\0') && (local_215 != '\0')) {
    local_216 = '\0';
    local_215 = '\0';
  }
  FUN_00486e30(param_3,&local_194);
  FUN_00486ec0(&local_194,local_80);
  FUN_00486e30(param_3,&local_1d0);
  FUN_00486ec0(&local_1d0,local_40);
  pfVar1 = (float *)(param_1 + 0xa4);
  local_200 = *pfVar1;
  local_1fc = *(float *)(param_1 + 0xa8);
  local_1f8 = *(float *)(param_1 + 0xac);
  local_f4 = (float *)(param_1 + 0x98);
  local_1dc = *local_f4;
  local_1d8 = *(float *)(param_1 + 0x9c);
  local_1d4 = *(float *)(param_1 + 0xa0);
  local_11c = (float *)(param_2 + 0xa4);
  local_1f4 = *local_11c;
  local_1f0 = *(float *)(param_2 + 0xa8);
  local_1ec = *(float *)(param_2 + 0xac);
  local_d8 = (float *)(param_2 + 0x98);
  local_1b8 = *local_d8;
  local_1b4 = *(float *)(param_2 + 0x9c);
  local_1b0 = *(float *)(param_2 + 0xa0);
  if (local_216 == '\0') {
    if (local_215 == '\0') {
      local_210 = (*(float *)(param_1 + 0xd0) * *(float *)(param_2 + 0xd0)) /
                  (*(float *)(param_1 + 0xd0) + *(float *)(param_2 + 0xd0));
    }
    else {
      local_210 = *(float *)(param_1 + 0xd0);
    }
  }
  else {
    local_210 = *(float *)(param_2 + 0xd0);
  }
  local_1a0 = 0.0;
  local_19c = 0.0;
  local_198 = 0.0;
  local_1ac = 0.0;
  local_1a8 = 0.0;
  local_1a4 = 0.0;
  local_188 = 0.0;
  local_184 = 0.0;
  local_180 = 0.0;
  local_1e8 = 0.0;
  local_1e4 = 0.0;
  local_1e0 = 0.0;
  local_214 = 0;
  if (0 < param_4) {
    do {
      local_10c = local_18c * local_1fc - local_190 * local_1f8;
      local_108 = local_1f8 * local_194 - local_18c * local_200;
      local_104 = local_190 * local_200 - local_1fc * local_194;
      local_90 = local_104 + local_1d4;
      local_134 = local_1c8 * local_1f0 - local_1cc * local_1ec;
      local_130 = local_1ec * local_1d0 - local_1c8 * local_1f4;
      local_12c = local_1cc * local_1f4 - local_1f0 * local_1d0;
      local_d0 = local_130 + local_1b4;
      local_cc = local_12c + local_1b0;
      local_144 = (local_10c + local_1dc) - (local_134 + local_1b8);
      local_148 = (local_108 + local_1d8) - local_d0;
      local_14c = local_90 - local_cc;
      local_1c4 = local_144 * local_210;
      local_1c0 = local_148 * local_210;
      local_1bc = local_14c * local_210;
      local_118 = local_134;
      local_114 = local_130;
      local_110 = local_12c;
      local_e4 = local_10c;
      local_e0 = local_108;
      local_dc = local_104;
      local_8c = local_144;
      fVar3 = (float10)FUN_005c5e80(local_1c0 * local_1c0 +
                                    local_1bc * local_1bc + local_1c4 * local_1c4);
      if ((float10)_DAT_00890968 == fVar3) break;
      local_20c = local_1c4 * _DAT_00890da8;
      local_13c = local_1c0 * _DAT_00890da8;
      local_138 = local_1bc * _DAT_00890da8;
      if (local_214 == 0) {
        local_100 = local_144;
        *(float *)(param_1 + 0xf0) = local_20c;
        local_fc = local_148;
        *(float *)(param_1 + 0xf4) = local_13c;
        local_f0 = local_20c * _DAT_00890da8;
        *(float *)(param_1 + 0xf8) = local_138;
        local_ec = local_13c * _DAT_00890da8;
        local_b4 = local_14c;
        local_e8 = local_138 * _DAT_00890da8;
        local_f8 = local_14c;
        *(float *)(param_1 + 0xd8) = local_144;
        *(float *)(param_1 + 0xdc) = local_148;
        *(float *)(param_1 + 0xe0) = local_14c;
        local_128 = local_144 * _DAT_00890da8;
        *(float *)(param_2 + 0xf0) = local_f0;
        *(float *)(param_2 + 0xf4) = local_ec;
        *(float *)(param_2 + 0xf8) = local_e8;
        local_c4 = local_148;
        local_124 = local_148 * _DAT_00890da8;
        local_c0 = local_14c;
        local_120 = local_14c * _DAT_00890da8;
        *(float *)(param_2 + 0xd8) = local_128;
        *(float *)(param_2 + 0xdc) = local_124;
        *(float *)(param_2 + 0xe0) = local_120;
        local_208 = local_13c;
        local_204 = local_138;
        local_a8 = local_e8;
        local_9c = local_120;
      }
      else {
        local_204 = (float)local_214 / (float)param_4;
        local_20c = local_20c * local_204;
        local_208 = local_13c * local_204;
        local_204 = local_138 * local_204;
        if (local_216 == '\0') {
          local_170 = 0.0;
          local_16c = 0.0;
          local_168 = 0.0;
          local_158 = 0.0;
          local_154 = 0.0;
          local_150 = 0.0;
          FUN_00486da0(&local_20c,&local_194,local_80,&local_170,&local_158);
          local_1dc = local_170 + local_1dc;
          local_1d8 = local_16c + local_1d8;
          local_1d4 = local_168 + local_1d4;
          local_200 = local_158 + local_200;
          local_1fc = local_154 + local_1fc;
          local_1f8 = local_150 + local_1f8;
          local_1a0 = local_1a0 + local_170;
          local_19c = local_19c + local_16c;
          local_198 = local_198 + local_168;
          local_188 = local_188 + local_158;
          local_184 = local_184 + local_154;
          local_180 = local_180 + local_150;
        }
        if (local_215 == '\0') {
          local_20c = -local_20c;
          local_208 = -local_208;
          local_204 = -local_204;
          local_164 = 0.0;
          local_160 = 0.0;
          local_15c = 0.0;
          local_17c = 0.0;
          local_178 = 0.0;
          local_174 = 0.0;
          FUN_00486da0(&local_20c,&local_1d0,local_40,&local_164,&local_17c);
          local_1b8 = local_164 + local_1b8;
          local_1b4 = local_160 + local_1b4;
          local_1b0 = local_15c + local_1b0;
          local_1f4 = local_17c + local_1f4;
          local_1f0 = local_178 + local_1f0;
          local_1ec = local_174 + local_1ec;
          local_1ac = local_1ac + local_164;
          local_1a8 = local_1a8 + local_160;
          local_1a4 = local_1a4 + local_15c;
          local_1e8 = local_1e8 + local_17c;
          local_1e4 = local_1e4 + local_178;
          local_1e0 = local_1e0 + local_174;
        }
      }
      local_214 = local_214 + 1;
    } while (local_214 < param_4);
    if (local_214 != 0) {
      *local_f4 = local_1a0 + *local_f4;
      local_f4[1] = local_19c + local_f4[1];
      local_f4[2] = local_198 + local_f4[2];
      *pfVar1 = local_188 + *pfVar1;
      *(float *)(param_1 + 0xa8) = local_184 + *(float *)(param_1 + 0xa8);
      *(float *)(param_1 + 0xac) = local_180 + *(float *)(param_1 + 0xac);
      *local_d8 = local_1ac + *local_d8;
      local_d8[1] = local_1a8 + local_d8[1];
      local_d8[2] = local_1a4 + local_d8[2];
      *local_11c = local_1e8 + *local_11c;
      local_11c[1] = local_1e4 + local_11c[1];
      local_11c[2] = local_1e0 + local_11c[2];
      return 1;
    }
  }
  return 0;
}

