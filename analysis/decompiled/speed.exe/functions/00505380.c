/* speed.exe 00505380 FUN_00505380; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 * calls 0045fc60 FUN_0045fc60
 * calls 007c4b80 FUN_007c4b80
 * calls 006cf2b0 FUN_006cf2b0
 * calls 00410d40 FUN_00410d40
 * calls 006be8f0 FUN_006be8f0
 * calls 00444eb0 FUN_00444eb0
 * calls 00444fa0 FUN_00444fa0
 * calls 006bd980 FUN_006bd980
 * calls 00470020 FUN_00470020
 * calls 006be750 FUN_006be750
 * calls 006bd940 FUN_006bd940
 * calls 00503400 FUN_00503400
 * calls 004022e0 FUN_004022e0
 * calls 0045f640 FUN_0045f640
 * calls 004102f0 FUN_004102f0
 * calls 00444fe0 FUN_00444fe0
 * calls 00445070 FUN_00445070
 * calls 0045fba0 FUN_0045fba0
 * calls 00789870 FUN_00789870
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 006be940 FUN_006be940
 * calls 006be6b0 FUN_006be6b0
 * calls 006c0a30 FUN_006c0a30
 * calls 00470050 FUN_00470050
 * calls 007c45f0 FUN_007c45f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00505380(int param_1,int param_2,int param_3,float param_4,int param_5,int param_6,float param_7
            ,uint param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  float10 fVar10;
  undefined1 *puVar11;
  float fVar12;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 local_364;
  float local_358;
  float local_354;
  float local_350;
  undefined **local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_308;
  uint local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  float local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  float local_2c8;
  float local_2bc;
  int local_2b8;
  float local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  undefined1 local_260 [8];
  float local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [64];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  if (DAT_008f2918 != 0) {
    if (param_6 == 2) {
      fVar12 = _DAT_00890968;
      if (*(int *)(param_1 + 0x68) != 0) {
        fVar12 = *(float *)(*(int *)(param_1 + 0x68) + 0x36a0);
      }
      DAT_008f23ec = (_DAT_008f23f4 - _DAT_008f23f0) * fVar12 + _DAT_008f23f0;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x40);
    if (((param_2 != 0) && (param_3 != 0)) && (puVar8 != (undefined4 *)0x0)) {
      local_304 = (uint)*(char *)(param_2 + 0x2d);
      local_350 = (float)(int)*(char *)(param_2 + 0x2c);
      if (param_7 == _DAT_00890968) {
        if ((*(int *)(param_2 + 0x1c) == 0x4479c000) || (param_5 == 1)) {
          local_36c = *(float *)(param_2 + 0x14);
          local_370 = *(float *)(param_2 + 0x10);
          local_368 = *(float *)(param_2 + 0x18);
          FUN_006bd940(&local_370,param_3,&local_370);
          local_320 = -local_36c;
          local_318 = local_370;
          local_31c = local_368;
          if (DAT_00925e90 == 6) {
            local_2e8 = 0.0;
            local_2e4 = 3;
            FUN_00789870(&local_320,&local_34c,0);
            *(float *)(param_2 + 0x1c) = (float)local_34c - (local_368 - (float)local_34c);
          }
          else {
            *(float *)(param_2 + 0x1c) = local_368;
          }
        }
      }
      else {
        local_36c = *(float *)(param_2 + 0x14);
        local_370 = *(float *)(param_2 + 0x10);
        local_368 = *(float *)(param_2 + 0x18);
        FUN_006bd940(&local_370,param_3,&local_370);
        *(float *)(param_2 + 0x1c) = param_7 - (local_368 - param_7);
      }
      local_2b0 = *(undefined4 *)(param_2 + 0x10);
      local_2ac = *(undefined4 *)(param_2 + 0x14);
      local_2a8 = *(undefined4 *)(param_2 + 0x18);
      FUN_00444fe0(local_160,param_3);
      if (param_6 == 2) {
        if (*(int *)(param_2 + 0x1c) == 0x4479c000) {
          return 0;
        }
        if (*(int *)(param_2 + 0x1c) == 0x461c3c00) {
          return 0;
        }
        thunk_FUN_006bd940(&local_330,local_160,&local_2b0);
        local_328 = *(undefined4 *)(param_2 + 0x1c);
        FUN_0045fba0(&local_320,&local_370,&local_330);
        FUN_0045fc60(&local_320,&local_370,&local_330,DAT_008f23ec);
        iVar3 = FUN_006cf2b0(&local_320,&local_370,0);
        if (iVar3 == 0) {
          return 0;
        }
        local_2d0 = *(undefined4 *)(param_2 + 0x20);
        local_2cc = *(undefined4 *)(param_2 + 0x24);
        local_2c8 = -*(float *)(param_2 + 0x28);
      }
      else if (param_6 == 1) {
        thunk_FUN_006bd940(&local_330,local_160,&local_2b0);
        local_354 = (float)DAT_008f291c;
        FUN_0045fba0(&local_320,&local_370,&local_330);
        FUN_0045fc60(&local_320,&local_370,&local_330,local_354);
        iVar3 = FUN_006cf2b0(&local_320,&local_370,0);
        if (iVar3 == 0) {
          return 0;
        }
        local_2d0 = *(undefined4 *)(param_2 + 0x20);
        local_2cc = *(undefined4 *)(param_2 + 0x24);
        local_2c8 = *(float *)(param_2 + 0x28);
      }
      else {
        if (((param_6 == 3) || (param_6 == 4)) &&
           ((local_350 != 2.38221e-44 &&
            ((((local_350 != 2.52234e-44 && (local_350 != 2.8026e-44)) && (local_350 != 2.66247e-44)
              ) && ((piVar4 = (int *)FUN_00410d40(), piVar4 != (int *)0x0 &&
                    (iVar3 = (**(code **)(*piVar4 + 0x10))(), iVar3 != 0)))))))) {
          FUN_004102f0(&local_370,iVar3 + 0x20);
          FUN_0045f490(&local_370,&local_370);
          fVar12 = local_370 * *(float *)(iVar3 + 0x50) +
                   local_368 * *(float *)(iVar3 + 0x58) + local_36c * *(float *)(iVar3 + 0x54);
          if (fVar12 < _DAT_008f2924) {
            return 0;
          }
          param_4 = (fVar12 - _DAT_008f2924) / (_DAT_0089096c - _DAT_008f2924);
        }
        thunk_FUN_006bd940(&local_330,local_160,&local_2b0);
        iVar3 = FUN_006be8f0(&local_330,0);
        if (iVar3 == 0) {
          return 0;
        }
        local_2d0 = *(undefined4 *)(param_2 + 0x20);
        local_2cc = *(undefined4 *)(param_2 + 0x24);
        local_2c8 = *(float *)(param_2 + 0x28);
      }
      local_370 = (float)puVar8[0x10];
      local_36c = (float)puVar8[0x11];
      local_368 = (float)puVar8[0x12];
      FUN_004102f0(&local_340,&local_330);
      local_308 = 1.0;
      local_358 = local_340 * local_340 + local_33c * local_33c + local_338 * local_338;
      fVar12 = _DAT_00899c70;
      fVar2 = _DAT_00899c74;
      if (param_6 != 1) {
        fVar12 = _DAT_00899c60;
        fVar2 = _DAT_00899c64;
      }
      if (local_358 <= fVar2) {
        if (fVar12 < local_358) {
          local_308 = _DAT_0089096c - (local_358 - fVar12) / (fVar2 - fVar12);
        }
        FUN_0045f490(&local_340,&local_340);
        FUN_00445070(param_3);
        local_370 = 0.0;
        local_36c = 0.0;
        local_368 = 0.0;
        local_364 = 0;
        FUN_00444fa0(&local_370);
        thunk_FUN_006bd940(&local_280,local_d0,&local_2d0);
        local_348 = local_340 * local_280 + local_27c * local_33c + local_278 * local_338;
        if ((local_304 & 1) == 0) {
          if (local_348 < _DAT_00890968) {
            local_348 = 0.0;
          }
        }
        else {
          local_348 = ABS(local_348);
        }
        local_2e0 = *puVar8;
        local_2dc = puVar8[4];
        local_2d8 = puVar8[8];
        local_300 = puVar8[1];
        local_2fc = puVar8[5];
        local_2f8 = puVar8[9];
        local_2a0 = puVar8[2];
        local_29c = puVar8[6];
        local_298 = puVar8[10];
        FUN_00445070(puVar8);
        local_354 = *(float *)(param_1 + 0xc);
        thunk_FUN_006bd940(local_260,local_50,&local_330);
        local_344 = local_258 / local_354;
        local_290 = local_330;
        local_28c = local_32c;
        local_270 = local_340;
        local_288 = local_328;
        local_26c = local_33c;
        local_34c = &PTR_DAT_008f2868 + (int)local_350 * 2;
        local_268 = local_338;
        local_354 = 2.8026e-45;
        do {
          pfVar1 = (float *)*local_34c;
          if (pfVar1 != (float *)0x0) {
            if (param_6 == 2) {
              iVar3 = FUN_00503400(0x3394fe62,0,0);
            }
            else {
              iVar3 = (&DAT_00915114)[(int)pfVar1[10]];
            }
            if (iVar3 != 0) {
              _DAT_0091599c = param_4;
              if ((local_304 & 4) != 0) {
                fVar10 = (float10)FUN_007c45f0();
                _DAT_0091599c = (float)(fVar10 * (float10)param_4);
                if ((float10)_DAT_0089096c < fVar10 * (float10)param_4) {
                  _DAT_0091599c = 1.0;
                }
              }
              local_350 = (pfVar1[1] - *pfVar1) * _DAT_0091599c + *pfVar1;
              if (local_350 < _DAT_00890968 == (local_350 == _DAT_00890968)) {
                FUN_0045f640(&local_370,&local_290,&local_270,pfVar1[7]);
                if (local_344 < pfVar1[8]) {
                  local_344 = pfVar1[8];
                }
                if (pfVar1[9] < local_344) {
                  local_344 = pfVar1[9];
                }
                local_350 = local_350 * local_344 * param_9;
                FUN_006c0a30();
                local_2e8 = _DAT_0091599c * pfVar1[2];
                local_2b4 = _DAT_0091599c * pfVar1[3];
                local_2bc = _DAT_0091599c * pfVar1[4];
                local_358 = _DAT_0091599c * pfVar1[5] * local_308;
                local_358 = local_358 + local_358;
                if (_DAT_00899dd8 < local_358) {
                  local_358 = 255.0;
                }
                if (param_6 == 0) {
                  FUN_0045f490(&local_2a0,&local_2a0);
                  FUN_006be940(&local_320,&local_290);
                  local_2b8 = FUN_006be6b0();
                  DAT_00916038 = (local_320 / (float)local_2b8) * _DAT_008f2920;
                  uVar5 = FUN_00444eb0(DAT_00916038);
                  FUN_006bd980(local_90,&local_2a0,uVar5);
                  FUN_006bd940(&local_2e0,local_90,&local_2e0);
                  FUN_006bd940(&local_300,local_90,&local_300);
                }
                fVar12 = local_350;
                FUN_004022e0(local_350);
                FUN_004022e0(fVar12);
                if (param_6 == 2) {
                  fVar12 = DAT_008f23ec;
                  if (*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x1c) < _DAT_00899c8c) {
                    fVar12 = DAT_008f23ec * _DAT_008933d4;
                  }
                  FUN_004022e0(fVar12);
                }
                if (param_8 == 0) {
                  iVar6 = FUN_007c4b80();
                  uVar9 = FUN_007c4b80();
                  uVar7 = FUN_007c4b80();
                  uVar9 = ((iVar6 << 8 | uVar9) << 8 | uVar7) << 8;
                  local_1d0 = FUN_007c4b80();
                }
                else {
                  iVar6 = FUN_007c4b80();
                  uVar9 = iVar6 << 0x18;
                  local_1d0 = param_8;
                }
                local_1d0 = uVar9 | local_1d0;
                puVar8 = &local_300;
                puVar11 = local_170;
                local_1cc = local_1d0;
                local_1c8 = local_1d0;
                local_1c4 = local_1d0;
                FUN_00470050(local_f0);
                uVar5 = FUN_004102f0(puVar11,puVar8);
                puVar8 = (undefined4 *)FUN_00470020(local_190,uVar5);
                local_24c = puVar8[1];
                local_248 = puVar8[2];
                local_250 = *puVar8;
                uVar5 = FUN_004102f0(local_e0,&local_300);
                puVar8 = (undefined4 *)FUN_00470020(local_1b0,uVar5);
                local_23c = puVar8[1];
                local_238 = puVar8[2];
                local_240 = *puVar8;
                uVar5 = FUN_00470020(local_110,&local_300);
                puVar8 = (undefined4 *)FUN_00470020(local_120,uVar5);
                local_22c = puVar8[1];
                local_228 = puVar8[2];
                local_230 = *puVar8;
                puVar8 = &local_300;
                puVar11 = local_100;
                FUN_00470050(local_1a0);
                uVar5 = FUN_00470020(puVar11,puVar8);
                puVar8 = (undefined4 *)FUN_00470020(local_180,uVar5);
                local_21c = puVar8[1];
                local_218 = puVar8[2];
                local_220 = *puVar8;
                FUN_006be750(&local_250,iVar3,&DAT_00987ab0,0,0);
              }
            }
          }
          local_34c = local_34c + 1;
          local_354 = (float)((int)local_354 + -1);
        } while (local_354 != 0.0);
        return 1;
      }
    }
  }
  return 0;
}

