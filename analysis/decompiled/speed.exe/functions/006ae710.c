/* speed.exe 006ae710 FUN_006ae710; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 0040fe20 FUN_0040fe20
 * calls 007c45f0 FUN_007c45f0
 * calls 00690da0 FUN_00690da0
 * calls 006e8de0 FUN_006e8de0
 * calls 00486610 FUN_00486610
 * calls 00691860 FUN_00691860
 * calls 00671530 FUN_00671530
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ae710(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  float10 fVar16;
  float10 fVar17;
  float local_1c0;
  float local_1bc;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  int local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  uint local_160;
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
  float *local_134;
  int *local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float *local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc [4];
  float local_ac;
  float local_a8;
  float local_a4 [4];
  float local_94 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_104 = *(float *)(param_2 + 0xc0);
  local_188 = 0.0;
  local_184 = 0.0;
  local_180 = 0.0;
  local_194 = 0.0;
  local_190 = 0.0;
  local_18c = 0.0;
  FUN_00691860(param_2,&local_188,&local_194);
  local_a8 = *(float *)(param_2 + 0xac);
  local_17c = 0;
  local_1c0 = 0.0;
  FUN_00401670(param_2 + 0x70,param_2,local_c);
  FUN_006e8de0();
  pfVar3 = *(float **)(param_1 + 0xb4);
  local_94[0] = pfVar3[2];
  local_74 = pfVar3[0xc] * _DAT_008aae8c;
  local_94[2] = pfVar3[10] * _DAT_008aae8c;
  local_e0[0] = pfVar3[0x10] * _DAT_008a9388;
  local_bc[0] = _DAT_0089096c - *pfVar3;
  local_7c = pfVar3[0xe] * _DAT_008aae8c;
  local_6c = pfVar3[4] * _DAT_008a9388;
  local_84 = pfVar3[6] * _DAT_008a9388;
  local_70 = pfVar3[0xd] * _DAT_008aae8c;
  local_94[3] = pfVar3[0xb] * _DAT_008aae8c;
  local_e0[1] = pfVar3[0x11] * _DAT_008a9388;
  local_bc[1] = _DAT_0089096c - pfVar3[1];
  local_78 = pfVar3[0xf] * _DAT_008aae8c;
  local_68 = pfVar3[5] * _DAT_008a9388;
  local_94[1] = pfVar3[3];
  local_80 = pfVar3[7] * _DAT_008a9388;
  local_4c = local_194;
  local_a4[0] = (*(float *)(*(int *)(param_1 + 0x180) + 0x78) -
                *(float *)(*(int *)(param_1 + 0x184) + 0x78)) * pfVar3[0x12] * _DAT_008aae8c;
  local_44[1] = 1.0;
  local_a4[1] = -local_a4[0];
  local_34 = local_180;
  local_a4[2] = (*(float *)(*(int *)(param_1 + 0x188) + 0x78) -
                *(float *)(*(int *)(param_1 + 0x18c) + 0x78)) * pfVar3[0x13] * _DAT_008aae8c;
  local_48 = local_190;
  local_44[0] = local_18c;
  local_44[2] = local_188;
  local_a4[3] = -local_a4[2];
  local_38 = local_184;
  local_2c = *(undefined4 *)(param_2 + 0x20);
  local_28 = *(undefined4 *)(param_2 + 0x24);
  local_30 = 0x3f800000;
  local_24 = *(undefined4 *)(param_2 + 0x28);
  local_1c = *(undefined4 *)(param_2 + 0x20);
  local_18 = *(undefined4 *)(param_2 + 0x24);
  local_20 = 0x3f800000;
  local_14 = *(undefined4 *)(param_2 + 0x28);
  local_10 = 0x3f800000;
  FUN_00486610(param_2 + 0x70,param_2,local_94 + 0xc);
  local_150 = DAT_008a2fb4;
  local_14c = DAT_008a2fb8;
  local_144 = DAT_008a2fb4;
  local_140 = DAT_008a2fb8;
  local_134 = local_44;
  local_130 = (int *)(param_1 + 0x180);
  local_148 = DAT_008a2fbc;
  local_13c = DAT_008a2fbc;
  bVar10 = false;
  local_160 = 0;
  do {
    iVar12 = *local_130;
    uVar14 = local_160 >> 1;
    FUN_00671530(param_2 + 0x60,param_2 + 0x50,param_2,local_c,*(undefined4 *)(param_2 + 0xc0),
                 *(undefined4 *)(iVar12 + 0xcc),1,*(undefined4 *)(param_2 + 0xd8),
                 *(float *)(param_2 + 0x84) + *(float *)(param_2 + 0x84));
    local_164 = *(float *)(iVar12 + 0x44);
    local_16c = *(float *)(iVar12 + 0x3c);
    local_168 = *(float *)(iVar12 + 0x40);
    fVar4 = local_134[-2];
    fVar5 = local_134[-1];
    fVar6 = *local_134;
    local_100 = fVar6 * local_168;
    local_108 = fVar5 * local_164;
    local_11c = local_100 - local_108;
    local_10c = local_164 * fVar4;
    local_110 = fVar6 * local_16c;
    local_118 = local_10c - local_110;
    fVar2 = fVar5 * local_16c;
    fVar7 = local_168 * fVar4;
    local_114 = fVar2 - fVar7;
    local_f8 = local_11c;
    local_f4 = local_118;
    local_f0 = local_114;
    FUN_0040fe20(&local_11c,&local_11c);
    local_cc = *(float *)(iVar12 + 0x48);
    fVar1 = local_16c * *(float *)(param_2 + 0x10) +
            local_164 * *(float *)(param_2 + 0x18) + local_168 * *(float *)(param_2 + 0x14);
    fVar8 = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fVar8 = fVar1, fVar1 < _DAT_00890968)) {
      fVar8 = _DAT_00890968;
    }
    local_fc = local_94 + uVar14 + 4;
    fVar9 = fVar8 * *local_fc + *(float *)(iVar12 + 0x48);
    fVar1 = local_94[uVar14 + 10];
    fVar11 = local_1c0;
    if ((*(float *)(iVar12 + 0x78) == _DAT_00890968) &&
       (fVar11 = fVar9 - fVar1, fVar9 - fVar1 < local_1c0)) {
      fVar11 = local_1c0;
    }
    local_1c0 = fVar11;
    if (fVar9 <= _DAT_00890968) {
      fVar9 = _DAT_00890968;
    }
    fVar11 = local_1c0;
    local_1bc = fVar9;
    if ((fVar1 < fVar9) && (fVar11 = fVar9 - fVar1, local_1bc = fVar1, fVar9 - fVar1 < local_1c0)) {
      fVar11 = local_1c0;
    }
    local_1c0 = fVar11;
    if ((local_1bc <= _DAT_00890968) || (fVar8 <= _DAT_008f8760)) {
      *(float *)(iVar12 + 0x5c) = DAT_008a2fb4;
      *(float *)(iVar12 + 0x60) = DAT_008a2fb8;
      *(float *)(iVar12 + 100) = DAT_008a2fbc;
      *(undefined4 *)(iVar12 + 0xd4) = 0;
      *(undefined4 *)(iVar12 + 0xdc) = 0;
      if (*(char *)(iVar12 + 0xc4) != '\0') {
        *(undefined4 *)(iVar12 + 0xd0) = 0;
      }
    }
    else {
      local_17c = local_17c + 1;
      fVar16 = ((float10)local_1bc - (float10)*(float *)(iVar12 + 0x78)) / (float10)local_104;
      local_12c = (float)fVar16;
      if ((_DAT_008aabe0 < local_e0[uVar14]) && (local_bc[uVar14] < _DAT_0089096c)) {
        fVar17 = fVar16;
        if (fVar16 < (float10)_DAT_00890968) {
          fVar17 = -fVar16;
        }
        local_138 = local_e0[uVar14];
        if ((float10)local_138 < fVar17) {
          fVar16 = (float10)FUN_007c45f0();
          fVar16 = fVar16 * (float10)local_138;
          if (local_12c <= _DAT_00890968) {
            fVar16 = -fVar16;
          }
        }
      }
      local_12c = (local_1bc * local_94[uVar14] + _DAT_0089096c) * local_94[uVar14 + 6] * local_1bc;
      if (fVar16 <= (float10)_DAT_00890968) {
        fVar1 = local_94[uVar14 + 2];
      }
      else {
        fVar1 = local_94[uVar14 + 8];
      }
      fVar16 = (float10)fVar1 * fVar16;
      if ((float10)local_a8 * (float10)*(float *)(*(int *)(param_1 + 0xb4) + 0x58) *
          (float10)_DAT_00891608 < fVar16) {
        fVar16 = (float10)_DAT_00890968;
      }
      fVar16 = fVar16 + (float10)local_a4[local_160] + (float10)local_12c;
      if (fVar16 <= (float10)_DAT_00890968) {
        fVar16 = (float10)_DAT_00890968;
      }
      local_194 = (float)((float10)*(float *)(param_2 + 0x10) * fVar16);
      local_190 = (float)((float10)*(float *)(param_2 + 0x14) * fVar16);
      local_18c = (float)((float10)*(float *)(param_2 + 0x18) * fVar16);
      local_ec = local_108 - local_100;
      local_e8 = local_110 - local_10c;
      local_e4 = fVar7 - fVar2;
      local_178 = local_e8 * fVar6 - local_e4 * fVar5;
      local_174 = local_e4 * fVar4 - fVar6 * local_ec;
      local_170 = fVar5 * local_ec - local_e8 * fVar4;
      fVar17 = ((float10)local_178 * (float10)local_16c +
               (float10)local_174 * (float10)local_168 + (float10)local_170 * (float10)local_164) *
               (float10)_DAT_00890e98 - (float10)_DAT_008aac70;
      if (fVar17 <= (float10)_DAT_00894b58) {
        fVar17 = (float10)_DAT_00894b58;
      }
      fVar2 = (float)(fVar16 * fVar17);
      fVar7 = local_118 * *(float *)(iVar12 + 0x90) +
              local_11c * *(float *)(iVar12 + 0x8c) + local_114 * *(float *)(iVar12 + 0x94);
      fVar1 = fVar5 * *(float *)(iVar12 + 0x90) +
              fVar4 * *(float *)(iVar12 + 0x8c) + fVar6 * *(float *)(iVar12 + 0x94);
      local_50 = _DAT_0089096c / *(float *)(param_2 + 0xc0);
      local_58 = (fVar7 - *(float *)(iVar12 + 0xe0)) * local_50;
      local_50 = (fVar1 - *(float *)(iVar12 + 0xd8)) * local_50;
      local_e0[2] = local_178;
      local_e0[3] = local_174;
      local_d0 = local_170;
      FUN_00690da0(fVar7,fVar1,fVar2,*(undefined4 *)(param_2 + 0xc0));
      fVar7 = *(float *)(param_2 + 0xac) * _DAT_008910f0;
      fVar1 = local_58 * fVar7;
      fVar8 = fVar7 * local_50;
      fVar9 = -fVar1;
      local_15c = fVar4 * fVar8 + local_11c * fVar9;
      local_158 = fVar5 * fVar8 + local_118 * fVar9;
      local_154 = fVar6 * fVar8 + local_114 * fVar9;
      fVar16 = (float10)FUN_005c5e80(fVar1 * fVar1 +
                                     fVar8 * fVar8 + fVar7 * _DAT_00890968 * fVar7 * _DAT_00890968);
      if (fVar16 <= (float10)fVar2 *
                    (float10)*(float *)(*(int *)(param_1 + 0xa0) + 0x38 + uVar14 * 4)) {
        fVar16 = (float10)local_154;
      }
      else {
        fVar16 = ((float10)*(float *)(*(int *)(param_1 + 0xa0) + 0x20 + uVar14 * 4) / fVar16) *
                 (float10)fVar2;
        local_15c = (float)((float10)local_15c * fVar16);
        local_158 = (float)((float10)local_158 * fVar16);
        fVar16 = fVar16 * (float10)local_154;
      }
      local_128 = *(float *)(iVar12 + 0x6c);
      local_188 = local_15c + local_194;
      local_120 = *(float *)(iVar12 + 0x74);
      local_184 = local_158 + local_190;
      local_180 = (float)(fVar16 + (float10)local_18c);
      local_124 = (*(float *)(iVar12 + 0x70) + *(float *)(iVar12 + 0x78)) - *local_fc;
      FUN_00486610(&local_128,param_2,&local_128);
      *(float *)(iVar12 + 0x4c) = local_128;
      *(float *)(iVar12 + 0x50) = local_124;
      *(float *)(iVar12 + 0x54) = local_120;
      local_c8 = (local_124 - local_60) * local_180 - (local_120 - local_5c) * local_184;
      local_c4 = (local_120 - local_5c) * local_188 - local_180 * (local_128 - local_64);
      local_c0 = local_184 * (local_128 - local_64) - (local_124 - local_60) * local_188;
      local_144 = local_144 + local_c8;
      local_140 = local_c4 + local_140;
      local_13c = local_c0 + local_13c;
      local_150 = local_194 + local_150;
      local_14c = local_14c + local_190;
      bVar10 = true;
      local_148 = local_18c + local_148;
      local_bc[2] = local_c8;
      local_bc[3] = local_c4;
      local_ac = local_c0;
    }
    if (local_1bc == _DAT_00890968) {
      *(float *)(iVar12 + 0x68) = local_104 + *(float *)(iVar12 + 0x68);
    }
    else {
      *(undefined4 *)(iVar12 + 0x68) = 0;
    }
    fVar4 = _DAT_00890968;
    if (_DAT_00890968 < local_1bc) {
      fVar4 = local_1bc;
    }
    *(float *)(iVar12 + 0x78) = fVar4;
    local_160 = local_160 + 1;
    local_134 = local_134 + 4;
    local_130 = local_130 + 1;
  } while (local_160 < 4);
  if (bVar10) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 0xa4))(&local_144,0);
    (**(code **)(**(int **)(param_1 + 0xd4) + 0xa4))(&local_158,0);
    local_150 = 0.0;
    local_160 = 0;
    local_158 = 0.0;
    (**(code **)(**(int **)(param_1 + 0xd4) + 0xa0))(&local_154,0);
    (**(code **)(**(int **)(param_1 + 0xd4) + 0xa0))(&local_168,0);
    (**(code **)(**(int **)(param_1 + 0xd4) + 0x84))(&local_170,&local_164);
  }
  if (local_1c0 <= _DAT_00890968) {
    *(int *)(param_1 + 0xe4) = local_17c;
    return;
  }
  uVar14 = 0;
  iVar12 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  if (iVar12 != 0) {
    piVar15 = (int *)(param_1 + 0x180);
    do {
      iVar12 = *piVar15;
      uVar14 = uVar14 + 1;
      piVar15 = piVar15 + 1;
      *(float *)(iVar12 + 0x50) = local_1c0 + *(float *)(iVar12 + 0x50);
      uVar13 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    } while (uVar14 < uVar13);
  }
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x7c))(local_1c0);
  *(float *)(param_1 + 0xe4) = local_180;
  return;
}

