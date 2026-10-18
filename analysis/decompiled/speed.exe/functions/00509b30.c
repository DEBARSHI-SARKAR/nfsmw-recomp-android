/* speed.exe 00509b30 FUN_00509b30; analysis pseudocode, not buildable source.
 * calls 004febc0 FUN_004febc0
 * calls 0045f640 FUN_0045f640
 * calls 0045da70 FUN_0045da70
 * calls 004fe930 FUN_004fe930
 * calls 0045d9e0 FUN_0045d9e0
 * calls 007c4b80 FUN_007c4b80
 * calls 004fea70 FUN_004fea70
 * calls 00509710 FUN_00509710
 * calls 006bd920 FUN_006bd920
 * calls 004fe7a0 FUN_004fe7a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00509b30(int param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float10 extraout_ST0;
  float10 fVar10;
  float10 fVar11;
  undefined4 local_148;
  float local_144;
  float local_140;
  char local_13a;
  char local_139;
  float local_138;
  char local_134;
  char local_133;
  undefined1 local_132;
  char local_131;
  float local_130;
  float local_12c;
  float local_128;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  int local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  int local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_4c;
  float local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  
  local_134 = DAT_0091606c;
  if (((param_3 < _DAT_00890968 == (param_3 == _DAT_00890968)) &&
      (param_3 <= *(float *)(param_1 + 0x74))) && (*(float *)(param_1 + 0x70) <= param_3)) {
    local_148 = *(undefined4 *)(param_1 + 0x14);
    local_70 = *(int *)(param_1 + 0x7c);
    pfVar1 = *(float **)(local_70 + 8);
    local_f0 = pfVar1[0x29] * _DAT_00899dd4;
    local_38 = local_f0 * _DAT_00891068;
    local_6c = pfVar1[0x3f];
    local_58 = pfVar1[0x43];
    local_144 = pfVar1[0x33];
    local_140 = pfVar1[0x36];
    local_110 = pfVar1[0x34];
    local_a0 = *pfVar1;
    local_9c = pfVar1[1];
    local_98 = pfVar1[2];
    local_94 = pfVar1[3];
    local_60 = *(int *)(local_70 + 8);
    fVar9 = *(float *)(local_60 + 0x30);
    local_e0 = *(float *)(local_60 + 0x34);
    local_dc = *(float *)(local_60 + 0x38);
    local_d8 = *(undefined4 *)(local_60 + 0x3c);
    local_90 = *(float *)(local_60 + 0x70);
    local_8c = *(float *)(local_60 + 0x74);
    local_88 = *(float *)(local_60 + 0x78);
    local_84 = *(undefined4 *)(local_60 + 0x7c);
    local_104 = *(float *)(local_60 + 0x10);
    local_100 = *(float *)(local_60 + 0x14);
    local_fc = *(float *)(local_60 + 0x18);
    local_f8 = *(undefined4 *)(local_60 + 0x1c);
    local_30 = *(float *)(local_60 + 0x80);
    local_2c = *(float *)(local_60 + 0x84);
    local_28 = *(float *)(local_60 + 0x88);
    local_24 = *(undefined4 *)(local_60 + 0x8c);
    local_b0 = *(float *)(local_60 + 0x60);
    local_ac = *(float *)(local_60 + 100);
    local_a8 = *(float *)(local_60 + 0x68);
    local_a4 = *(undefined4 *)(local_60 + 0x6c);
    local_133 = *(int *)(local_60 + 0xe0) != 0;
    local_131 = *(char *)(local_60 + 0x114);
    local_68 = *(undefined4 *)(local_60 + 0xdc);
    local_54 = local_70 + 0x60;
    local_70 = local_70 + 0x20;
    local_139 = *(int *)(local_60 + 0x90) != 0;
    local_13a = *(char *)(local_60 + 0x95) != '\0';
    local_d4 = pfVar1[0x3a] * pfVar1[0x2f];
    local_ec = pfVar1[0x41] * pfVar1[0x3b];
    local_10c = pfVar1[0x40] * pfVar1[0x3c];
    local_118 = pfVar1[0x2f] - local_d4;
    local_114 = pfVar1[0x3b] - local_ec;
    local_11c = pfVar1[0x3c] - local_10c;
    local_e4 = fVar9;
    local_f4 = FUN_007c4b80();
    if (local_f4 == 0) {
      fVar10 = extraout_ST0 + (float10)*(float *)(param_1 + 0x10);
      fVar11 = (float10)_DAT_0089096c;
      *(float *)(param_1 + 0x10) = (float)fVar10;
      if (fVar11 < fVar10) {
        local_f4 = 1;
        *(float *)(param_1 + 0x10) = (float)(fVar10 - (float10)_DAT_0089096c);
      }
    }
    if (0 < local_f4) {
      local_64 = local_b0 * _DAT_008933d4;
      local_34 = local_ac * _DAT_008933d4;
      local_5c = local_a8 * _DAT_008933d4;
      do {
        fVar2 = local_e0;
        local_130 = 0.0;
        local_12c = 0.0;
        local_128 = 0.0;
        local_d0 = 0.0;
        local_cc = 0.0;
        local_c8 = 0.0;
        fVar11 = (float10)FUN_0045d9e0(local_10c,&local_148);
        local_140 = (float)(fVar11 + (float10)local_11c);
        if ((_DAT_00890968 < local_11c) || (local_11c < _DAT_00890968)) {
          if (local_58 == 0.0) {
            FUN_004fea70(&local_110,&local_e8,&local_b8,&local_148);
          }
          else {
            FUN_004fe930(&local_110,&local_e8,&local_b8,&local_148);
          }
          local_130 = local_110 * local_140;
          local_12c = local_e8 * local_140;
          local_128 = local_b8 * local_140;
        }
        else if (local_131 == '\0') {
          fVar11 = (float10)FUN_0045d9e0(local_dc,&local_148);
          fVar11 = ((float10)local_98 - (float10)local_dc) + fVar11 + fVar11;
          local_130 = (float)(fVar11 * (float10)*(float *)(param_1 + 0x40));
          local_12c = (float)(fVar11 * (float10)*(float *)(param_1 + 0x44));
          local_128 = (float)(fVar11 * (float10)*(float *)(param_1 + 0x48));
          fVar11 = (float10)FUN_0045d9e0(fVar2,&local_148);
          fVar11 = ((float10)local_9c - (float10)local_e0) + fVar11 + fVar11;
          local_4c = (float)(fVar11 * (float10)*(float *)(param_1 + 0x34));
          local_48 = (float)(fVar11 * (float10)*(float *)(param_1 + 0x38));
          local_130 = (float)(fVar11 * (float10)*(float *)(param_1 + 0x30) + (float10)local_130);
          local_12c = local_4c + local_12c;
          local_128 = local_48 + local_128;
          fVar11 = (float10)FUN_0045d9e0(fVar9,&local_148);
          fVar11 = ((float10)local_a0 - (float10)local_e4) + fVar11 + fVar11;
          local_4c = (float)(fVar11 * (float10)*(float *)(param_1 + 0x24));
          local_48 = (float)(fVar11 * (float10)*(float *)(param_1 + 0x28));
          local_130 = (float)(fVar11 * (float10)*(float *)(param_1 + 0x20) + (float10)local_130);
          local_12c = local_4c + local_12c;
          local_128 = local_48 + local_128;
          fVar11 = (float10)FUN_0045d9e0(local_104,&local_148);
          local_d0 = (float)(((float10)local_90 - (float10)local_104) + fVar11 + fVar11);
          fVar11 = (float10)FUN_0045d9e0(local_100,&local_148);
          local_cc = (float)(((float10)local_8c - (float10)local_100) + fVar11 + fVar11);
          fVar11 = (float10)FUN_0045d9e0(local_fc,&local_148);
          local_c8 = (float)(((float10)local_88 - (float10)local_fc) + fVar11 + fVar11);
        }
        else {
          fVar11 = (float10)FUN_0045d9e0(local_dc,&local_148);
          local_144 = (float)fVar11;
          fVar11 = (float10)FUN_0045d9e0(fVar2,&local_148);
          local_108 = (float)fVar11;
          fVar11 = (float10)FUN_0045d9e0(fVar9,&local_148);
          local_20 = (float)fVar11;
          fVar11 = (float10)FUN_0045d9e0(local_fc,&local_148);
          local_138 = (float)fVar11;
          fVar11 = (float10)FUN_0045d9e0(local_100,&local_148);
          local_140 = (float)fVar11;
          fVar11 = (float10)FUN_0045d9e0(local_104,&local_148);
          local_130 = local_20 + local_a0;
          local_12c = local_108 + local_9c;
          local_128 = local_144 + local_98;
          local_d0 = (float)(fVar11 + (float10)local_90);
          local_cc = local_140 + local_8c;
          local_c8 = local_138 + local_88;
        }
        fVar11 = (float10)FUN_0045d9e0(local_b0,&local_148);
        local_80 = (float)((fVar11 - (float10)local_64) + (float10)local_30);
        fVar11 = (float10)FUN_0045d9e0(local_ac,&local_148);
        local_7c = (float)((fVar11 - (float10)local_34) + (float10)local_2c);
        fVar11 = (float10)FUN_0045d9e0(local_a8,&local_148);
        local_78 = (float)((fVar11 - (float10)local_5c) + (float10)local_28);
        local_74 = 0x3f800000;
        FUN_006bd920(&local_80,param_1 + 0x20,&local_80);
        fVar11 = (float10)FUN_0045d9e0(local_d4,&local_148);
        local_144 = (float)(fVar11 + (float10)local_118);
        fVar11 = (float10)FUN_0045d9e0(local_f0,&local_148);
        local_138 = (float)(fVar11 + (float10)local_38);
        if (local_114 != _DAT_00890968) {
          fVar11 = (float10)FUN_0045d9e0(local_ec,&local_148);
          local_140 = (float)(fVar11 + (float10)local_114);
          local_b4 = _DAT_00890968;
          if (((float10)_DAT_00890968 < fVar11 + (float10)local_114) &&
             (local_b4 = local_140, _DAT_0089096c < local_140)) {
            local_b4 = 1.0;
          }
          if (local_133 == '\0') {
            FUN_0045f640(&local_130,&local_130,param_1 + 0x60,local_b4);
          }
        }
        uVar5 = FUN_007c4b80();
        local_138 = (float)(uVar5 & 0xfffe);
        uVar5 = SUB42(local_138,0);
        local_132 = FUN_007c4b80();
        if (local_6c != 0.0) {
          uVar5 = uVar5 | (byte)local_148 & 1;
        }
        if (_DAT_00899c94 < local_144) {
          local_144 = 60.0;
        }
        if (((local_134 != '\0') || (DAT_009166c0 < 0x400)) &&
           (iVar7 = FUN_00509710(param_1), iVar7 != 0)) {
          *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
          *(float *)(iVar7 + 0x50) = local_80;
          *(float *)(iVar7 + 0x54) = local_7c;
          *(float *)(iVar7 + 0x58) = local_78;
          *(float *)(iVar7 + 0x14) = local_12c;
          *(float *)(iVar7 + 0x10) = local_130;
          *(float *)(iVar7 + 0x18) = local_128;
          *(float *)(iVar7 + 0x30) = local_d0;
          *(float *)(iVar7 + 0x34) = local_cc;
          *(float *)(iVar7 + 0x38) = local_c8;
          uVar6 = FUN_007c4b80();
          *(undefined2 *)(iVar7 + 0x68) = uVar6;
          *(undefined1 *)(iVar7 + 0x6e) = local_132;
          *(ushort *)(iVar7 + 0x6a) = uVar5;
          fVar11 = (float10)FUN_0045d9e0(local_68,&local_148);
          local_144 = (float)fVar11;
          uVar4 = FUN_007c4b80();
          iVar3 = local_60;
          *(undefined1 *)(iVar7 + 0x6f) = uVar4;
          local_140 = 0.0;
          local_108 = -NAN;
          if (local_139 != '\0') {
            local_138 = (float)(*(int *)(local_60 + 0x90) * *(int *)(local_60 + 0x90));
            local_144 = (float)(int)local_138 - _DAT_0089096c;
            if (local_13a != '\0') {
              FUN_0045da70(local_144);
            }
            uVar6 = FUN_007c4b80();
            *(undefined2 *)(iVar7 + 0x6c) = uVar6;
            uVar8 = FUN_007c4b80(&local_140,&local_108);
            FUN_004febc0(*(undefined4 *)(iVar3 + 0x90),uVar8);
          }
          *(float *)(iVar7 + 0x60) = local_140;
          *(float *)(iVar7 + 100) = local_108;
          FUN_004fe7a0(local_54,local_70,iVar7);
        }
        local_f4 = local_f4 + -1;
        fVar9 = local_e4;
      } while (local_f4 != 0);
    }
    *(undefined4 *)(param_1 + 0x14) = local_148;
  }
  return;
}

