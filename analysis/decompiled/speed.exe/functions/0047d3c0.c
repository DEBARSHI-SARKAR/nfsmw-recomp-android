/* speed.exe 0047d3c0 FUN_0047d3c0; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 0064c420 FUN_0064c420
 * calls 0073cfe0 FUN_0073cfe0
 * calls 0047c6f0 FUN_0047c6f0
 * calls 0046f410 FUN_0046f410
 * calls 00470fe0 FUN_00470fe0
 * calls 0045ded0 FUN_0045ded0
 * calls 0047cf00 FUN_0047cf00
 * calls 006cf0a0 FUN_006cf0a0
 * calls 0047bec0 FUN_0047bec0
 * calls 0045db30 FUN_0045db30
 * calls 00468870 FUN_00468870
 * calls 00470a60 FUN_00470a60
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 00478b70 FUN_00478b70
 * calls 007c4b80 FUN_007c4b80
 * calls 0045dbf0 FUN_0045dbf0
 * calls 0047cdd0 FUN_0047cdd0
 * calls 004713c0 FUN_004713c0
 * calls 0064b680 FUN_0064b680
 * calls 006513c0 FUN_006513c0
 * calls 0046f2b0 FUN_0046f2b0
 * calls 004700d0 FUN_004700d0
 * calls 00651980 FUN_00651980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047d3c0(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  float10 fVar8;
  float local_1b4;
  char local_1ad;
  float local_1ac;
  char local_1a5;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  undefined *local_180;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_140 [64];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  cVar3 = FUN_0064b680();
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0xa4) != '\0')) {
    *(undefined1 *)(param_1 + 0xa4) = 0;
    if (_DAT_00890968 < *(float *)(param_1 + 0xb4)) {
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - param_2;
    }
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
    psVar6 = (short *)FUN_004713c0(*(undefined4 *)(param_1 + 0x98));
    iVar7 = *(int *)(param_1 + 0x80);
    local_1b4 = *(float *)(iVar7 + 0xac);
    fVar2 = *(float *)(iVar7 + 0x10) * _DAT_00895078;
    local_1a4 = *(float *)(iVar7 + 0xb0);
    local_1ac = _DAT_00890968;
    if ((_DAT_00890968 < fVar2) && (local_1ac = fVar2, _DAT_0089096c < fVar2)) {
      local_1ac = 1.0;
    }
    FUN_0046f2b0(&local_100,local_1ac);
    if ((((DAT_00904ff9 != '\0') || (DAT_009b0894 != 0)) || (DAT_00904ffa != '\0')) ||
       (DAT_009b0890 != 0)) {
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
    }
    local_160 = 0.0;
    local_15c = 0.0;
    local_158 = 0.0;
    if (*(float *)(param_1 + 0xb4) < _DAT_00890968 != (*(float *)(param_1 + 0xb4) == _DAT_00890968))
    {
      FUN_0047cdd0(&local_160);
    }
    FUN_00478b70(&local_160);
    local_1ac = ABS(local_15c);
    fVar2 = ABS(local_160);
    if (ABS(local_160) <= local_1ac) {
      fVar2 = local_1ac;
    }
    if (((_DAT_009111e0 <= fVar2) &&
        (iVar7 = *(int *)(param_1 + 0x80), _DAT_00890968 < *(float *)(iVar7 + 0xac))) &&
       (*(float *)(param_1 + 0xd0) < *(float *)(iVar7 + 0xac))) {
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar7 + 0xac);
      *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
    }
    if (_DAT_009111e0 <= local_158) {
      local_1ac = (local_158 - _DAT_009111e0) / (_DAT_00894d58 - _DAT_009111e0);
      fVar2 = _DAT_00890968;
      if ((_DAT_00890968 < local_1ac) && (fVar2 = local_1ac, _DAT_0089096c < local_1ac)) {
        fVar2 = _DAT_0089096c;
      }
      if (*(float *)(param_1 + 0xd4) < fVar2) {
        *(float *)(param_1 + 0xd4) = fVar2;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
      }
    }
    iVar7 = *(int *)(param_1 + 0x94);
    *(undefined4 *)(iVar7 + 0x50) = local_f4;
    *(undefined4 *)(iVar7 + 0x7c) = local_f4;
    *(undefined4 *)(iVar7 + 0x24) = local_f4;
    *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x24) = local_f8;
    iVar7 = *(int *)(param_1 + 0x8c);
    *(undefined4 *)(iVar7 + 0x50) = local_fc;
    *(undefined4 *)(iVar7 + 0x7c) = local_fc;
    *(undefined4 *)(iVar7 + 0x24) = local_fc;
    iVar7 = *(int *)(param_1 + 0x90);
    *(float *)(iVar7 + 0x24) = local_60 + local_1a4 + local_1b4;
    *(float *)(iVar7 + 0x50) = local_5c + local_1a4 + local_1b4;
    *(float *)(iVar7 + 0x7c) = local_58 + local_1a4 + local_1b4;
    iVar7 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(iVar7 + 0x50) = local_100;
    *(undefined4 *)(iVar7 + 0x24) = local_100;
    *(undefined4 *)(iVar7 + 0x7c) = local_100;
    FUN_00651980(param_2,0,0);
    FUN_006513c0(param_2,0,0);
    FUN_00651980(param_2,0,0);
    FUN_00651980(param_2,0,0);
    FUN_00651980(param_2,0,0);
    sVar5 = *psVar6;
    if ((((sVar5 == 2) || (sVar5 == 3)) || (sVar5 == 4)) ||
       ((sVar5 == 6 || (local_1ad = '\0', sVar5 == 5)))) {
      local_1ad = '\x01';
    }
    fVar8 = (float10)FUN_0045f340(*(int *)(param_1 + 0x1c) + 0x40,*(int *)(param_1 + 0x80) + 0x20);
    if (DAT_00911020 == 0) {
      *(float *)(*(int *)(param_1 + 0x1c) + 0xb0) = (float)fVar8;
    }
    if (*(char *)(param_1 + 0xa3) == '\0') {
      if ((DAT_00911020 == 0) &&
         (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = 0x41700000, DAT_00911020 == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0x42820000;
      }
    }
    else if ((DAT_00911020 == 0) &&
            (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = 0, DAT_00911020 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = 0;
    }
    FUN_0047cf00(local_50,psVar6,&local_100,*(undefined1 *)(param_1 + 0xa2));
    *(undefined1 *)(param_1 + 0xa2) = 0;
    local_170 = _DAT_0089096c;
    if (*(char *)(param_1 + 0xa1) != '\0') {
      local_170 = _DAT_00890da8;
    }
    local_14c = (*(undefined4 **)(param_1 + 0x94))[0xb];
    local_150 = **(undefined4 **)(param_1 + 0x94);
    local_148 = 0x3f800000;
    if (local_1ad == '\0') {
      iVar7 = *(int *)(param_1 + 0x80);
      local_14c = *(undefined4 *)(iVar7 + 0x74);
      local_150 = *(undefined4 *)(iVar7 + 0x70);
      local_148 = *(undefined4 *)(iVar7 + 0x78);
    }
    pfVar1 = *(float **)(param_1 + 0x88);
    local_198 = pfVar1[0x16];
    local_19c = local_170 * pfVar1[0xb];
    local_1a0 = local_170 * *pfVar1;
    pfVar1 = *(float **)(param_1 + 0x8c);
    local_168 = pfVar1[0x16];
    local_16c = local_170 * pfVar1[0xb];
    local_170 = local_170 * *pfVar1;
    if ((_DAT_00890968 < *(float *)(param_1 + 0xd0)) && (_DAT_00890968 < *(float *)(param_1 + 0xd8))
       ) {
      local_190 = 5;
      local_18c = 0.0;
      local_188 = 1.0;
      local_184 = 0x40800000;
      local_180 = &DAT_008ede8c;
      FUN_0046f410(&local_1b4,*(undefined4 *)(param_1 + 0xd8));
      fVar2 = local_1b4 * *(float *)(param_1 + 0xd0) * _DAT_008910f0;
      local_1a0 = (_DAT_0089096c - fVar2) * local_1a0;
      local_170 = (fVar2 + _DAT_0089096c) * local_170;
    }
    if (_DAT_00890968 < *(float *)(param_1 + 0xd8)) {
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) - param_2;
    }
    if (*(float *)(param_1 + 0xd8) < _DAT_00890968 != (*(float *)(param_1 + 0xd8) == _DAT_00890968))
    {
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    if ((_DAT_00890968 < *(float *)(param_1 + 0xd4)) && (_DAT_00890968 < *(float *)(param_1 + 0xdc))
       ) {
      local_190 = 5;
      local_18c = 0.0;
      local_188 = 1.0;
      local_184 = 0x40800000;
      local_180 = &DAT_0091107c;
      FUN_0046f410(&local_1b4,*(undefined4 *)(param_1 + 0xdc));
      local_198 = (_DAT_0089096c - local_1b4 * *(float *)(param_1 + 0xd4) * _DAT_008910f0) *
                  local_198;
    }
    if (_DAT_00890968 < *(float *)(param_1 + 0xdc)) {
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) - param_2;
    }
    if (*(float *)(param_1 + 0xdc) < _DAT_00890968 != (*(float *)(param_1 + 0xdc) == _DAT_00890968))
    {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    if (local_1ad != '\0') {
      local_1b4 = (float)(DAT_00925ae8 - *(int *)(param_1 + 0xb0)) * _DAT_00890984;
      if (_DAT_00890d44 <= local_1b4) {
        if ((_DAT_0089481c < *(float *)(*(int *)(param_1 + 0x80) + 0x10)) &&
           (*(char *)(*(int *)(param_1 + 0x80) + 0xc2) != '\0')) {
          *(int *)(param_1 + 0xb0) = DAT_00925ae8;
        }
      }
      else {
        local_190 = 9;
        local_18c = 0.0;
        local_188 = 1.5;
        local_184 = 0x40aaaaab;
        local_180 = &DAT_008ede68;
        local_1a4 = 0.0;
        FUN_0046f410(&local_1a4,local_1b4);
        local_1b4 = *(float *)(*(int *)(param_1 + 0x80) + 0x10) * _DAT_00890dc4;
        fVar2 = _DAT_00890968;
        if ((_DAT_00890968 < local_1b4) && (fVar2 = local_1b4, _DAT_0089096c < local_1b4)) {
          fVar2 = _DAT_0089096c;
        }
        local_1a0 = (_DAT_0089096c - fVar2) * ABS(local_1a0) * _DAT_00895074 * local_1a4 + local_1a0
        ;
      }
    }
    local_1a5 = '\0';
    if (local_1ad != '\0') {
      fVar2 = _DAT_00890e04 -
              (float)(DAT_00925ae8 - *(int *)(param_1 + 0xac)) * _DAT_00890984 * _DAT_00891660;
      local_1b4 = _DAT_00890968;
      if ((_DAT_00890968 < fVar2) && (local_1b4 = fVar2, _DAT_00890e04 < fVar2)) {
        local_1b4 = _DAT_00890e04;
      }
      fVar2 = local_1b4;
      if (_DAT_0089096c < local_1b4) {
        fVar2 = _DAT_00890d3c - local_1b4;
      }
      local_198 = local_198 - _DAT_00894604 * fVar2;
      if (_DAT_00890968 < fVar2) {
        local_1a5 = '\x01';
      }
    }
    thunk_FUN_006bd940(&local_1a0,local_50,&local_1a0);
    thunk_FUN_006bd940(&local_170,local_50,&local_170);
    local_18c = local_19c - local_16c;
    local_1a0 = (local_1a0 - local_170) + local_170;
    local_19c = local_18c + local_16c;
    local_198 = (local_198 - local_168) + local_168;
    local_188 = local_198;
    uVar4 = FUN_007c4b80();
    fVar8 = (float10)FUN_0045db30(uVar4 >> 1);
    local_1b4 = (float)fVar8;
    fVar8 = (float10)FUN_0045dbf0(uVar4 >> 1);
    local_1b4 = (float)((float10)local_1b4 / fVar8);
    sVar5 = FUN_0045ded0(0x3f800000,local_1b4);
    if (DAT_00911020 == 0) {
      *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) = sVar5 << 1;
    }
    FUN_006cf0a0(local_140,&local_1a0,&local_170,&local_150);
    FUN_0064c420(*(undefined4 *)(param_1 + 0x10),local_140);
    FUN_00468870(local_140,*(undefined4 *)(&DAT_00911060 + *(int *)(param_1 + 0x9c) * 4),1);
    iVar7 = FUN_0073cfe0(&DAT_009195e0 + *(int *)(param_1 + 0x10) * 0x1c,1);
    if (iVar7 == 0) {
      local_1b4 = *(float *)(*(int *)(param_1 + 0x80) + 0x10) * _DAT_008934e0;
      fVar2 = _DAT_00890968;
      if ((_DAT_00890968 < local_1b4) && (fVar2 = local_1b4, _DAT_0089096c < local_1b4)) {
        fVar2 = _DAT_0089096c;
      }
      FUN_00470a60(local_140,
                   (_DAT_0089096c - fVar2 * _DAT_00894610) *
                   *(float *)(&DAT_008ede00 + *(int *)(param_1 + 0x9c) * 4),1);
    }
    iVar7 = *(int *)(param_1 + 0x9c) * 4;
    FUN_0047bec0(local_140,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(&DAT_008ede1c + iVar7),
                 *(undefined4 *)(&DAT_008ede38 + iVar7));
    if ((local_1ad != '\0') &&
       (FUN_00470fe0(local_140,*(int *)(param_1 + 0x80) + 0x20), local_1a5 == '\0')) {
      FUN_0047c6f0(local_140,*(int *)(param_1 + 0x80) + 0x20,*(int *)(param_1 + 0x80));
    }
    FUN_004700d0(local_140,param_2);
  }
  return;
}

