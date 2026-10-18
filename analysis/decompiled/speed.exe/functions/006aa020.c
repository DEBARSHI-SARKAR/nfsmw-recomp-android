/* speed.exe 006aa020 FUN_006aa020; analysis pseudocode, not buildable source.
 * calls 0068e370 FUN_0068e370
 * calls 006a9b40 FUN_006a9b40
 * calls 0040fe20 FUN_0040fe20
 * calls 007c45f0 FUN_007c45f0
 * calls 0069da90 FUN_0069da90
 * calls 0069e9e0 FUN_0069e9e0
 * calls 006e8de0 FUN_006e8de0
 * calls 00671530 FUN_00671530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006aa020(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  char cStack_185;
  int *local_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float local_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  uint uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int local_114;
  float *pfStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  int *piStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [4];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [4];
  float fStack_7c;
  float fStack_78;
  float afStack_74 [4];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [3];
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  local_128 = param_2[0x30];
  local_1a4 = 0.0;
  local_1a0 = 0.0;
  local_19c = 0.0;
  local_138 = 0.0;
  local_134 = 0.0;
  local_130 = 0.0;
  FUN_0069e9e0(param_2,&local_1a4,&local_138);
  FUN_006a9b40(param_2);
  local_e8 = param_2[0x2b];
  local_114 = 0;
  local_174 = 0.0;
  local_184 = (int *)0x0;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0xcc))();
  if (iVar4 != 0) {
    local_184 = *(int **)(iVar4 + 0xc);
  }
  fVar7 = (float10)FUN_006e8de0();
  fStack_90 = (float)fVar7;
  pfVar2 = *(float **)(param_1 + 200);
  afStack_74[0] = pfVar2[2];
  afStack_74[2] = pfVar2[0xc] * _DAT_008aae8c;
  afStack_74[1] = pfVar2[3];
  fStack_54 = pfVar2[10] * _DAT_008aae8c;
  afStack_b4[0] = pfVar2[0x10] * _DAT_008a9388;
  afStack_d8[0] = _DAT_0089096c - *pfVar2;
  fStack_64 = pfVar2[0xe] * _DAT_008aae8c;
  fStack_5c = pfVar2[4] * _DAT_008a9388;
  afStack_8c[1] = (float)local_184 * _DAT_008a9388;
  afStack_8c[0] = pfVar2[6] * _DAT_008a9388 + afStack_8c[1];
  afStack_74[3] = pfVar2[0xd] * _DAT_008aae8c;
  fStack_50 = pfVar2[0xb] * _DAT_008aae8c;
  afStack_b4[1] = pfVar2[0x11] * _DAT_008a9388;
  afStack_d8[1] = _DAT_0089096c - pfVar2[1];
  fStack_60 = pfVar2[0xf] * _DAT_008aae8c;
  fStack_fc = pfVar2[0x13] * _DAT_008aae8c;
  fStack_58 = pfVar2[5] * _DAT_008a9388;
  local_184 = (int *)(param_1 + 0x1b4);
  afStack_8c[1] = pfVar2[7] * _DAT_008a9388 + afStack_8c[1];
  afStack_8c[2] =
       (*(float *)(*(int *)(param_1 + 0x1b4) + 0x78) - *(float *)(*(int *)(param_1 + 0x1b8) + 0x78))
       * pfVar2[0x12] * _DAT_008aae8c;
  afStack_8c[3] = -afStack_8c[2];
  cStack_185 = '\0';
  fStack_40 = local_138;
  fStack_3c = local_134;
  afStack_38[0] = local_130;
  afStack_38[1] = 1.0;
  afStack_38[2] = local_1a4;
  fStack_2c = local_1a0;
  fStack_28 = local_19c;
  fStack_20 = param_2[8];
  fStack_18 = param_2[10];
  uStack_24 = 0x3f800000;
  fStack_1c = param_2[9];
  fStack_160 = param_2[8];
  uStack_14 = 0x3f800000;
  fStack_15c = param_2[9];
  fStack_158 = param_2[10];
  fStack_7c = (*(float *)(*(int *)(param_1 + 0x1bc) + 0x78) -
              *(float *)(*(int *)(param_1 + 0x1c0) + 0x78)) * fStack_fc;
  fStack_78 = -fStack_7c;
  uStack_154 = 0x3f800000;
  pfStack_110 = afStack_38;
  uStack_4 = 0x3f800000;
  uStack_12c = 0;
  fStack_10 = fStack_160;
  fStack_c = fStack_15c;
  fStack_8 = fStack_158;
  do {
    iVar4 = *local_184;
    uVar6 = uStack_12c >> 1;
    FUN_00671530(param_2 + 0x18,param_2 + 0x14,param_2,param_2 + 0x2c,param_2[0x30],
                 *(undefined4 *)(iVar4 + 0xc4),1,param_2[0x36],param_2[0x21] + param_2[0x21]);
    fStack_198 = *(float *)(iVar4 + 0x3c);
    fStack_194 = *(float *)(iVar4 + 0x40);
    fStack_190 = *(float *)(iVar4 + 0x44);
    fStack_148 = pfStack_110[-2];
    fStack_144 = pfStack_110[-1];
    fStack_140 = *pfStack_110;
    fStack_e4 = fStack_140 * fStack_194;
    fStack_dc = fStack_144 * fStack_190;
    fStack_16c = fStack_e4 - fStack_dc;
    fStack_e0 = fStack_190 * fStack_148;
    fStack_ec = fStack_140 * fStack_198;
    fStack_168 = fStack_e0 - fStack_ec;
    fStack_13c = fStack_144 * fStack_198;
    fStack_150 = fStack_194 * fStack_148;
    fStack_164 = fStack_13c - fStack_150;
    fStack_9c = fStack_16c;
    fStack_98 = fStack_168;
    fStack_94 = fStack_164;
    FUN_0040fe20(&fStack_16c,&fStack_16c);
    fStack_a0 = *(float *)(iVar4 + 0x48);
    fVar1 = fStack_198 * param_2[4] + fStack_190 * param_2[6] + fStack_194 * param_2[5];
    fVar3 = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fVar3 = fVar1, fVar1 < _DAT_00890968)) {
      fVar3 = _DAT_00890968;
    }
    fStack_170 = fVar3 * afStack_8c[uVar6] + *(float *)(iVar4 + 0x48);
    fStack_18c = afStack_74[uVar6 + 6];
    fVar1 = local_174;
    if ((*(float *)(iVar4 + 0x78) == _DAT_00890968) &&
       (fVar1 = fStack_170 - fStack_18c, fStack_170 - fStack_18c < local_174)) {
      fVar1 = local_174;
    }
    local_174 = fVar1;
    if (fStack_170 <= _DAT_00890968) {
      fStack_170 = _DAT_00890968;
    }
    if (fStack_18c < fStack_170) {
      fVar1 = fStack_170 - fStack_18c;
      if (fStack_170 - fStack_18c < local_174) {
        fVar1 = local_174;
      }
      local_174 = fVar1;
      *(float *)(iVar4 + 0x114) = fStack_90;
      fStack_170 = fStack_18c;
    }
    if ((fStack_170 <= _DAT_00890968) || (fVar3 <= _DAT_008f8760)) {
      *(float *)(iVar4 + 0x5c) = DAT_008a2fb4;
      *(float *)(iVar4 + 0x60) = DAT_008a2fb8;
      *(float *)(iVar4 + 100) = DAT_008a2fbc;
      FUN_0068e370(local_128);
    }
    else {
      fStack_14c = _DAT_0089096c / local_128;
      local_114 = local_114 + 1;
      fVar7 = ((float10)fStack_170 - (float10)*(float *)(iVar4 + 0x78)) * (float10)fStack_14c;
      fStack_c4 = (float)fVar7;
      piStack_100 = (int *)((fStack_170 * afStack_74[uVar6] + _DAT_0089096c) * afStack_74[uVar6 + 4]
                           * fStack_170);
      if ((_DAT_008aabe0 < afStack_b4[uVar6]) && (afStack_d8[uVar6] < _DAT_0089096c)) {
        fVar8 = fVar7;
        if (fVar7 < (float10)_DAT_00890968) {
          fVar8 = -fVar7;
        }
        fStack_124 = afStack_b4[uVar6];
        fStack_18c = (float)fVar8;
        if ((float10)fStack_124 < fVar8) {
          fVar7 = (float10)FUN_007c45f0();
          fVar7 = fVar7 * (float10)fStack_124;
          if (fStack_c4 <= _DAT_00890968) {
            fVar7 = -fVar7;
          }
        }
      }
      if (fVar7 <= (float10)_DAT_00890968) {
        fVar1 = afStack_74[uVar6 + 8];
      }
      else {
        fVar1 = afStack_74[uVar6 + 2];
      }
      fVar7 = (float10)fVar1 * fVar7;
      if ((float10)local_e8 * (float10)*(float *)(*(int *)(param_1 + 200) + 0x58) *
          (float10)_DAT_00891608 < fVar7) {
        fVar7 = (float10)_DAT_00890968;
      }
      fVar7 = fVar7 + (float10)afStack_8c[uStack_12c + 2] + (float10)(float)piStack_100;
      if (fVar7 <= (float10)_DAT_00890968) {
        fVar7 = (float10)_DAT_00890968;
      }
      fStack_158 = param_2[6];
      fStack_120 = (float)((float10)param_2[4] * fVar7);
      fStack_11c = (float)((float10)param_2[5] * fVar7);
      fStack_118 = (float)((float10)fStack_158 * fVar7);
      afStack_b4[2] = fStack_dc - fStack_e4;
      afStack_b4[3] = fStack_ec - fStack_e0;
      fStack_a4 = fStack_150 - fStack_13c;
      fStack_180 = afStack_b4[3] * fStack_140 - fStack_a4 * fStack_144;
      fStack_17c = fStack_a4 * fStack_148 - fStack_140 * afStack_b4[2];
      fStack_178 = fStack_144 * afStack_b4[2] - afStack_b4[3] * fStack_148;
      fVar8 = ((float10)fStack_180 * (float10)fStack_198 +
              (float10)fStack_17c * (float10)fStack_194 + (float10)fStack_178 * (float10)fStack_190)
              * (float10)_DAT_00890e98 - (float10)_DAT_008aac70;
      if (fVar8 <= (float10)_DAT_00894b58) {
        fVar8 = (float10)_DAT_00894b58;
      }
      fStack_13c = fStack_164 * *(float *)(iVar4 + 0x94) +
                   fStack_16c * *(float *)(iVar4 + 0x8c) + fStack_168 * *(float *)(iVar4 + 0x90);
      piStack_100 = (int *)(fStack_144 * *(float *)(iVar4 + 0x90) +
                           fStack_148 * *(float *)(iVar4 + 0x8c) +
                           fStack_140 * *(float *)(iVar4 + 0x94));
      afStack_d8[2] = fStack_180;
      afStack_d8[3] = fStack_17c;
      fStack_c8 = fStack_178;
      fVar7 = (float10)FUN_0069da90(fStack_13c,piStack_100,param_2[0x2f],(float)(fVar7 * fVar8),
                                    param_2[0x30]);
      fStack_150 = (float)fVar7;
      fStack_104 = local_e8 * _DAT_008910f0 * fStack_14c * fStack_13c;
      if (fStack_104 < _DAT_00890968) {
        fStack_104 = -fStack_104;
      }
      fStack_14c = -fStack_104;
      if (fStack_150 < fStack_104) {
        fStack_104 = fStack_150;
      }
      if (fStack_104 < fStack_14c) {
        fStack_104 = fStack_14c;
      }
      fStack_10c = fStack_16c * fStack_104;
      fStack_108 = fStack_168 * fStack_104;
      fStack_104 = fStack_164 * fStack_104;
      local_1a4 = fStack_168 * fStack_190 - fStack_164 * fStack_194;
      local_1a0 = fStack_164 * fStack_198 - fStack_190 * fStack_16c;
      local_19c = fStack_194 * fStack_16c - fStack_168 * fStack_198;
      fStack_f8 = local_1a4;
      fStack_f4 = local_1a0;
      fStack_f0 = local_19c;
      fStack_c0 = fStack_10c;
      fStack_bc = fStack_108;
      fStack_b8 = fStack_104;
      fStack_48 = fStack_108;
      fStack_44 = fStack_104;
      FUN_0040fe20(&local_1a4,&local_1a4);
      fVar1 = *(float *)(iVar4 + 0xdc);
      local_1a0 = local_1a0 * fVar1;
      local_19c = local_19c * fVar1;
      local_138 = local_1a4 * fVar1 + fStack_10c + fStack_120;
      *(float *)(iVar4 + 0x5c) = local_138;
      local_134 = fStack_108 + local_1a0 + fStack_11c;
      local_130 = fStack_104 + local_19c + fStack_118;
      *(float *)(iVar4 + 0x60) = local_134;
      *(float *)(iVar4 + 100) = local_130;
      cStack_185 = '\x01';
    }
    if (fStack_170 == _DAT_00890968) {
      *(float *)(iVar4 + 0x68) = local_128 + *(float *)(iVar4 + 0x68);
    }
    else {
      *(undefined4 *)(iVar4 + 0x68) = 0;
    }
    fVar1 = _DAT_00890968;
    if (_DAT_00890968 < fStack_170) {
      fVar1 = fStack_170;
    }
    *(float *)(iVar4 + 0x78) = fVar1;
    uStack_12c = uStack_12c + 1;
    pfStack_110 = pfStack_110 + 4;
    local_184 = local_184 + 1;
  } while (uStack_12c < 4);
  if (cStack_185 != '\0') {
    fStack_194 = DAT_008a2fb8;
    fStack_190 = DAT_008a2fbc;
    fStack_168 = DAT_008a2fb8;
    fStack_164 = DAT_008a2fbc;
    fStack_198 = DAT_008a2fb4;
    fStack_16c = DAT_008a2fb4;
    uVar6 = 0;
    iVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (iVar4 != 0) {
      local_184 = (int *)(param_1 + 0x1b4);
      do {
        iVar4 = *local_184;
        local_1a4 = *(float *)(iVar4 + 0x6c);
        local_19c = *(float *)(iVar4 + 0x74);
        local_1a0 = (*(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x78)) - afStack_8c[uVar6 >> 1];
        fStack_180 = local_1a4 * *param_2 + local_1a0 * param_2[4] + local_19c * param_2[8] +
                     param_2[0xc];
        fStack_17c = local_1a4 * param_2[1] + local_19c * param_2[9] + local_1a0 * param_2[5] +
                     param_2[0xd];
        fStack_178 = local_1a4 * param_2[2] + local_1a0 * param_2[6] + local_19c * param_2[10] +
                     param_2[0xe];
        *(float *)(iVar4 + 0x4c) = fStack_180;
        *(float *)(iVar4 + 0x50) = fStack_17c;
        *(float *)(iVar4 + 0x54) = fStack_178;
        fStack_f0 = fStack_178 - param_2[0x2e];
        fStack_f8 = (fStack_180 - param_2[0x2c]) - param_2[0xc];
        fVar1 = (fStack_17c - param_2[0x2d]) - param_2[0xd];
        uVar6 = uVar6 + 1;
        fStack_120 = fVar1 * *(float *)(iVar4 + 100) -
                     (fStack_f0 - param_2[0xe]) * *(float *)(iVar4 + 0x60);
        fStack_11c = (fStack_f0 - param_2[0xe]) * *(float *)(iVar4 + 0x5c) -
                     fStack_f8 * *(float *)(iVar4 + 100);
        local_184 = local_184 + 1;
        fStack_118 = fStack_f8 * *(float *)(iVar4 + 0x60) - fVar1 * *(float *)(iVar4 + 0x5c);
        fStack_16c = fStack_16c + *(float *)(iVar4 + 0x5c);
        fStack_168 = fStack_168 + *(float *)(iVar4 + 0x60);
        fStack_164 = fStack_164 + *(float *)(iVar4 + 100);
        fStack_198 = fStack_120 + fStack_198;
        fStack_194 = fStack_11c + fStack_194;
        fStack_190 = fStack_118 + fStack_190;
        fStack_10c = fStack_120;
        fStack_108 = fStack_11c;
        fStack_104 = fStack_118;
        uVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      } while (uVar6 < uVar5);
    }
    fVar1 = fStack_198 * param_2[4] + fStack_194 * param_2[5] + fStack_190 * param_2[6];
    fVar3 = fVar1 * *(float *)(*(int *)(param_1 + 0xa0) + 0x4c);
    if (*(short *)(param_2 + 0x32) == 1) {
      fVar3 = fVar3 * _DAT_008aad98;
    }
    fVar3 = fVar3 - fVar1;
    fStack_198 = fVar3 * param_2[4] + fStack_198;
    fStack_194 = fVar3 * param_2[5] + fStack_194;
    fStack_190 = fVar3 * param_2[6] + fStack_190;
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x84))(&fStack_16c,&fStack_198);
  }
  if (_DAT_00890968 < local_174) {
    uVar6 = 0;
    iVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (iVar4 != 0) {
      piStack_100 = (int *)(param_1 + 0x1b4);
      do {
        iVar4 = *piStack_100;
        piStack_100 = piStack_100 + 1;
        *(float *)(iVar4 + 0x50) = local_174 + *(float *)(iVar4 + 0x50);
        uVar6 = uVar6 + 1;
        uVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      } while (uVar6 < uVar5);
    }
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x7c))(local_174);
  }
  iVar4 = local_114;
  if ((local_114 != 0) && (*(int *)(param_1 + 0xfc) == 0)) {
    param_2[0x26] = param_2[0x26] * _DAT_008933d4;
    param_2[0x25] = param_2[0x25] * _DAT_008933d4;
    local_1a4 = param_2[0x24];
    local_1a0 = param_2[0x25];
    local_19c = param_2[0x26];
    param_2[0x18] = local_1a4 * *param_2 + local_1a0 * param_2[4] + local_19c * param_2[8];
    param_2[0x19] = local_1a4 * param_2[1] + local_1a0 * param_2[5] + local_19c * param_2[9];
    param_2[0x1a] = local_1a4 * param_2[2] + local_1a0 * param_2[6] + local_19c * param_2[10];
    (**(code **)(**(int **)(param_1 + 0xe8) + 100))(param_2 + 0x18);
  }
  *(int *)(param_1 + 0xfc) = iVar4;
  return;
}

