/* speed.exe 006718f0 FUN_006718f0; analysis pseudocode, not buildable source.
 * calls 005cab00 FUN_005cab00
 * calls 0048cdd0 FUN_0048cdd0
 * calls 004866c0 FUN_004866c0
 * calls 0048d1a0 FUN_0048d1a0
 * calls 005d59f0 FUN_005d59f0
 * calls 005cb5d0 FUN_005cb5d0
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006718f0(int *param_1,uint param_2,int *param_3,uint param_4,float *param_5,float *param_6,
                 undefined4 param_7)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  float10 fVar12;
  float *pfVar13;
  undefined4 uVar14;
  uint uStack_128;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int iStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_40 [64];
  
  iVar2 = (**(code **)(*param_1 + 4))();
  uVar3 = (**(code **)(*param_3 + 4))();
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iStack_f8 = FUN_005d59f0(&LAB_00622540);
    uVar5 = 0;
    if ((iStack_f8 != 0) && (uVar4 = FUN_005d59f0(&LAB_00622540), uVar5 = uVar4, uVar4 != 0)) {
      uVar9 = (uint)*(byte *)(uVar3 + 0x16);
      uVar6 = 0;
      if (uVar9 != 0) {
        if (uVar9 == 0) goto LAB_0067197f;
        do {
          if (*(short *)(uVar3 + 0x1e) < 0) {
LAB_0067197f:
            psVar8 = (short *)0x0;
          }
          else {
            psVar8 = (short *)(((int)*(short *)(uVar3 + 0x1e) + uVar6) * 0x30 + 0x10 +
                              *(int *)(uVar3 + 0x2c));
          }
          uVar5 = param_4;
          if ((*(uint *)(psVar8 + 0x14) == param_4) && ((*(byte *)((int)psVar8 + 0xf) & 8) != 0)) {
            uVar6 = (uint)*(byte *)(iVar2 + 0x16);
            uVar3 = 0;
            if (uVar6 != 0) {
              if (uVar6 == 0) goto LAB_006719d0;
              while( true ) {
                if (*(short *)(iVar2 + 0x1e) < 0) {
LAB_006719d0:
                  psVar7 = (short *)0x0;
                }
                else {
                  psVar7 = (short *)(((int)*(short *)(iVar2 + 0x1e) + uVar3) * 0x30 + 0x10 +
                                    *(int *)(iVar2 + 0x2c));
                }
                if ((*(uint *)(psVar7 + 0x14) == param_2) &&
                   ((*(byte *)((int)psVar7 + 0xf) & 4) != 0)) break;
                uVar3 = uVar3 + 1;
                if (uVar6 <= uVar3) {
                  return param_2 & 0xffffff00;
                }
              }
              fStack_f4 = (float)(int)psVar8[4] * _DAT_00890d60;
              fStack_f0 = (float)(int)psVar8[5] * _DAT_00890d60;
              fStack_ec = (float)(int)psVar8[6] * _DAT_00890d60;
              fStack_e8 = (float)(int)psVar7[4] * _DAT_00890d60;
              fStack_e4 = (float)(int)psVar7[5] * _DAT_00890d60;
              fStack_e0 = (float)(int)psVar7[6] * _DAT_00890d60;
              if (param_5 != (float *)0x0) {
                *param_5 = fStack_e8;
                param_5[1] = fStack_e4;
                param_5[2] = fStack_e0;
              }
              if (param_6 != (float *)0x0) {
                *param_6 = fStack_f4;
                param_6[1] = fStack_f0;
                param_6[2] = fStack_ec;
              }
              iStack_f8 = iStack_f8 + 8;
              iVar2 = FUN_0048cdd0(iStack_f8,&fStack_e8,uVar4 + 8,&fStack_f4,param_7);
              uVar5 = 0;
              if (iVar2 != 0) {
                _DAT_0092c718 = 0x3f800000;
                _DAT_0092c724 = 0;
                _DAT_0092c71c = 0;
                _DAT_0092c720 = 0;
                _DAT_0092c730 = 0xbf800000;
                _DAT_0092c728 = 0;
                _DAT_0092c72c = 0;
                _DAT_0092c73c = 0x3f800000;
                _DAT_0092c734 = 0;
                _DAT_0092c738 = 0;
                _DAT_0092c748 = 0;
                _DAT_0092c740 = 0;
                _DAT_0092c744 = 0;
                _DAT_0092c754 = 0x3f800000;
                _DAT_0092c74c = 0;
                _DAT_0092c750 = 0;
                uStack_128 = 0;
                if ((char)psVar7[0xb] != '\0') {
                  if ((char)psVar7[0xb] == '\0') goto LAB_00671c39;
                  do {
                    if (psVar7[0xf] < 0) {
LAB_00671c39:
                      psVar11 = (short *)0x0;
                    }
                    else {
                      psVar11 = (short *)(((int)psVar7[0xf] + uStack_128) * 0x30 + 0x10 +
                                         *(int *)(psVar7 + 0x16));
                    }
                    if ((*(byte *)((int)psVar11 + 0xf) & 3) != 0) {
                      uVar3 = (uint)*(byte *)(psVar8 + 0xb);
                      uVar5 = 0;
                      if (uVar3 != 0) {
                        if (uVar3 == 0) goto LAB_00671c74;
                        do {
                          if (psVar8[0xf] < 0) {
LAB_00671c74:
                            psVar10 = (short *)0x0;
                          }
                          else {
                            psVar10 = (short *)(((int)psVar8[0xf] + uVar5) * 0x30 + 0x10 +
                                               *(int *)(psVar8 + 0x16));
                          }
                          if (((*(byte *)((int)psVar10 + 0xf) & 0x10) != 0) &&
                             (*(int *)(psVar10 + 0x14) == *(int *)(psVar11 + 0x14))) {
                            fStack_dc = (float)(int)psVar11[8] * _DAT_00890d60;
                            fStack_d8 = (float)(int)psVar11[9] * _DAT_00890d60;
                            fStack_a0 = (float)(int)*psVar11 * _DAT_00896ab8;
                            fStack_9c = (float)(int)psVar11[1] * _DAT_00896ab8;
                            fStack_98 = (float)(int)psVar11[2] * _DAT_00896ab8;
                            fStack_94 = (float)(int)psVar11[3] * _DAT_00896ab8;
                            fStack_c0 = (float)(int)*psVar7 * _DAT_00896ab8;
                            fStack_bc = (float)(int)psVar7[1] * _DAT_00896ab8;
                            fStack_b8 = (float)(int)psVar7[2] * _DAT_00896ab8;
                            fStack_b4 = (float)(int)psVar7[3] * _DAT_00896ab8;
                            FUN_004866c0(&fStack_a0,&fStack_c0,auStack_90);
                            FUN_005ca910(auStack_90,auStack_40);
                            FUN_005cab00(&DAT_0092c718,auStack_40,auStack_40);
                            fVar1 = (float)(int)psVar10[9] * _DAT_00890d60;
                            fStack_d0 = (float)(int)*psVar10 * _DAT_00896ab8;
                            fStack_cc = (float)(int)psVar10[1] * _DAT_00896ab8;
                            fStack_c8 = (float)(int)psVar10[2] * _DAT_00896ab8;
                            fStack_c4 = (float)(int)psVar10[3] * _DAT_00896ab8;
                            fStack_b0 = (float)(int)*psVar8 * _DAT_00896ab8;
                            fStack_ac = (float)(int)psVar8[1] * _DAT_00896ab8;
                            fStack_a8 = (float)(int)psVar8[2] * _DAT_00896ab8;
                            fStack_a4 = (float)(int)psVar8[3] * _DAT_00896ab8;
                            FUN_004866c0(&fStack_d0,&fStack_b0,auStack_90);
                            FUN_005ca910(auStack_90,auStack_80);
                            FUN_005cab00(&DAT_0092c718,auStack_80,auStack_80);
                            if ((psVar11[7] & 0x100U) == 0) {
                              if ((psVar11[7] & 0x200U) == 0) break;
                              fVar1 = fVar1 + fVar1;
                              fStack_104 = fStack_60 * fVar1;
                              fStack_100 = fStack_5c * fVar1;
                              fStack_fc = fStack_58 * fVar1;
                              fVar12 = (float10)FUN_005cb5d0(fStack_dc,fStack_d8 + fStack_d8);
                              fVar12 = fVar12 * (float10)_DAT_00890960;
                              uVar14 = 0;
                              pfVar13 = &fStack_104;
                            }
                            else {
                              fVar1 = fVar1 + fVar1;
                              fStack_110 = fStack_60 * fVar1;
                              fStack_10c = fStack_5c * fVar1;
                              fStack_108 = fStack_58 * fVar1;
                              fVar12 = (float10)FUN_005cb5d0(fStack_dc,fStack_d8 + fStack_d8);
                              fVar12 = fVar12 * (float10)_DAT_00890960;
                              uVar14 = 2;
                              pfVar13 = &fStack_110;
                            }
                            FUN_0048d1a0(iVar2,iStack_f8,auStack_40,(float)fVar12,(float)fVar12,
                                         pfVar13,uVar14);
                            break;
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar3);
                      }
                    }
                    uStack_128 = uStack_128 + 1;
                  } while (uStack_128 < *(byte *)(psVar7 + 0xb));
                }
                return 1;
              }
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar9);
      }
    }
  }
  return uVar5 & 0xffffff00;
}

