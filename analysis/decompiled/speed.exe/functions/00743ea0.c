/* speed.exe 00743ea0 FUN_00743ea0; analysis pseudocode, not buildable source.
 * calls 00768200 FUN_00768200
 * calls 00789c90 FUN_00789c90
 * calls 0040feb0 FUN_0040feb0
 * calls 006cf930 FUN_006cf930
 * calls 0045f490 FUN_0045f490
 * calls 006bed50 thunk_FUN_006bea90
 * calls 006becc0 FUN_006becc0
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 006bd940 FUN_006bd940
 * calls 006bed00 FUN_006bed00
 * calls 006bec70 FUN_006bec70
 * calls 007c4b80 FUN_007c4b80
 * calls 00402690 FUN_00402690
 * calls 00743390 FUN_00743390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00743ea0(int param_1,undefined4 param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  float local_22c;
  undefined1 *local_228;
  float local_224;
  int local_218;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f0;
  int local_1ec [4];
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  float local_190 [8];
  undefined4 local_170 [24];
  float local_110 [16];
  undefined1 local_d0 [204];
  
  _DAT_009b0c64 = param_3[1];
  _DAT_009b0c60 = *param_3;
  _DAT_009b0c68 = param_3[2];
  if (DAT_00925e90 == 6) {
    local_20c = param_3[2];
    local_208 = *param_3;
    local_210 = -param_3[1];
    FUN_00789c90(*(undefined4 *)(param_1 + 0x44),&local_210,0);
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
      fVar12 = (float10)FUN_00768200(&local_210);
      *(float *)(param_1 + 0x1178) = (float)fVar12;
      _DAT_009b099c = (float)((float10)param_3[2] - fVar12);
    }
  }
  _DAT_009b09a0 = 0.0;
  if ((_DAT_009b099c <= _DAT_00890968) || (_DAT_008b2f28 <= _DAT_009b099c)) {
    if (_DAT_008b2f28 < _DAT_009b099c) {
      _DAT_009b09a0 = 1.0;
    }
  }
  else {
    _DAT_009b09a0 = _DAT_009b099c * _DAT_00890f14;
  }
  bVar11 = DAT_00925e90 == 3;
  fVar2 = _DAT_0089096c;
  if (**(int **)(param_1 + 0x84) == 4) {
    fVar2 = _DAT_00903660;
  }
  local_1fc = *(float *)(param_1 + 0x94) * fVar2 * _DAT_008b2ea0;
  local_1ec[0] = (int)(*(float *)(param_1 + 0xa4) * fVar2 * _DAT_008b2ea0);
  local_200 = *(float *)(param_1 + 0x90) * fVar2 * _DAT_008b2ea0;
  local_1f0 = *(float *)(param_1 + 0xa0) * fVar2 * _DAT_008b2ea0;
  local_198 = *(undefined4 *)(DAT_009b392c + 0x178);
  local_19c = *(undefined4 *)(DAT_009b392c + 0x174);
  local_1a0 = *(undefined4 *)(DAT_009b392c + 0x170);
  fVar2 = (_DAT_0089096c - *(float *)(DAT_009b392c + 0x188)) * _DAT_008933d4;
  thunk_FUN_006bd940(&local_1b0,param_6,&local_1a0);
  FUN_0045f490(&local_1b0,&local_1b0);
  fVar4 = local_1f0;
  local_1b4 = -(local_1b0 * fVar2);
  local_224 = -(local_1ac * fVar2);
  local_1d4 = ABS(_DAT_00894c30 * local_1b4);
  local_1b8 = ABS(local_224 * _DAT_00894c30);
  if (_DAT_00890968 < local_1b4) {
    local_1b4 = _DAT_00890968;
  }
  if (_DAT_00890968 < local_224) {
    local_224 = _DAT_00890968;
  }
  local_22c = 0.0;
  pfVar6 = local_110;
  pfVar9 = local_190;
  fVar2 = ((float)local_1ec[0] - local_1fc) * _DAT_00894c30;
  local_218 = 4;
  local_1f0 = 0.0;
  local_1ec[0] = 0;
  local_1ec[1] = 0;
  local_1ec[2] = 0;
  local_1d8 = (fVar4 - local_200) * _DAT_00894c30;
  local_224 = local_224 + local_1fc;
  local_1b4 = local_1b4 + local_200;
  do {
    local_228 = (undefined1 *)0x0;
    local_1ec[3] = 4;
    local_1dc = local_1b4;
    do {
      *pfVar6 = local_1dc;
      pfVar6[1] = local_224;
      pfVar6[2] = 0.0;
      *pfVar9 = (float)local_228;
      pfVar9[1] = local_22c;
      FUN_006bd940(pfVar6,param_5,pfVar6);
      pfVar6 = pfVar6 + 4;
      local_1dc = local_1dc + local_1d4 + local_1d8;
      pfVar9 = pfVar9 + 2;
      local_1ec[3] = local_1ec[3] + -1;
      local_228 = (undefined1 *)((float)local_228 + _DAT_00894c30);
    } while (local_1ec[3] != 0);
    local_218 = local_218 + -1;
    local_224 = local_224 + local_1b8 + fVar2;
    local_22c = local_22c + _DAT_00894c30;
  } while (local_218 != 0);
  if (bVar11) {
    pfVar6 = local_110 + 2;
    iVar8 = 0x10;
    do {
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else if (*(int *)(param_1 + 0x44) != 0) {
    local_1f8 = *param_3;
    local_1fc = param_3[2];
    local_200 = -param_3[1];
    *(undefined4 *)(param_1 + 0x7c) = 0x3fa00000;
    FUN_00789c90(*(int *)(param_1 + 0x44),&local_200,0);
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
      _DAT_009b0c70 = 0.0;
      _DAT_009b0c74 = 0.0;
      _DAT_009b0c78 = 1.0;
    }
    else {
      local_210 = 0.0;
      local_20c = 1.0;
      local_208 = 0.0;
      local_204 = 0;
      if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
        local_208 = 0.0;
        local_210 = 0.0;
        local_20c = 1.0;
      }
      else {
        FUN_00402690(&local_210);
      }
      FUN_0040feb0(&local_210,&local_210);
      _DAT_009b0c74 = -local_210;
      _DAT_009b0c70 = local_208;
      _DAT_009b0c78 = local_20c;
    }
    local_1d0 = 0;
    local_1cc = 0;
    local_1c8 = 0.0;
    FUN_006bd940(&local_1d0,param_5,&local_1d0);
    local_1c8 = local_1c8 + _DAT_00892b64;
    *(undefined4 *)(param_1 + 0x7c) = 0x3fa00000;
    local_22c._1_3_ = (uint3)((uint)local_22c >> 8);
    local_22c = (float)CONCAT31(local_22c._1_3_,1);
    local_224 = 0.0;
    pfVar6 = local_110 + 2;
    do {
      local_208 = pfVar6[-2];
      local_20c = *pfVar6;
      local_210 = -pfVar6[-1];
      FUN_00789c90(*(undefined4 *)(param_1 + 0x44),&local_210,local_22c);
      bVar1 = *(byte *)(param_1 + 0x78);
      fVar12 = (float10)FUN_00768200(&local_210);
      *pfVar6 = (float)(fVar12 + (float10)_DAT_00892b64);
      if (((bVar1 & 1) == 0) || (cVar5 = FUN_00743390(pfVar6 + -2), cVar5 == '\0')) {
        local_22c = (float)((uint)local_22c._1_3_ << 8);
        if (**(int **)(param_1 + 0x84) == 4) {
          iVar8 = (int)((int)local_224 + ((int)local_224 >> 0x1f & 3U)) >> 2;
          fVar2 = (&local_1f0)[iVar8];
          *pfVar6 = -100.0;
          (&local_1f0)[iVar8] = (float)((int)fVar2 + 1);
        }
        else {
          local_1c8 = *(float *)(param_1 + 0x1178);
          *pfVar6 = local_1c8;
        }
      }
      else {
        local_22c = (float)CONCAT31(local_22c._1_3_,1);
      }
      local_224 = (float)((int)local_224 + 1);
      pfVar6 = pfVar6 + 4;
    } while ((int)local_224 < 0x10);
  }
  iVar8 = FUN_007c4b80();
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else if (0xfe < iVar8) {
    iVar8 = 0xfe;
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  uVar7 = iVar8 << 0x18 | 0x808080;
  if ((iVar3 != 0) && (iVar8 << 0x18 != 0)) {
    local_228 = local_d0;
    pfVar6 = local_110;
    pfVar9 = local_190;
    puVar10 = local_170;
    local_22c = 0.0;
    do {
      if (local_1ec[(int)local_22c] + (int)(&local_1f0)[(int)local_22c] < 4) {
        cVar5 = thunk_FUN_006bea90(iVar3,8,param_7);
        if (cVar5 != '\0') {
          local_218 = 4;
          do {
            FUN_006bed00(pfVar6);
            FUN_006bec70(uVar7);
            FUN_006becc0(*pfVar9,pfVar9[1]);
            FUN_006bed00(local_228);
            FUN_006bec70(uVar7);
            FUN_006becc0(*puVar10,puVar10[1]);
            local_228 = local_228 + 0x10;
            pfVar6 = pfVar6 + 4;
            pfVar9 = pfVar9 + 2;
            puVar10 = puVar10 + 2;
            local_218 = local_218 + -1;
          } while (local_218 != 0);
          FUN_006cf930(param_2);
        }
      }
      else {
        local_228 = local_228 + 0x40;
        pfVar6 = pfVar6 + 0x10;
        pfVar9 = pfVar9 + 8;
        puVar10 = puVar10 + 8;
      }
      local_22c = (float)((int)local_22c + 1);
    } while ((int)local_22c < 3);
  }
  return;
}

