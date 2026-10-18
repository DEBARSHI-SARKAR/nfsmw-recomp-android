/* speed.exe 00678ce0 FUN_00678ce0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00452940 FUN_00452940
 * calls 00673400 FUN_00673400
 * calls 004ab5d0 FUN_004ab5d0
 * calls 0066bcc0 FUN_0066bcc0
 * calls 00407510 FUN_00407510
 * calls 00677f80 FUN_00677f80
 * calls 006269b0 FUN_006269b0
 * calls 00672fe0 FUN_00672fe0
 * calls 0066ba60 FUN_0066ba60
 * calls 0066b970 FUN_0066b970
 * calls 0066bf20 FUN_0066bf20
 * calls 004ab2c0 FUN_004ab2c0
 * calls 0066c3a0 FUN_0066c3a0
 * calls 00407630 FUN_00407630
 * calls 0066c8a0 FUN_0066c8a0
 * calls 00454810 FUN_00454810
 * calls 00407490 FUN_00407490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00678ce0(float *param_1,int param_2,int param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  undefined1 uVar13;
  uint uVar14;
  float10 fVar15;
  float10 fVar16;
  float local_144;
  float local_140;
  float local_13c;
  float local_130;
  int local_118;
  float local_10c;
  int local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [8];
  int local_f0;
  undefined1 local_e4 [8];
  int local_dc;
  undefined1 local_d0 [28];
  int local_b4;
  int local_a0;
  undefined1 local_6c [8];
  float afStack_64 [10];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ac9a;
  local_c = ExceptionList;
  uVar14 = 0;
  ExceptionList = &local_c;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  iVar9 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_004ab2c0(iVar9,0,0);
  local_4 = 0;
  iVar9 = FUN_00454810(0xc92a0142,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_0066b970(iVar9,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar9 = FUN_00454810(0x7a7a3e5,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_004ab5d0(iVar9,0,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar9 = FUN_00454810(0xafa210f0,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_00407490(iVar9,0,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar9 = FUN_00454810(0xbd38d1ca,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_00407510(iVar9,0,0);
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar9 = FUN_00454810(0x36350867,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_0066ba60(iVar9,0,0);
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar9 = FUN_00454810(0xb1669f64,0);
  if (iVar9 == 0) {
    iVar9 = FUN_006269b0(0xc);
  }
  FUN_00407630(iVar9,0,0);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0066c3a0(local_f8,&local_10c);
  fVar15 = (float10)FUN_0066bf20(param_2,0);
  local_104 = *(float *)(local_dc + 0x80);
  fVar1 = (float)(fVar15 * (float10)_DAT_008933d4);
  fVar3 = *(float *)(local_f0 + 0x5c);
  fVar4 = *(float *)(local_f0 + 0x58);
  local_100 = fVar3 * _DAT_008a9398;
  fVar2 = fVar4 * _DAT_008a9398;
  iVar9 = FUN_00452940();
  if (iVar9 == 0) {
    pfVar12 = (float *)FUN_006269b0(4);
  }
  else {
    pfVar12 = (float *)(local_f0 + 0x34);
  }
  fVar6 = *pfVar12 * _DAT_00890958;
  cVar8 = FUN_00673400(local_e4,local_f8,local_d0,local_6c,local_3c,0xc);
  if (((cVar8 == '\0') || (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968))) ||
     (local_104 < _DAT_00890968 != (local_104 == _DAT_00890968))) {
    local_4._0_1_ = 5;
    FUN_0045a430();
    local_4._0_1_ = 4;
    FUN_0045a430();
    local_4._0_1_ = 3;
    FUN_0045a430();
    local_4._0_1_ = 2;
    FUN_0045a430();
    local_4._0_1_ = 1;
    FUN_0045a430();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
    local_4 = 0xffffffff;
    FUN_0045a430();
    uVar13 = 0;
  }
  else {
    fVar5 = *(float *)(*(int *)(param_2 + 8) + 0x38);
    local_140 = 0.0;
    local_13c = 0.0;
    local_118 = 0;
    local_130 = 1.0;
    if (param_3 == 0) {
      local_130 = 0.125;
    }
    if (param_4 == (int *)0x0) {
      local_108 = 0;
    }
    else {
      local_108 = *param_4;
    }
    iVar9 = FUN_0066c8a0(param_2);
    uVar10 = iVar9 - 1;
    local_fc = (fVar2 - local_100) / fVar2;
    fVar1 = _DAT_0089096c / fVar1;
    fVar5 = _DAT_0089096c / fVar5;
    do {
      iVar9 = local_dc;
      uVar11 = FUN_00452940();
      if (uVar14 + 2 < uVar11) {
        pfVar12 = (float *)(iVar9 + 8 + (uVar14 + 2) * 4);
      }
      else {
        pfVar12 = (float *)FUN_006269b0(4);
      }
      fVar2 = local_104 * *pfVar12;
      local_144 = (fVar1 * local_13c * fVar2 * local_fc + local_100) * _DAT_008a9394;
      if (fVar4 <= local_144) {
        local_144 = fVar4;
      }
      if (local_144 < fVar3) {
        local_144 = fVar3;
      }
      if ((uVar14 == 0) && (local_144 <= local_10c)) {
        local_144 = local_10c;
      }
      fVar15 = (float10)FUN_00672fe0(local_f8,local_144);
      fVar16 = (float10)FUN_0066bcc0(local_f8,local_d0,local_144,0x3f800000,0,0);
      fVar15 = (float10)(float)fVar15 * (float10)_DAT_008a938c * (fVar16 + (float10)_DAT_0089096c) *
               (float10)fVar2;
      if ((local_140 < *(float *)(local_b4 + 0x10)) && (_DAT_00890da4 < local_13c)) {
        fVar15 = ((float10)*(float *)(local_b4 + 4) + (float10)_DAT_0089096c) * fVar15;
      }
      fVar2 = (float)((float10)fVar5 * fVar15 * (float10)fVar1);
      if (param_3 != 0) {
        iVar9 = local_108;
        if (local_118 <= local_108) {
          iVar9 = local_118;
        }
        local_118 = local_118 + 1;
        *(float *)(param_3 + iVar9 * 8) = local_13c;
        *(float *)(param_3 + 4 + iVar9 * 8) = fVar2;
      }
      fVar7 = *(float *)(local_a0 + 0x70) * local_13c * local_13c;
      if (fVar7 < _DAT_00890968) {
        fVar7 = -fVar7;
      }
      fVar7 = fVar7 * fVar5;
      local_13c = (fVar2 * local_130 + local_13c) - fVar7 * local_130;
      if ((_DAT_008a9a74 <= local_13c) && (*param_1 < _DAT_00890968 != (*param_1 == _DAT_00890968)))
      {
        *param_1 = local_140;
        local_130 = 1.0;
      }
      if ((fVar6 <= _DAT_00890968) || (local_13c < fVar6)) {
        if ((uVar14 == uVar10) &&
           (((fVar2 < fVar7 || (fVar4 <= local_144)) &&
            (param_1[1] < _DAT_00890968 != (param_1[1] == _DAT_00890968))))) {
          param_1[1] = local_13c;
        }
      }
      else {
        param_1[1] = fVar6;
      }
      local_140 = local_130 + local_140;
      if ((_DAT_00890968 < param_1[1]) && (_DAT_00890968 < *param_1)) break;
      if ((afStack_64[uVar14] <= local_144) && (uVar14 = uVar14 + 1, uVar10 <= uVar14)) {
        uVar14 = uVar10;
      }
    } while (local_140 < _DAT_008970c0);
    if ((uVar14 == uVar10) || (param_1[1] < _DAT_00890968 != (param_1[1] == _DAT_00890968))) {
      param_1[1] = local_13c;
    }
    pfVar12 = (float *)FUN_00454810(0xaacbe2e7,0);
    if (pfVar12 == (float *)0x0) {
      pfVar12 = (float *)FUN_006269b0(4);
    }
    fVar1 = *pfVar12;
    pfVar12 = (float *)FUN_00454810(0xaacbe2e7,1);
    if (pfVar12 == (float *)0x0) {
      pfVar12 = (float *)FUN_006269b0(4);
    }
    fVar3 = *pfVar12;
    local_140 = 0.0;
    local_144 = 0.0;
    iVar9 = 0;
    pfVar12 = (float *)&DAT_008f892c;
    do {
      local_144 = local_144 + *pfVar12;
      fVar15 = (float10)FUN_00677f80(param_2,iVar9);
      fVar4 = *pfVar12;
      pfVar12 = pfVar12 + 3;
      iVar9 = iVar9 + 1;
      local_140 = (float)(fVar15 * (float10)fVar4 + (float10)local_140);
    } while ((int)pfVar12 < 0x8f8980);
    if (_DAT_008a92d4 < local_144) {
      local_140 = local_140 / local_144;
    }
    param_1[2] = (fVar3 - fVar1) * local_140 + fVar1;
    if (param_4 != (int *)0x0) {
      *param_4 = local_118;
    }
    if ((param_1[1] <= _DAT_00890968) || (*param_1 <= _DAT_00890968)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    local_4._0_1_ = 5;
    FUN_0045a430();
    local_4._0_1_ = 4;
    FUN_0045a430();
    local_4._0_1_ = 3;
    FUN_0045a430();
    local_4._0_1_ = 2;
    FUN_0045a430();
    local_4._0_1_ = 1;
    FUN_0045a430();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return uVar13;
}

