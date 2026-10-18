/* speed.exe 00697ce0 FUN_00697ce0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 00487160 FUN_00487160
 * calls 00627400 FUN_00627400
 * calls 006211d0 FUN_006211d0
 * calls 0068a2d0 FUN_0068a2d0
 * calls 006e9660 FUN_006e9660
 * calls 00488830 FUN_00488830
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00697ce0(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  float afStack_280 [29];
  undefined4 uStack_20c;
  float *pfStack_208;
  float fStack_204;
  int local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  undefined4 uStack_1b0;
  int local_1ac;
  float local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  uint uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float fStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  int iStack_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c1f0;
  local_c = ExceptionList;
  iVar9 = *(int *)(param_1 + 0x84);
  iVar1 = **(int **)(param_1 + 0x78);
  fStack_204 = 9.687601e-39;
  ExceptionList = &local_c;
  iVar5 = FUN_00452940();
  if (iVar5 == 0) {
    fStack_204 = 5.60519e-45;
    pfStack_208 = (float *)0x697d2a;
    pfVar6 = (float *)FUN_006269b0();
  }
  else {
    pfVar6 = (float *)(iVar9 + 0xe8);
  }
  local_1c4 = *pfVar6;
  iVar9 = *(int *)(param_1 + 0x84);
  fStack_204 = 9.687664e-39;
  iVar5 = FUN_00452940();
  if (iVar5 == 0) {
    fStack_204 = 5.60519e-45;
    pfStack_208 = (float *)0x697d57;
    pfVar6 = (float *)FUN_006269b0();
  }
  else {
    pfVar6 = (float *)(iVar9 + 0xe8);
  }
  iVar9 = *(int *)(param_1 + 0x84);
  fStack_204 = 9.687721e-39;
  uVar7 = FUN_00452940();
  if (uVar7 < 2) {
    fStack_204 = 5.60519e-45;
    pfStack_208 = (float *)0x697d81;
    pfVar8 = (float *)FUN_006269b0();
  }
  else {
    pfVar8 = (float *)(iVar9 + 0xec);
  }
  local_1c8 = *pfVar6;
  if (*pfVar8 < *pfVar6) {
    local_1c8 = *pfVar8;
  }
  local_1e8 = 0.0;
  local_1e4 = 0.0;
  local_1e0 = 0.0;
  local_1dc = 0.0;
  local_1d8 = 0.0;
  local_1d4 = 0.0;
  local_1d0 = 0.0;
  local_1cc = 0.0;
  local_1f0 = 0;
  if (0 < param_3) {
    pfVar6 = param_2 + 6;
    do {
      fStack_204 = (float)(param_1 + 0x60);
      pfStack_208 = (float *)0x697df0;
      FUN_00487160();
      fStack_204 = pfVar6[5];
      pfStack_208 = (float *)0x697dfd;
      FUN_006e9660();
      local_1e8 = *param_2 + *(float *)(iVar1 + 0x10);
      local_4 = 0;
      local_1e4 = pfVar6[-5] + *(float *)(iVar1 + 0x14);
      local_1e0 = pfVar6[-4] + *(float *)(iVar1 + 0x18);
      local_1d8 = pfVar6[-1];
      local_1dc = pfVar6[-2];
      local_1d4 = *pfVar6;
      local_1d0 = local_1c8 * *(float *)(local_1ac + 0xe0);
      iVar9 = *(int *)(param_1 + 0x84);
      local_1cc = local_1c4 * *(float *)(local_1ac + 0xe0);
      local_1b8 = local_1dc * *(float *)(iVar1 + 0x90) +
                  local_1d4 * *(float *)(iVar1 + 0x98) + local_1d8 * *(float *)(iVar1 + 0x94);
      local_1c0 = (local_1dc * *(float *)(iVar1 + 0x70) +
                  local_1d4 * *(float *)(iVar1 + 0x78) + local_1d8 * *(float *)(iVar1 + 0x74)) *
                  *(float *)(iVar9 + 0x40);
      fVar2 = (local_1dc * *(float *)(iVar1 + 0x80) +
              local_1d8 * *(float *)(iVar1 + 0x84) + local_1d4 * *(float *)(iVar1 + 0x88)) *
              *(float *)(iVar9 + 0x44);
      fVar3 = local_1b8 * *(float *)(iVar9 + 0x48);
      fStack_204 = local_1c0 * local_1c0 + fVar2 * fVar2 + fVar3 * fVar3;
      pfStack_208 = (float *)0x697f0a;
      fVar10 = (float10)FUN_005c5e80();
      iVar9 = *(int *)(param_1 + 0x84);
      local_14 = (float)fVar10;
      local_64 = *(undefined4 *)(iVar9 + 0x80);
      local_60 = *(undefined4 *)(iVar9 + 0x84);
      fStack_204 = 2.24208e-44;
      pfStack_208 = &local_1e8;
      local_5c = *(undefined4 *)(iVar9 + 0x88);
      uStack_20c = 0x697f54;
      cVar4 = FUN_00488830();
      if (cVar4 != '\0') {
        fStack_204 = 9.688499e-39;
        FUN_0068a2d0();
        fStack_204 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
        pfStack_208 = (float *)0x697fd4;
        fVar10 = (float10)FUN_005c5e80();
        local_18c = local_1d8;
        local_190 = local_1dc;
        local_1a0[1] = local_1e4;
        local_188 = local_1d4;
        local_1a0[0] = local_1e8;
        local_1a0[2] = local_1e0;
        fStack_204 = 9.688671e-39;
        iVar9 = (**(code **)(*(int *)(param_1 + 0x48) + 4))();
        uStack_164 = *(undefined4 *)(iVar9 + 8);
        uStack_150 = *(undefined4 *)(iVar1 + 0x20);
        uStack_14c = *(undefined4 *)(iVar1 + 0x24);
        uStack_148 = *(undefined4 *)(iVar1 + 0x28);
        local_1a0[3] = param_2[3];
        uStack_184 = uStack_184 & 0xfffffffb | 3;
        uStack_124 = uStack_1b0;
        uStack_12c = uStack_38;
        uStack_17c = uStack_44;
        uStack_184 = uStack_184 ^ ((uint)(iStack_18 == 2) << 7 ^ uStack_184) & 0x80;
        uStack_130 = uStack_3c;
        uStack_180 = uStack_48;
        uStack_128 = uStack_34;
        uStack_178 = uStack_40;
        fStack_144 = _DAT_00890968;
        if (_DAT_00890968 < fStack_50) {
          fStack_144 = _DAT_0089096c / fStack_50;
        }
        fStack_144 = fStack_144 * (float)fVar10;
        fStack_170 = param_2[8];
        fStack_16c = param_2[9];
        fStack_168 = param_2[10];
        fStack_204 = 1.90577e-43;
        uStack_134 = 0;
        pfStack_208 = (float *)0x698149;
        fStack_174 = (float)fVar10;
        iVar9 = FUN_00627400();
        local_4 = CONCAT31(local_4._1_3_,1);
        if (iVar9 != 0) {
          pfVar6 = local_1a0;
          pfVar8 = afStack_280;
          for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar8 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar8 = pfVar8 + 1;
          }
          FUN_006211d0();
        }
        *(undefined4 *)(iVar1 + 0x30) = uStack_7c;
        *(undefined4 *)(iVar1 + 0x34) = uStack_78;
        *(undefined4 *)(iVar1 + 0x20) = uStack_88;
        *(undefined4 *)(iVar1 + 0x38) = uStack_74;
        *(undefined4 *)(iVar1 + 0x24) = uStack_84;
        *(undefined4 *)(iVar1 + 0x28) = uStack_80;
        local_4 = 0xffffffff;
        fStack_204 = 9.689292e-39;
        FUN_0045a430();
        ExceptionList = local_c;
        return;
      }
      local_4 = 0xffffffff;
      fStack_204 = 9.688437e-39;
      FUN_0045a430();
      local_1f0 = local_1f0 + 1;
      param_2 = param_2 + 0xc;
      pfVar6 = pfVar6 + 0xc;
    } while (local_1f0 < param_3);
  }
  ExceptionList = local_c;
  return;
}

