/* speed.exe 0074a5d0 FUN_0074a5d0; analysis pseudocode, not buildable source.
 * calls 006be750 FUN_006be750
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd940 FUN_006bd940
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f490 FUN_0045f490
 * calls 0074a490 FUN_0074a490
 * calls 00727480 FUN_00727480
 * calls 0045f3c0 FUN_0045f3c0
 * calls 0045f7c0 FUN_0045f7c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074a5d0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_190;
  float local_18c;
  float *local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_16c;
  float local_168;
  uint local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  int local_128;
  int local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_fc;
  float local_f8;
  float local_ec;
  float local_e8;
  float local_dc;
  float local_d8;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_a8;
  float local_98;
  float local_88;
  float local_78;
  float local_68;
  float local_58;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(short *)(*(int *)(param_1 + 0x244) + 0x40) < 6) {
    iVar3 = FUN_007c4b80();
    local_128 = *(int *)(*(int *)(param_1 + 0x288) + 0x40) + 0x50;
    local_124 = iVar3;
    FUN_00444fe0(local_50,param_1 + 0x3610);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    FUN_006bd940(&local_120,local_50,param_1 + 0x270);
    iVar4 = *(int *)(param_1 + 0x244);
    local_16c = (*(float *)(param_1 + 0x3840) + *(float *)(param_1 + 0x3830)) * _DAT_008933d4;
    local_168 = (*(float *)(param_1 + 0x3844) + *(float *)(param_1 + 0x3834)) * _DAT_008933d4;
    local_190 = local_16c - (*(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x28)) * _DAT_008933d4;
    local_18c = local_168 - (*(float *)(iVar4 + 0x2c) + *(float *)(iVar4 + 0x24)) * _DAT_008933d4;
    FUN_0045f3c0(&local_190,&local_190);
    local_148 = local_190 * _DAT_008b2f84;
    *(float *)(param_1 + 0x250) = local_190;
    local_144 = local_18c * _DAT_008b2f84;
    *(float *)(param_1 + 0x254) = local_18c;
    *(undefined4 *)(param_1 + 600) = 0;
    local_188 = (float *)(local_148 + local_16c);
    local_184 = local_144 + local_168;
    iVar4 = FUN_00727480(&local_188,3,0);
    if (((iVar4 == 0) || (iVar4 == *(int *)(param_1 + 0x244))) && (local_164 = 0, 0 < iVar3)) {
      local_16c = (float)(param_1 + 0x3880);
      local_148 = 1.26677e-42;
      do {
        fVar1 = *(float *)(param_1 + 0x33f8);
        local_cc = fVar1 * *(float *)(param_1 + 0x3484);
        local_188 = (float *)((*(int *)(param_1 + 0x29c) + (int)local_148) * 0x10 + param_1);
        local_c8 = fVar1 * *(float *)(param_1 + 0x3488);
        pfVar5 = (float *)((*(int *)(param_1 + 0x298) + (int)local_148) * 0x10 + param_1);
        iVar3 = (local_164 % 10) * 0x10;
        iVar4 = iVar3 + 0x36c8 + param_1;
        fVar2 = *(float *)(iVar4 + 4);
        local_a8 = local_c8 + *(float *)(iVar4 + 8);
        local_ec = local_11c + local_188[1];
        local_e8 = local_118 + local_188[2];
        local_140 = local_120 + *local_188 +
                    fVar1 * *(float *)(param_1 + 0x3480) + *(float *)(iVar3 + 0x36c8 + param_1);
        *pfVar5 = local_140;
        local_13c = local_ec + local_cc + fVar2;
        pfVar5[1] = local_13c;
        local_138 = local_e8 + local_a8;
        pfVar5[2] = local_138;
        if ((local_138 < *(float *)(param_1 + 0x3868)) || (*(float *)(param_1 + 0x3838) < local_138)
           ) {
          FUN_0074a490(local_16c);
        }
        else {
          local_180 = *local_188 - local_140;
          local_17c = local_188[1] - local_13c;
          local_178 = local_188[2] - local_138;
          local_58 = local_178;
          FUN_0045f490(&local_180,&local_180);
          FUN_0045f7c0(&local_160,local_128,&local_180);
          fVar1 = *(float *)(param_1 + 0x3420) + *(float *)(param_1 + 0x3420);
          local_160 = local_160 * fVar1;
          local_15c = local_15c * fVar1;
          local_158 = local_158 * fVar1;
          fVar1 = *(float *)(param_1 + 0x3690) + *(float *)(param_1 + 0x3424);
          local_180 = local_180 * fVar1;
          local_17c = local_17c * fVar1;
          local_178 = local_178 * fVar1;
          local_110 = local_180 + local_160;
          local_10c = local_15c + local_17c;
          local_188 = (float *)(local_158 + local_178);
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          local_78 = pfVar5[2] - (float)local_188;
          *(float *)(param_1 + 0x34d8) = local_78;
          *(float *)(param_1 + 0x34d0) = fVar1 - local_110;
          *(float *)(param_1 + 0x34d4) = fVar2 - local_10c;
          local_fc = local_15c - local_17c;
          local_f8 = local_158 - local_178;
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          local_98 = local_f8 + pfVar5[2];
          *(float *)(param_1 + 0x34e8) = local_98;
          *(float *)(param_1 + 0x34e0) = (local_160 - local_180) + fVar1;
          *(float *)(param_1 + 0x34e4) = local_fc + fVar2;
          local_dc = local_17c - local_15c;
          local_d8 = local_178 - local_158;
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          local_88 = local_d8 + pfVar5[2];
          *(float *)(param_1 + 0x3508) = local_88;
          *(float *)(param_1 + 0x3500) = (local_180 - local_160) + fVar1;
          *(float *)(param_1 + 0x3504) = local_dc + fVar2;
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          local_68 = (float)local_188 + pfVar5[2];
          *(float *)(param_1 + 0x34f8) = local_68;
          *(float *)(param_1 + 0x34f0) = local_110 + fVar1;
          *(float *)(param_1 + 0x34f4) = local_10c + fVar2;
          local_c0 = local_110;
          local_bc = local_10c;
          FUN_006be750((float *)(param_1 + 0x34d0),*(undefined4 *)(param_1 + 0x3404),&DAT_00987ab0,0
                       ,0x3f000000);
        }
        local_164 = local_164 + 1;
        local_148 = (float)((int)local_148 + 2);
        local_16c = (float)((int)local_16c + 0x20);
      } while ((int)local_164 < local_124);
    }
  }
  return;
}

