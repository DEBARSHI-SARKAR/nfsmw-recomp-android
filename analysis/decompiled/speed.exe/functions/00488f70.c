/* speed.exe 00488f70 FUN_00488f70; analysis pseudocode, not buildable source.
 * calls 00486da0 FUN_00486da0
 * calls 00486e30 FUN_00486e30
 * calls 004886f0 FUN_004886f0
 * calls 00486bd0 FUN_00486bd0
 * calls 00488680 FUN_00488680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00488f70(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  char local_352;
  char local_351;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  int local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float *local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float *local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float *local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
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
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float *local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_148;
  float local_144;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_f8;
  float local_e4;
  float local_d8;
  float local_cc;
  float local_c0;
  float local_b4;
  float local_a8;
  float local_9c;
  float local_90;
  float local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_344 = *(float *)(param_3 + 0xc);
  local_340 = *(float *)(param_3 + 0x10);
  local_33c = *(float *)(param_3 + 0x14);
  local_314 = 0.0;
  local_310 = 0.0;
  local_30c = 0.0;
  local_320 = 0.0;
  local_31c = 0.0;
  local_318 = 0.0;
  FUN_00488680();
  cVar2 = *(char *)(param_1 + 200);
  if ((cVar2 == '\0') || (local_351 = '\0', *(char *)(param_2 + 200) == '\0')) {
    local_351 = cVar2;
  }
  if ((cVar2 == '\0') || (*(char *)(param_2 + 200) == '\0')) {
    local_352 = *(char *)(param_2 + 200);
  }
  else {
    local_352 = '\0';
  }
  if ((local_351 != '\0') && (local_352 != '\0')) {
    local_351 = '\0';
    local_352 = '\0';
  }
  FUN_00486e30(param_3,&local_314);
  FUN_00486bd0(param_1,local_80);
  FUN_00488680();
  FUN_00486e30(param_3,&local_320);
  FUN_00486bd0(param_2,local_40);
  FUN_00488680();
  pfVar4 = (float *)(param_1 + 0xa4);
  local_308 = *pfVar4;
  local_304 = *(float *)(param_1 + 0xa8);
  local_300 = *(float *)(param_1 + 0xac);
  local_260 = (float *)(param_1 + 0x98);
  local_2b8 = *local_260;
  local_2b4 = *(float *)(param_1 + 0x9c);
  local_2b0 = *(float *)(param_1 + 0xa0);
  local_294 = (float *)(param_2 + 0xa4);
  local_2f8 = *local_294;
  local_2f4 = *(float *)(param_2 + 0xa8);
  local_2f0 = *(float *)(param_2 + 0xac);
  local_174 = (float *)(param_2 + 0x98);
  local_2dc = *local_174;
  local_2d8 = *(float *)(param_2 + 0x9c);
  local_2d4 = *(float *)(param_2 + 0xa0);
  if (local_351 == '\0') {
    if (local_352 == '\0') {
      local_338 = (*(float *)(param_2 + 0xd0) * *(float *)(param_1 + 0xd0)) /
                  (*(float *)(param_2 + 0xd0) + *(float *)(param_1 + 0xd0));
    }
    else {
      local_338 = *(float *)(param_1 + 0xd0);
    }
  }
  else {
    local_338 = *(float *)(param_2 + 0xd0);
  }
  local_328 = 0.0;
  local_2ac = 0.0;
  local_2a8 = 0.0;
  local_2a4 = 0.0;
  local_2c4 = 0.0;
  local_2c0 = 0.0;
  local_2bc = 0.0;
  local_2a0 = 0.0;
  local_29c = 0.0;
  local_298 = 0.0;
  local_2d0 = 0.0;
  local_2cc = 0.0;
  local_2c8 = 0.0;
  local_324 = 0;
  local_224 = pfVar4;
  if (0 < param_4) {
    do {
      local_1c8 = local_30c * local_304 - local_310 * local_300;
      local_1c4 = local_300 * local_314 - local_30c * local_308;
      local_1c0 = local_310 * local_308 - local_304 * local_314;
      local_250 = local_1c8 + local_2b8;
      local_24c = local_1c4 + local_2b4;
      local_248 = local_1c0 + local_2b0;
      local_1e0 = local_318 * local_2f4 - local_31c * local_2f0;
      local_1dc = local_2f0 * local_320 - local_318 * local_2f8;
      local_1d8 = local_31c * local_2f8 - local_2f4 * local_320;
      local_25c = local_1e0 + local_2dc;
      local_258 = local_1dc + local_2d8;
      local_254 = local_1d8 + local_2d4;
      local_244 = local_250 - local_25c;
      local_220 = local_24c - local_258;
      local_2ec = local_248 - local_254;
      local_11c = local_244 * local_338;
      local_118 = local_220 * local_338;
      local_114 = local_2ec * local_338;
      local_2fc = local_340 * local_118 + local_33c * local_114 + local_11c * local_344;
      if (_DAT_00890968 <= local_2fc) break;
      local_234 = -local_2fc;
      local_334 = 0.0;
      local_2e8 = local_344 * local_234;
      local_330 = 0.0;
      local_32c = 0.0;
      local_2e4 = local_340 * local_234;
      local_2e0 = local_33c * local_234;
      local_21c = local_2e8;
      local_218 = local_2e4;
      local_214 = local_2e0;
      local_170 = local_1e0;
      local_16c = local_1dc;
      local_168 = local_1d8;
      local_164 = local_1c8;
      local_160 = local_1c4;
      local_15c = local_1c0;
      local_104 = local_11c;
      local_84 = local_2ec;
      uVar3 = FUN_004886f0(&local_11c,local_2fc,&local_344,&local_334);
      if (local_324 == 0) {
        local_178 = local_244 * local_344 + local_220 * local_340 + local_2ec * local_33c;
        local_180 = local_344 * local_178;
        local_17c = local_340 * local_178;
        local_178 = local_33c * local_178;
        *(float *)(param_1 + 0xd8) = local_180;
        *(float *)(param_1 + 0xdc) = local_17c;
        *(float *)(param_1 + 0xe0) = local_178;
        local_198 = local_244 - *(float *)(param_1 + 0xd8);
        local_13c = local_220;
        local_194 = local_220 - *(float *)(param_1 + 0xdc);
        local_138 = local_2ec;
        local_190 = local_2ec - *(float *)(param_1 + 0xe0);
        *(undefined4 *)(param_1 + 0x108) = uVar3;
        *(float *)(param_1 + 0xe4) = local_198;
        *(float *)(param_1 + 0xe8) = local_194;
        fVar1 = _DAT_00890968;
        *(float *)(param_1 + 0xec) = local_190;
        *(float *)(param_1 + 0xfc) = local_334;
        *(float *)(param_1 + 0x100) = local_330;
        *(float *)(param_1 + 0x104) = local_32c;
        if ((fVar1 < *(float *)(param_1 + 0xcc)) && (*(float *)(param_1 + 0xcc) < local_234)) {
          *(undefined1 *)(param_1 + 200) = 0;
          local_351 = '\0';
          local_338 = (*(float *)(param_2 + 0xd0) * *(float *)(param_1 + 0xd0)) /
                      (*(float *)(param_2 + 0xd0) + *(float *)(param_1 + 0xd0));
        }
        local_158 = local_25c - local_250;
        local_154 = local_258 - local_24c;
        local_1cc = local_158 * local_344 +
                    local_154 * local_340 + (local_254 - local_248) * local_33c;
        local_1d4 = local_344 * local_1cc;
        local_1d0 = local_340 * local_1cc;
        local_1cc = local_33c * local_1cc;
        *(float *)(param_2 + 0xd8) = local_1d4;
        *(float *)(param_2 + 0xdc) = local_1d0;
        *(float *)(param_2 + 0xe0) = local_1cc;
        local_1bc = local_158 - *(float *)(param_2 + 0xd8);
        local_1b8 = local_154 - *(float *)(param_2 + 0xdc);
        local_1b4 = (local_254 - local_248) - *(float *)(param_2 + 0xe0);
        *(undefined4 *)(param_2 + 0x108) = uVar3;
        *(float *)(param_2 + 0xe4) = local_1bc;
        *(float *)(param_2 + 0xe8) = local_1b8;
        local_1a4 = local_334 * _DAT_00890da8;
        *(float *)(param_2 + 0xec) = local_1b4;
        local_1a0 = local_330 * _DAT_00890da8;
        local_19c = local_32c * _DAT_00890da8;
        *(float *)(param_2 + 0xfc) = local_1a4;
        *(float *)(param_2 + 0x100) = local_1a0;
        *(float *)(param_2 + 0x104) = local_19c;
        pfVar4 = local_224;
        local_f8 = local_158;
        local_d8 = local_190;
        local_c0 = local_1cc;
        local_a8 = local_19c;
        local_9c = local_178;
        local_90 = local_1b4;
        if ((_DAT_00890968 < *(float *)(param_2 + 0xcc)) && (*(float *)(param_2 + 0xcc) < local_234)
           ) {
          *(undefined1 *)(param_2 + 200) = 0;
          local_352 = '\0';
          local_338 = (*(float *)(param_2 + 0xd0) * *(float *)(param_1 + 0xd0)) /
                      (*(float *)(param_2 + 0xd0) + *(float *)(param_1 + 0xd0));
        }
      }
      else {
        fVar1 = (float)local_324 / (float)param_4;
        local_2e8 = local_21c * fVar1;
        local_2e4 = local_218 * fVar1;
        local_2e0 = local_214 * fVar1;
        local_334 = local_334 * fVar1;
        local_330 = local_330 * fVar1;
        local_32c = local_32c * fVar1;
        local_328 = local_328 - fVar1 * local_2fc;
        if (local_351 == '\0') {
          local_278 = 0.0;
          local_274 = 0.0;
          local_270 = 0.0;
          local_1f8 = 0.0;
          local_1f4 = 0.0;
          local_1f0 = 0.0;
          local_284 = 0.0;
          local_280 = 0.0;
          local_27c = 0.0;
          local_210 = 0.0;
          local_20c = 0.0;
          local_208 = 0.0;
          FUN_00486da0(&local_2e8,&local_314,local_80,&local_278,&local_284);
          FUN_00486da0(&local_334,&local_314,local_80,&local_1f8,&local_210);
          local_240 = local_1f8 + local_278;
          local_23c = local_1f4 + local_274;
          local_238 = local_1f0 + local_270;
          local_188 = local_20c + local_280;
          local_184 = local_208 + local_27c;
          if (*(char *)(param_1 + 0x110) == '\0') {
            local_2b8 = local_240 + local_2b8;
            local_2b4 = local_23c + local_2b4;
            local_2b0 = local_238 + local_2b0;
            fVar1 = *(float *)(param_1 + 0x10c);
            local_10c = local_274 * fVar1;
            local_108 = local_270 * fVar1;
            local_e4 = local_108 + local_238;
            local_2ac = local_2ac + local_278 * fVar1 + local_240;
            local_2a8 = local_2a8 + local_10c + local_23c;
            local_2a4 = local_2a4 + local_e4;
          }
          local_308 = local_308 + local_210 + local_284;
          local_304 = local_188 + local_304;
          local_300 = local_184 + local_300;
          fVar1 = *(float *)(param_1 + 0x10c);
          local_124 = local_280 * fVar1;
          local_120 = local_27c * fVar1;
          local_cc = local_120 + local_184;
          local_2c4 = local_2c4 + local_284 * fVar1 + local_210 + local_284;
          local_2c0 = local_2c0 + local_124 + local_188;
          local_2bc = local_2bc + local_cc;
        }
        if (local_352 == '\0') {
          local_2e8 = -local_2e8;
          local_2e4 = -local_2e4;
          local_2e0 = -local_2e0;
          local_334 = -local_334;
          local_26c = 0.0;
          local_268 = 0.0;
          local_330 = -local_330;
          local_264 = 0.0;
          local_204 = 0.0;
          local_200 = 0.0;
          local_32c = -local_32c;
          local_1fc = 0.0;
          local_290 = 0.0;
          local_28c = 0.0;
          local_288 = 0.0;
          local_1ec = 0.0;
          local_1e8 = 0.0;
          local_1e4 = 0.0;
          FUN_00486da0(&local_2e8,&local_320,local_40,&local_26c,&local_290);
          FUN_00486da0(&local_334,&local_320,local_40,&local_204,&local_1ec);
          local_230 = local_204 + local_26c;
          local_22c = local_200 + local_268;
          local_228 = local_1fc + local_264;
          if (*(char *)(param_2 + 0x110) == '\0') {
            local_2dc = local_230 + local_2dc;
            local_2d8 = local_22c + local_2d8;
            local_2d4 = local_228 + local_2d4;
            fVar1 = *(float *)(param_2 + 0x10c);
            local_148 = local_268 * fVar1;
            local_144 = local_264 * fVar1;
            local_b4 = local_144 + local_228;
            local_2a0 = local_2a0 + local_26c * fVar1 + local_230;
            local_29c = local_29c + local_148 + local_22c;
            local_298 = local_298 + local_b4;
          }
          local_2f8 = local_2f8 + local_1ec + local_290;
          local_2f4 = local_1e8 + local_28c + local_2f4;
          local_2f0 = local_1e4 + local_288 + local_2f0;
          fVar1 = *(float *)(param_2 + 0x10c);
          local_130 = local_28c * fVar1;
          local_12c = local_288 * fVar1;
          local_1a8 = local_12c + local_1e4 + local_288;
          local_2d0 = local_2d0 + local_290 * fVar1 + local_1ec + local_290;
          local_2cc = local_2cc + local_130 + local_1e8 + local_28c;
          local_2c8 = local_2c8 + local_1a8;
        }
      }
      local_324 = local_324 + 1;
    } while (local_324 < param_4);
    if (local_324 != 0) {
      *(float *)(param_1 + 0xf0) = local_344 * local_328;
      *(float *)(param_1 + 0xf4) = local_340 * local_328;
      fVar1 = -local_328;
      *(float *)(param_1 + 0xf8) = local_33c * local_328;
      *(float *)(param_2 + 0xf0) = local_344 * fVar1;
      *(float *)(param_2 + 0xf4) = local_340 * fVar1;
      *(float *)(param_2 + 0xf8) = local_33c * fVar1;
      *local_260 = local_2ac + *local_260;
      local_260[1] = local_2a8 + local_260[1];
      local_260[2] = local_2a4 + local_260[2];
      *pfVar4 = local_2c4 + *pfVar4;
      pfVar4[1] = local_2c0 + pfVar4[1];
      pfVar4[2] = local_2bc + pfVar4[2];
      *local_174 = local_2a0 + *local_174;
      local_174[1] = local_29c + local_174[1];
      local_174[2] = local_298 + local_174[2];
      *local_294 = local_2d0 + *local_294;
      local_294[1] = local_2cc + local_294[1];
      local_294[2] = local_2c8 + local_294[2];
      return 1;
    }
  }
  return 0;
}

