/* speed.exe 006ac480 FUN_006ac480; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 007c45f0 FUN_007c45f0
 * calls 0069fb20 FUN_0069fb20
 * calls 00690050 FUN_00690050
 * calls 0069f020 FUN_0069f020
 * calls 00671530 FUN_00671530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ac480(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  char cStack_119;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8 [4];
  float fStack_e8;
  float fStack_e4;
  uint uStack_e0;
  int local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc [3];
  int local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  int *piStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [4];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [4];
  float local_48;
  float local_44;
  float afStack_40 [6];
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
  
  local_b0 = param_2[0x30];
  local_12c = 0.0;
  local_128 = 0.0;
  local_124 = 0.0;
  local_d8 = 0.0;
  local_d4 = 0.0;
  local_d0 = 0.0;
  local_dc = param_1;
  FUN_0069fb20(param_2,&local_12c,&local_d8);
  *(float *)(*(int *)(param_1 + 0x134) + 0xcc) = param_2[0x1f];
  *(float *)(*(int *)(param_1 + 0x138) + 0xcc) = param_2[0x1f];
  piStack_a8 = (int *)(param_1 + 300);
  *(float *)(*(int *)(param_1 + 300) + 200) = param_2[0x17];
  *(float *)(*(int *)(param_1 + 0x130) + 200) = param_2[0x17];
  if (((param_2[0x13] <= _DAT_0089119c) || (param_2[0x17] <= _DAT_008933d4)) ||
     (_DAT_008aac84 <= param_2[0x12] * _DAT_008967e0)) {
    *(float *)(*(int *)(param_1 + 0x134) + 200) = param_2[0x17];
  }
  else {
    *(float *)(*(int *)(param_1 + 0x134) + 200) = param_2[0x17];
  }
  if (((param_2[0x13] <= _DAT_0089119c) || (param_2[0x17] <= _DAT_008933d4)) ||
     (_DAT_008aac84 <= param_2[0x12] * _DAT_008967e0)) {
    *(float *)(*(int *)(param_1 + 0x138) + 200) = param_2[0x17];
  }
  else {
    *(float *)(*(int *)(param_1 + 0x138) + 200) = param_2[0x17];
  }
  local_98 = 0.5;
  if ((*(short *)((int)param_2 + 0xca) == 3) && (*(short *)(param_2 + 0x32) != 1)) {
    if (*(int **)(param_1 + 0xf8) == (int *)0x0) {
      fVar10 = (float10)_DAT_00890968;
    }
    else {
      fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0xf8) + 4))();
    }
    local_98 = (float)(fVar10 * (float10)_DAT_008abcd8 + (float10)_DAT_008aadc0);
  }
  local_94 = param_2[0x2b];
  pfVar9 = *(float **)(param_1 + 200);
  local_48 = pfVar9[2];
  local_cc[0] = pfVar9[0xc] * _DAT_008aae8c;
  local_44 = pfVar9[3];
  local_f8[0] = pfVar9[10] * _DAT_008aae8c;
  local_c0 = 0;
  local_120 = 0.0;
  afStack_90[0] = pfVar9[0x10] * _DAT_008a9388;
  afStack_74[0] = _DAT_0089096c - *pfVar9;
  afStack_58[0] = pfVar9[0xe] * _DAT_008aae8c;
  afStack_58[2] = pfVar9[4] * _DAT_008a9388;
  afStack_90[2] = pfVar9[6] * _DAT_008a9388;
  local_cc[1] = pfVar9[0xd] * _DAT_008aae8c;
  local_f8[1] = pfVar9[0xb] * _DAT_008aae8c;
  afStack_90[1] = pfVar9[0x11] * _DAT_008a9388;
  afStack_74[1] = _DAT_0089096c - pfVar9[1];
  afStack_58[1] = pfVar9[0xf] * _DAT_008aae8c;
  afStack_58[3] = pfVar9[5] * _DAT_008a9388;
  afStack_90[3] = pfVar9[7] * _DAT_008a9388;
  afStack_74[3] =
       (*(float *)(*piStack_a8 + 0x78) - *(float *)(*(int *)(param_1 + 0x130) + 0x78)) *
       pfVar9[0x12] * _DAT_008aae8c;
  fStack_64 = -afStack_74[3];
  afStack_40[0] = local_d8;
  fStack_60 = (*(float *)(*(int *)(param_1 + 0x134) + 0x78) -
              *(float *)(*(int *)(param_1 + 0x138) + 0x78)) * pfVar9[0x13] * _DAT_008aae8c;
  afStack_40[1] = local_d4;
  afStack_40[2] = local_d0;
  afStack_40[3] = 1.0;
  fStack_5c = -fStack_60;
  afStack_40[4] = local_12c;
  afStack_40[5] = local_128;
  fStack_20 = param_2[8];
  fStack_28 = local_124;
  fStack_1c = param_2[9];
  uStack_24 = 0x3f800000;
  fStack_18 = param_2[10];
  fStack_118 = param_2[8];
  fStack_114 = param_2[9];
  uStack_14 = 0x3f800000;
  fStack_110 = param_2[10];
  uStack_10c = 0x3f800000;
  uStack_e0 = 0;
  uStack_4 = 0x3f800000;
  cStack_119 = '\0';
  pfVar9 = afStack_58 + 7;
  fStack_10 = fStack_118;
  fStack_c = fStack_114;
  fStack_8 = fStack_110;
  do {
    iVar2 = *piStack_a8;
    uVar8 = uStack_e0 >> 1;
    FUN_00671530(param_2 + 0x18,param_2 + 0x14,param_2,param_2 + 0x2c,param_2[0x30],
                 *(undefined4 *)(iVar2 + 0xc4),1,param_2[0x36],param_2[0x21] + param_2[0x21]);
    fStack_108 = pfVar9[1] * *(float *)(iVar2 + 0x40) - *pfVar9 * *(float *)(iVar2 + 0x44);
    fStack_80 = fStack_108;
    fStack_104 = pfVar9[-1] * *(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x3c) * pfVar9[1];
    fStack_7c = fStack_104;
    fStack_100 = *(float *)(iVar2 + 0x3c) * *pfVar9 - pfVar9[-1] * *(float *)(iVar2 + 0x40);
    fStack_78 = fStack_100;
    FUN_0040fe20(&fStack_108,&fStack_108);
    afStack_74[2] = *(float *)(iVar2 + 0x48);
    fVar1 = *(float *)(iVar2 + 0x40) * param_2[5] +
            param_2[6] * *(float *)(iVar2 + 0x44) + *(float *)(iVar2 + 0x3c) * param_2[4];
    fVar3 = _DAT_0089096c;
    if ((fVar1 < _DAT_0089096c) && (fVar3 = fVar1, fVar1 < _DAT_00890968)) {
      fVar3 = _DAT_00890968;
    }
    fVar4 = fVar3 * afStack_90[uVar8 + 2] + *(float *)(iVar2 + 0x48);
    fVar1 = afStack_58[uVar8 + 2];
    fVar6 = local_120;
    if ((*(float *)(iVar2 + 0x78) == _DAT_00890968) &&
       (fVar6 = fVar4 - fVar1, fVar4 - fVar1 < local_120)) {
      fVar6 = local_120;
    }
    local_120 = fVar6;
    if (fVar4 <= _DAT_00890968) {
      fVar4 = _DAT_00890968;
    }
    fVar6 = local_120;
    fStack_fc = fVar4;
    if ((fVar1 < fVar4) && (fVar6 = fVar4 - fVar1, fStack_fc = fVar1, fVar4 - fVar1 < local_120)) {
      fVar6 = local_120;
    }
    local_120 = fVar6;
    if ((fStack_fc <= _DAT_008aabe0) || (fVar3 <= _DAT_008f8760)) {
      *(float *)(iVar2 + 0x5c) = DAT_008a2fb4;
      *(float *)(iVar2 + 0x60) = DAT_008a2fb8;
      *(float *)(iVar2 + 100) = DAT_008a2fbc;
      FUN_00690050(local_b0);
    }
    else {
      local_c0 = local_c0 + 1;
      fStack_e8 = _DAT_0089096c / local_b0;
      fVar10 = ((float10)fStack_fc - (float10)*(float *)(iVar2 + 0x78)) *
               (float10)(_DAT_0089096c / local_b0);
      local_f8[3] = (float)fVar10;
      if ((_DAT_008aabe0 < afStack_90[uVar8]) && (afStack_74[uVar8] < _DAT_0089096c)) {
        fVar11 = fVar10;
        if (fVar10 < (float10)_DAT_00890968) {
          fVar11 = -fVar10;
        }
        fStack_ac = afStack_90[uVar8];
        if ((float10)afStack_90[uVar8] < fVar11) {
          fVar10 = (float10)FUN_007c45f0();
          fVar10 = fVar10 * (float10)fStack_ac;
          if (local_f8[3] <= _DAT_00890968) {
            fVar10 = -fVar10;
          }
        }
      }
      local_f8[3] = (fStack_fc * afStack_58[uVar8 + 4] + _DAT_0089096c) * afStack_58[uVar8] *
                    fStack_fc;
      if (fVar10 <= (float10)_DAT_00890968) {
        fVar1 = local_f8[uVar8];
      }
      else {
        fVar1 = local_cc[uVar8];
      }
      fVar10 = (float10)fVar1 * fVar10;
      if ((float10)local_94 * (float10)*(float *)(*(int *)(local_dc + 200) + 0x58) *
          (float10)_DAT_00891608 < fVar10) {
        fVar10 = (float10)_DAT_00890968;
      }
      fVar10 = fVar10 + (float10)afStack_74[uStack_e0 + 3] + (float10)local_f8[3];
      if (fVar10 <= (float10)_DAT_00890968) {
        fStack_e4 = 0.0;
      }
      else {
        fStack_e4 = (float)fVar10;
      }
      fVar1 = fStack_108 * *(float *)(iVar2 + 0x8c) +
              fStack_104 * *(float *)(iVar2 + 0x90) + fStack_100 * *(float *)(iVar2 + 0x94);
      fVar10 = (float10)FUN_0069f020(fVar1,param_2[0x12],param_2[0x12],fStack_e4,param_2[0x30],
                                     local_98);
      local_f8[3] = (float)fVar10;
      fStack_b4 = local_94 * _DAT_008910f0 * fStack_e8 * fVar1;
      if (fStack_b4 < _DAT_00890968) {
        fStack_b4 = -fStack_b4;
      }
      fStack_e8 = -fStack_b4;
      if (local_f8[3] < fStack_b4) {
        fStack_b4 = local_f8[3];
      }
      if (fStack_b4 < fStack_e8) {
        fStack_b4 = fStack_e8;
      }
      fStack_bc = fStack_108 * fStack_b4;
      fStack_b8 = fStack_104 * fStack_b4;
      fStack_b4 = fStack_100 * fStack_b4;
      local_12c = fStack_104 * *(float *)(iVar2 + 0x44) - fStack_100 * *(float *)(iVar2 + 0x40);
      local_128 = fStack_100 * *(float *)(iVar2 + 0x3c) - fStack_108 * *(float *)(iVar2 + 0x44);
      local_124 = fStack_108 * *(float *)(iVar2 + 0x40) - fStack_104 * *(float *)(iVar2 + 0x3c);
      fStack_a4 = local_12c;
      fStack_a0 = local_128;
      fStack_9c = local_124;
      FUN_0040fe20(&local_12c,&local_12c);
      fVar1 = *(float *)(iVar2 + 0xdc);
      local_128 = local_128 * fVar1;
      local_124 = local_124 * fVar1;
      fStack_118 = fStack_e4 * param_2[4];
      fStack_114 = fStack_e4 * param_2[5];
      fStack_110 = fStack_e4 * param_2[6];
      local_d8 = local_12c * fVar1 + fStack_bc + fStack_118;
      local_d4 = local_128 + fStack_b8 + fStack_114;
      local_d0 = local_124 + fStack_b4 + fStack_110;
      *(float *)(iVar2 + 0x5c) = local_d8;
      *(float *)(iVar2 + 0x60) = local_d4;
      *(float *)(iVar2 + 100) = local_d0;
      cStack_119 = '\x01';
    }
    iVar5 = local_dc;
    if (fStack_fc == _DAT_00890968) {
      *(float *)(iVar2 + 0x68) = local_b0 + *(float *)(iVar2 + 0x68);
    }
    else {
      *(undefined4 *)(iVar2 + 0x68) = 0;
    }
    fVar1 = _DAT_00890968;
    if (_DAT_00890968 < fStack_fc) {
      fVar1 = fStack_fc;
    }
    *(float *)(iVar2 + 0x78) = fVar1;
    uStack_e0 = uStack_e0 + 1;
    pfVar9 = pfVar9 + 4;
    piStack_a8 = piStack_a8 + 1;
  } while (uStack_e0 < 4);
  if (cStack_119 != '\0') {
    local_f8[2] = DAT_008a2fbc;
    local_cc[2] = DAT_008a2fbc;
    local_f8[1] = DAT_008a2fb8;
    local_cc[1] = DAT_008a2fb8;
    uVar8 = 0;
    local_f8[0] = DAT_008a2fb4;
    local_cc[0] = DAT_008a2fb4;
    piVar7 = (int *)(local_dc + 300);
    do {
      iVar2 = *piVar7;
      local_12c = *(float *)(iVar2 + 0x6c);
      local_124 = *(float *)(iVar2 + 0x74);
      local_128 = (*(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x78)) -
                  afStack_90[(uVar8 >> 1) + 2];
      fStack_108 = local_124 * param_2[8] + local_12c * *param_2 + local_128 * param_2[4] +
                   param_2[0xc];
      fStack_104 = local_124 * param_2[9] + local_12c * param_2[1] + local_128 * param_2[5] +
                   param_2[0xd];
      fStack_100 = local_128 * param_2[6] + local_12c * param_2[2] + local_124 * param_2[10] +
                   param_2[0xe];
      *(float *)(iVar2 + 0x4c) = fStack_108;
      *(float *)(iVar2 + 0x50) = fStack_104;
      *(float *)(iVar2 + 0x54) = fStack_100;
      fStack_9c = fStack_100 - param_2[0x2e];
      fStack_a4 = (fStack_108 - param_2[0x2c]) - param_2[0xc];
      fVar1 = (fStack_104 - param_2[0x2d]) - param_2[0xd];
      fVar3 = (fStack_100 - param_2[0x2e]) - param_2[0xe];
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
      fStack_118 = fVar1 * *(float *)(iVar2 + 100) - fVar3 * *(float *)(iVar2 + 0x60);
      fStack_bc = fStack_118;
      fStack_114 = fVar3 * *(float *)(iVar2 + 0x5c) - fStack_a4 * *(float *)(iVar2 + 100);
      fStack_b8 = fStack_114;
      fStack_110 = fStack_a4 * *(float *)(iVar2 + 0x60) - fVar1 * *(float *)(iVar2 + 0x5c);
      fStack_b4 = fStack_110;
      local_cc[0] = local_cc[0] + *(float *)(iVar2 + 0x5c);
      local_cc[1] = local_cc[1] + *(float *)(iVar2 + 0x60);
      local_cc[2] = local_cc[2] + *(float *)(iVar2 + 100);
      local_f8[0] = fStack_118 + local_f8[0];
      local_f8[1] = fStack_114 + local_f8[1];
      local_f8[2] = fStack_110 + local_f8[2];
    } while (uVar8 < 4);
    fVar1 = local_f8[0] * param_2[4] + local_f8[1] * param_2[5] + local_f8[2] * param_2[6];
    fVar1 = fVar1 * *(float *)(*(int *)(local_dc + 0xb4) + 0x4c) - fVar1;
    local_f8[0] = fVar1 * param_2[4] + local_f8[0];
    local_f8[1] = fVar1 * param_2[5] + local_f8[1];
    local_f8[2] = fVar1 * param_2[6] + local_f8[2];
    (**(code **)(**(int **)(local_dc + 0xe8) + 0x84))(local_cc,local_f8);
  }
  if (_DAT_00890968 < local_120) {
    *(float *)(*(int *)(iVar5 + 300) + 0x50) = local_120 + *(float *)(*(int *)(iVar5 + 300) + 0x50);
    *(float *)(*(int *)(iVar5 + 0x130) + 0x50) =
         local_120 + *(float *)(*(int *)(iVar5 + 0x130) + 0x50);
    *(float *)(*(int *)(iVar5 + 0x134) + 0x50) =
         local_120 + *(float *)(*(int *)(iVar5 + 0x134) + 0x50);
    *(float *)(*(int *)(iVar5 + 0x138) + 0x50) =
         local_120 + *(float *)(*(int *)(iVar5 + 0x138) + 0x50);
    (**(code **)(**(int **)(iVar5 + 0xe8) + 0x7c))(local_120);
  }
  iVar2 = local_c0;
  if ((local_c0 != 0) && (*(int *)(iVar5 + 0x114) == 0)) {
    param_2[0x25] = param_2[0x25] * _DAT_008933d4;
    local_12c = param_2[0x24];
    local_128 = param_2[0x25];
    local_124 = param_2[0x26];
    param_2[0x18] = local_12c * *param_2 + local_128 * param_2[4] + local_124 * param_2[8];
    param_2[0x19] = local_12c * param_2[1] + local_128 * param_2[5] + local_124 * param_2[9];
    param_2[0x1a] = local_12c * param_2[2] + local_128 * param_2[6] + local_124 * param_2[10];
    (**(code **)(**(int **)(iVar5 + 0xe8) + 100))(param_2 + 0x18);
  }
  *(int *)(iVar5 + 0x114) = iVar2;
  return;
}

