/* speed.exe 00673810 FUN_00673810; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00404db0 FUN_00404db0
 * calls 00452940 FUN_00452940
 * calls 00653770 FUN_00653770
 * calls 004ab5d0 FUN_004ab5d0
 * calls 00407510 FUN_00407510
 * calls 006269b0 FUN_006269b0
 * calls 0066b970 FUN_0066b970
 * calls 004ab2c0 FUN_004ab2c0
 * calls 00653790 FUN_00653790
 * calls 00673120 FUN_00673120
 * calls 00454810 FUN_00454810
 * calls 00407490 FUN_00407490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00673810(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float local_f0;
  float local_e8;
  undefined1 local_dc [8];
  int local_d4;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [8];
  int local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [28];
  int local_84;
  int local_70;
  float local_64 [22];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087aa04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_00454810(0x7a7a3e5,0);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0xc);
  }
  FUN_004ab5d0(iVar5,0,0);
  local_4 = 0;
  iVar5 = FUN_00454810(0xbd38d1ca,0);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0xc);
  }
  FUN_00407510(iVar5,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = FUN_00454810(0xafa210f0,0);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0xc);
  }
  FUN_00407490(iVar5,0,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar5 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0xc);
  }
  FUN_004ab2c0(iVar5,0,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar5 = FUN_00454810(0xc92a0142,0);
  if (iVar5 == 0) {
    iVar5 = FUN_006269b0(0xc);
  }
  FUN_0066b970(iVar5,0,0);
  local_4 = CONCAT31(local_4._1_3_,4);
  fVar11 = (float10)FUN_00673120(local_c0,local_a0,local_dc,1,0);
  fVar11 = fVar11 * (float10)_DAT_008a938c;
  local_a8 = (float)fVar11;
  if (((fVar11 < (float10)_DAT_00890968 == (fVar11 == (float10)_DAT_00890968)) && (1 < param_4)) &&
     (param_3 != 0)) {
    FUN_00404db0(local_64 + 2,8,10,&LAB_004020f0);
    uVar6 = FUN_00452940();
    if ((2 < uVar6) && (uVar6 != 2)) {
      local_ac = *(float *)(local_d4 + 0x80);
      local_c8 = *(float *)(*(int *)(param_1 + 8) + 0x38);
      fVar1 = (*(float *)(local_70 + 0x34) * _DAT_008a9388 +
              *(float *)(local_70 + 0x2c) * _DAT_00890dc4 * *(float *)(local_70 + 0x44) *
              _DAT_00897188) * _DAT_008933d4;
      if (fVar1 < _DAT_008a92d4 == (fVar1 == _DAT_008a92d4)) {
        uVar9 = 0;
        *param_2 = 0.0;
        local_e8 = 0.0;
        local_f0 = 0.0;
        if (uVar6 != 2) {
          uVar10 = 2;
          local_c4 = _DAT_0089096c / fVar1;
          iVar5 = 0x50;
          do {
            iVar4 = local_d4;
            uVar7 = FUN_00452940();
            if (uVar10 < uVar7) {
              pfVar8 = (float *)(iVar5 + -0x40 + iVar4);
            }
            else {
              pfVar8 = (float *)FUN_006269b0(4);
            }
            iVar4 = local_d4;
            fVar2 = local_ac * *pfVar8;
            uVar7 = FUN_00452940();
            if (uVar10 < uVar7) {
              pfVar8 = (float *)(iVar5 + iVar4);
            }
            else {
              pfVar8 = (float *)FUN_006269b0(4);
            }
            local_a4 = local_c4 * fVar2 * *pfVar8 * local_a8;
            if (fVar2 < _DAT_00890968 != (fVar2 == _DAT_00890968)) goto LAB_00673b80;
            fVar2 = (*(float *)(local_b8 + 0x58) / fVar2) * fVar1 * _DAT_008a9398;
            fVar3 = (local_a4 - fVar2 * *(float *)(local_84 + 0x70) * fVar2) / local_c8;
            if (fVar3 < _DAT_00890968 != (fVar3 == _DAT_00890968)) {
              if (local_e8 < _DAT_00890968 != (local_e8 == _DAT_00890968)) break;
              fVar2 = (fVar2 - local_f0) * (_DAT_0089096c - local_e8 / (local_e8 - fVar3)) +
                      local_f0;
              fVar3 = _DAT_00890968;
            }
            local_e8 = fVar3;
            local_f0 = fVar2;
            fVar2 = *param_2;
            if (*param_2 <= local_f0) {
              fVar2 = local_f0;
            }
            *param_2 = fVar2;
            uVar9 = uVar9 + 1;
            local_64[uVar9 * 2] = local_f0;
            iVar5 = iVar5 + 4;
            uVar10 = uVar10 + 1;
            local_64[uVar9 * 2 + 1] = local_e8;
          } while (uVar9 < uVar6 - 2);
          if ((uVar9 != 0) && (FUN_00653770(local_64 + 2,uVar9), _DAT_00890968 < *param_2)) {
            local_f0 = 0.0;
            fVar1 = *param_2;
            if (0 < param_4) {
              do {
                fVar11 = (float10)FUN_00653790((float)(int)local_f0 *
                                               (fVar1 / (float)(param_4 + -1)));
                *(float *)(param_3 + (int)local_f0 * 4) = (float)fVar11;
                local_f0 = (float)((int)local_f0 + 1);
              } while ((int)local_f0 < param_4);
            }
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
            ExceptionList = local_c;
            return 1;
          }
        }
LAB_00673b80:
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
        ExceptionList = local_c;
        return 0;
      }
    }
  }
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
  ExceptionList = local_c;
  return 0;
}

