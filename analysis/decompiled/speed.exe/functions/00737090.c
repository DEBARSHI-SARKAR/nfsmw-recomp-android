/* speed.exe 00737090 FUN_00737090; analysis pseudocode, not buildable source.
 * calls 006be750 FUN_006be750
 * calls 00460bf0 FUN_00460bf0
 * calls 0045f640 FUN_0045f640
 * calls 0045f7c0 FUN_0045f7c0
 * calls 00503400 FUN_00503400
 * calls 006c0a30 FUN_006c0a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00737090(int param_1,int param_2,undefined4 param_3,undefined4 param_4,ushort param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_198;
  float *local_194;
  int local_190;
  undefined4 local_17c [7];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b0 [32];
  undefined4 local_30 [11];
  
  if (param_2 < 0xb) {
    pfVar6 = (float *)(param_2 * 0x20 + param_1);
    uVar2 = (&DAT_00905080)[param_2 * 0x14];
    local_194 = (float *)(&DAT_00905080 + param_2 * 0x14);
    if (param_2 < 2) {
      if (0x8000 < param_5) {
        param_5 = -param_5;
      }
      *local_194 = (float)param_5 / _DAT_009032f0 + *local_194;
    }
    uVar3 = FUN_00460bf0("DEBUGTOPOLOGY",0,0);
    iVar4 = FUN_00503400(uVar3);
    if (iVar4 != 0) {
      local_17c[0] = 0x60008040;
      local_17c[1] = 0x60204070;
      local_17c[2] = 0x60c080c0;
      local_190 = 0;
      if (0 < (int)(&DAT_0090504c)[param_2 * 0x14]) {
        pfVar7 = (float *)(&DAT_00905050 + param_2 * 0x14);
        do {
          FUN_006c0a30();
          uVar3 = local_17c[local_190];
          local_130 = 0;
          local_12c = 0x41200000;
          local_128 = 0x41200000;
          local_120 = 0;
          local_11c = 0x41200000;
          local_118 = 0xc1200000;
          local_110 = 0;
          local_10c = 0xc1200000;
          local_108 = 0xc1200000;
          local_100 = 0;
          local_fc = 0xc1200000;
          local_f8 = 0x41200000;
          local_f0 = 0x41200000;
          local_ec = 0;
          local_e8 = 0x41200000;
          local_e0 = 0x41200000;
          local_dc = 0;
          local_d8 = 0xc1200000;
          local_d0 = 0xc1200000;
          local_cc = 0;
          local_c8 = 0xc1200000;
          local_c0 = 0xc1200000;
          local_bc = 0;
          local_b8 = 0x41200000;
          local_17c[3] = 0x41200000;
          local_17c[4] = 0x41200000;
          local_17c[5] = 0;
          local_160 = 0x41200000;
          local_15c = 0xc1200000;
          local_158 = 0;
          local_150 = 0xc1200000;
          local_14c = 0xc1200000;
          local_148 = 0;
          local_140 = 0xc1200000;
          local_13c = 0x41200000;
          local_138 = 0;
          iVar8 = 0;
          local_198 = local_30;
          do {
            puVar5 = local_17c + 3;
            if (ABS(pfVar7[1]) <= _DAT_008933d4) {
              if (_DAT_008933d4 < ABS(*pfVar7)) {
                puVar5 = &local_130;
              }
            }
            else {
              puVar5 = &local_f0;
            }
            pfVar1 = (float *)((int)local_b0 + iVar8);
            FUN_0045f7c0(pfVar1,(int)puVar5 + iVar8,pfVar7);
            FUN_0045f640(pfVar1,pfVar1,pfVar7,*local_194);
            iVar9 = iVar8 + 0x10;
            *pfVar1 = *pfVar6 + *pfVar1;
            *(float *)((int)local_b0 + iVar8 + 4) =
                 *(float *)((int)local_b0 + iVar8 + 4) + pfVar6[1];
            *(float *)((int)local_b0 + iVar8 + 8) =
                 *(float *)((int)local_b0 + iVar8 + 8) + pfVar6[2];
            *local_198 = uVar3;
            iVar8 = iVar9;
            local_198 = local_198 + 1;
          } while (iVar9 < 0x40);
          FUN_006be750(local_b0,iVar4,param_4,0,0);
          local_194 = local_194 + 1;
          (&DAT_00905080)[param_2 * 0x14] = uVar2;
          local_190 = local_190 + 1;
          pfVar7 = pfVar7 + 4;
        } while (local_190 < (int)(&DAT_0090504c)[param_2 * 0x14]);
      }
    }
  }
  return;
}

