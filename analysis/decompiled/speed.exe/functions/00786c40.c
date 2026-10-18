/* speed.exe 00786c40 FUN_00786c40; analysis pseudocode, not buildable source.
 * calls 00503b60 FUN_00503b60
 * calls 0045a430 FUN_0045a430
 * calls 00503c00 FUN_00503c00
 * calls 0045beb0 FUN_0045beb0
 * calls 00770b90 FUN_00770b90
 * calls 004560d0 FUN_004560d0
 * calls 00503bc0 FUN_00503bc0
 * calls 004ba050 FUN_004ba050
 * calls 00452bd0 FUN_00452bd0
 * calls 00784ec0 FUN_00784ec0
 * calls 007689e0 FUN_007689e0
 * calls 0050c7b0 FUN_0050c7b0
 * calls 00768980 FUN_00768980
 * calls 00781e10 FUN_00781e10
 * calls 0076c3e0 FUN_0076c3e0
 * calls 00762380 FUN_00762380
 * calls 00452410 FUN_00452410
 * calls 00410220 FUN_00410220
 * calls 00454c30 FUN_00454c30
 * calls 00444fa0 FUN_00444fa0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 * calls 00779430 FUN_00779430
 * calls 00452b30 FUN_00452b30
 * calls 00770c20 FUN_00770c20
 * calls 0045e240 FUN_0045e240
 * calls 0045a8a0 FUN_0045a8a0
 * calls 00768570 FUN_00768570
 * calls 00452380 FUN_00452380
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00786c40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  float10 fVar13;
  float10 fVar14;
  uint local_1d8;
  int local_1d0;
  float local_1cc;
  int local_1c8;
  int local_1c4;
  float local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  float *local_1a0;
  int local_19c;
  float local_198;
  int local_190;
  int local_180;
  float local_17c;
  int local_178;
  undefined1 local_164 [12];
  int *local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  int local_140;
  float local_13c;
  undefined4 local_138;
  int local_100;
  float local_fc;
  int local_f8;
  int local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b0 [16];
  undefined1 local_a0 [64];
  undefined1 local_60 [68];
  void *pvStack_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_008822cd;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_00768570(*(undefined4 *)(param_1 + 0x20),0,0);
  local_14 = 0;
  if (local_190 != 0) {
    local_1d8 = 0;
    FUN_00452380(*(undefined4 *)(param_1 + 0x24),0,0);
    local_14._0_1_ = 1;
    iVar7 = FUN_00452410();
    if (iVar7 == 0x4a97ec8f) {
      local_1d8 = 0x10000000;
    }
    else if (iVar7 == -0x318f2825) {
      local_1d8 = 0x20000000;
    }
    FUN_00452380(*(undefined4 *)(param_1 + 0x28),0,0);
    local_14 = CONCAT31(local_14._1_3_,2);
    iVar7 = FUN_00452410();
    if (iVar7 == -0x4eee011) {
      local_1d8 = local_1d8 | 0x1000000;
    }
    else {
      local_1d8 = local_1d8 | 0x2000000;
    }
    local_180 = *(int *)(param_1 + 0xc);
    local_178 = *(int *)(param_1 + 8);
    local_17c = -*(float *)(param_1 + 4);
    fVar13 = (float10)FUN_004ba050(&local_180);
    fVar1 = (float)fVar13;
    pfVar8 = (float *)FUN_00454810(0x98dba438,0);
    if (pfVar8 == (float *)0x0) {
      pfVar8 = (float *)FUN_006269b0(4);
    }
    fVar2 = *pfVar8;
    pfVar8 = (float *)FUN_00454810(0x1a2f2b1b,0);
    if (pfVar8 == (float *)0x0) {
      pfVar8 = (float *)FUN_006269b0(4);
    }
    fVar3 = *pfVar8;
    if ((fVar1 <= fVar2) || (fVar1 <= fVar3)) {
      local_1a4 = 0x3f800000;
      local_1a8 = 0;
      local_1b8 = 0.0;
      local_1d0 = 0;
      local_1ac = 0;
      local_1a0 = (float *)0x0;
      local_19c = 0;
      local_1b4 = 0x3f800000;
      local_1b0 = 0;
      local_1c4 = 0;
      local_1cc = 1.0;
      local_1c8 = 0;
      FUN_00452b30();
      local_14 = CONCAT31(local_14._1_3_,3);
      cVar6 = FUN_00770c20(local_164);
      if (cVar6 != '\0') {
        piVar9 = local_158;
        if ((local_158 == (int *)0x0) && (piVar9 = (int *)FUN_00454c30(0), piVar9 == (int *)0x0)) {
          piVar9 = (int *)FUN_006269b0(0x10);
        }
        local_1a8 = *piVar9;
        local_1a4 = piVar9[1];
        local_1a0 = (float *)piVar9[2];
        local_19c = piVar9[3];
      }
      cVar6 = FUN_00770b90(local_164);
      if (cVar6 != '\0') {
        if ((local_158 == (int *)0x0) &&
           (local_158 = (int *)FUN_00454c30(0), local_158 == (int *)0x0)) {
          local_158 = (int *)FUN_006269b0(0x10);
        }
        local_1d0 = *local_158;
        local_1cc = (float)local_158[1];
        local_1c8 = local_158[2];
        local_1c4 = local_158[3];
      }
      local_1b8 = *(float *)(param_1 + 0x14);
      local_1b4 = *(undefined4 *)(param_1 + 0x18);
      local_1b0 = *(int *)(param_1 + 0x1c);
      fVar13 = (float10)FUN_00410220(&local_1b8);
      fVar14 = (float10)FUN_00768980((float)fVar13,&local_1a8);
      local_198 = (float)fVar14;
      fVar13 = (float10)FUN_00768980((float)fVar13,&local_1d0);
      fVar4 = (float)fVar13;
      if ((local_198 < _DAT_00890968 == (local_198 == _DAT_00890968)) ||
         (fVar4 < _DAT_00890968 == (fVar4 == _DAT_00890968))) {
        iVar7 = *(int *)(param_1 + 0x10);
        local_1a4 = 0;
        local_1a0 = (float *)0x0;
        local_1a8 = iVar7;
        if (iVar7 != 0) {
          local_1a4 = FUN_00784ec0(iVar7);
          local_1a0 = (float *)(local_1a4 + 0x40);
          local_19c = local_1a4 + 0x50;
        }
        pfVar8 = local_1a0;
        DAT_009b391c = DAT_009b391c + 1;
        local_14._0_1_ = 4;
        local_150 = 0.0;
        local_14c = 0.0;
        local_148 = 0.0;
        pfVar10 = (float *)FUN_00454810(&DAT_0099cb26,0);
        if (pfVar10 == (float *)0x0) {
          pfVar10 = (float *)FUN_006269b0(4);
        }
        fVar5 = *pfVar10;
        if ((local_1a4 != 0) && (_DAT_00890968 < fVar5)) {
          local_154 = pfVar8[2];
          local_150 = *pfVar8 * fVar5;
          local_14c = pfVar8[1] * fVar5;
          local_148 = local_154 * fVar5;
        }
        fVar5 = -local_1b8;
        local_140 = local_1b0;
        local_138 = local_1b4;
        local_13c = fVar5;
        if ((_DAT_00890968 < local_198) && (fVar1 <= fVar3)) {
          iVar11 = FUN_00454810(0xaba86e60,0);
          if (iVar11 == 0) {
            FUN_006269b0(0xc);
          }
          uVar12 = FUN_004560d0();
          iVar11 = FUN_0050c7b0(uVar12,local_1d8 | 0x400000);
          if (iVar11 != 0) {
            FUN_00762380();
            FUN_0076c3e0(&DAT_008b5da4,&local_1b8);
            FUN_005ca910(local_b0,local_60);
            FUN_0045e240(local_a0,local_60);
            local_1d0 = local_180;
            local_1c8 = local_178;
            local_1cc = local_17c;
            local_1c4 = 0x3f800000;
            FUN_00444fa0(&local_1d0);
            *(float *)(iVar11 + 0x68) = local_198;
            FUN_00503b60(1);
            *(uint *)(iVar11 + 0x18) = *(uint *)(iVar11 + 0x18) | 1;
            FUN_00503bc0(local_a0);
            FUN_00503c00(&local_150);
          }
        }
        if ((_DAT_00890968 < fVar4) && (fVar1 <= fVar2)) {
          local_cc = 0;
          local_c8 = 0;
          local_c4 = 0;
          local_100 = local_180;
          local_fc = local_17c;
          local_f0 = local_1b0;
          local_f8 = local_178;
          local_e8 = local_1b4;
          local_c0 = *(undefined4 *)(param_1 + 0x10);
          local_14._0_1_ = 5;
          local_ec = fVar5;
          local_d0 = fVar4;
          uVar12 = FUN_007689e0(&local_1b8,local_1a4);
          local_14._0_1_ = 6;
          FUN_0045beb0(uVar12);
          local_14 = CONCAT31(local_14._1_3_,5);
          if (local_1b0 != 0) {
            FUN_0045a8a0();
          }
          local_bc = *(undefined4 *)(param_1 + 0x2c);
          piVar9 = (int *)FUN_00779430(&local_100);
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 4))();
          }
          local_14._0_1_ = 4;
          iVar7 = local_1a8;
          if (local_c4 != 0) {
            FUN_0045a8a0();
            iVar7 = local_1a8;
          }
        }
        local_14 = CONCAT31(local_14._1_3_,3);
        if ((local_1a4 != 0) && (iVar7 != 0)) {
          FUN_00781e10(iVar7);
        }
        DAT_009b391c = DAT_009b391c + -1;
      }
      local_14 = CONCAT31(local_14._1_3_,2);
      FUN_00452bd0();
    }
    local_14._0_1_ = 1;
    FUN_0045a430();
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_0045a430();
  }
  local_14 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_1c;
  return 0;
}

