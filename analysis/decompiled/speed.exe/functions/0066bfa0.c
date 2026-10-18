/* speed.exe 0066bfa0 FUN_0066bfa0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0066b970 FUN_0066b970
 * calls 004ab2c0 FUN_004ab2c0
 * calls 00452940 FUN_00452940
 * calls 0066bcc0 FUN_0066bcc0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bfa0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float10 fVar9;
  float local_40;
  float local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a6e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00454810(0xf1f5fbc7,0);
  if (iVar4 == 0) {
    iVar4 = FUN_006269b0(0xc);
  }
  FUN_004ab2c0(iVar4,0,0);
  local_4 = 0;
  iVar4 = FUN_00454810(0xc92a0142,0);
  if (iVar4 == 0) {
    iVar4 = FUN_006269b0(0xc);
  }
  FUN_0066b970(iVar4,0,0);
  local_4._0_1_ = 1;
  uVar5 = FUN_00452940();
  iVar4 = local_2c;
  if (1 < uVar5) {
    local_40 = *(float *)(local_2c + 0x5c);
    local_3c = 0.0;
    iVar6 = FUN_00452940();
    fVar1 = *(float *)(iVar4 + 0x54);
    fVar2 = *(float *)(iVar4 + 0x5c);
    fVar3 = (float)(iVar6 + -1);
    if (iVar6 + -1 < 0) {
      fVar3 = fVar3 + _DAT_00891214;
    }
    uVar5 = 0;
    iVar4 = FUN_00452940();
    if (iVar4 != 0) {
      iVar4 = 8;
      do {
        iVar6 = local_2c;
        uVar7 = FUN_00452940();
        if (uVar5 < uVar7) {
          pfVar8 = (float *)(iVar6 + iVar4);
        }
        else {
          pfVar8 = (float *)FUN_006269b0(4);
        }
        fVar9 = (float10)FUN_0066bcc0(local_34,local_20,local_40,0x3f800000,param_2,0);
        fVar9 = (fVar9 + (float10)_DAT_0089096c) * (float10)*pfVar8 * (float10)local_40 *
                (float10)_DAT_008a9390;
        if ((float10)local_3c < fVar9) {
          local_3c = (float)fVar9;
        }
        local_40 = (fVar1 - fVar2) / fVar3 + local_40;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
        uVar7 = FUN_00452940();
      } while (uVar5 < uVar7);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return (float10)local_3c;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return (float10)_DAT_00890968;
}

