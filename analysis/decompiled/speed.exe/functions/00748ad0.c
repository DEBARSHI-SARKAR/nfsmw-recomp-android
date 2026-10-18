/* speed.exe 00748ad0 FUN_00748ad0; analysis pseudocode, not buildable source.
 * calls 0073bc00 FUN_0073bc00
 * calls 00464050 FUN_00464050
 * calls 0073bcd0 FUN_0073bcd0
 * calls 006bedc0 FUN_006bedc0
 * calls 00465a70 FUN_00465a70
 * calls 006bed80 FUN_006bed80
 * calls 006cb640 FUN_006cb640
 * calls 00730bf0 FUN_00730bf0
 * calls 006cb650 FUN_006cb650
 * calls 0073c260 FUN_0073c260
 * calls 007303d0 FUN_007303d0
 * calls 0073be00 FUN_0073be00
 * calls 00464080 FUN_00464080
 * calls 004655f0 FUN_004655f0
 * calls 006bedd0 FUN_006bedd0
 * calls 0073ae60 FUN_0073ae60
 * calls 006bedb0 FUN_006bedb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00748ad0(int *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  short *psVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  int *piVar17;
  char cVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  undefined1 local_76;
  undefined1 local_75;
  byte *local_70;
  int local_6c;
  short *local_64;
  byte *local_5c;
  int aiStack_50 [4];
  byte *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30 [4];
  uint local_20 [4];
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar11 = param_1[1];
  iVar3 = *param_1;
  pbVar22 = (byte *)param_1[0x13];
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x4a) != '\b')) {
    return 0;
  }
  pbVar5 = (byte *)FUN_006bed80(1);
  piVar6 = (int *)FUN_006bedc0(1);
  FUN_006cb650(piVar6);
  aiStack_50[1] = (int)*(short *)(iVar3 + 0x44);
  aiStack_50[3] = (int)*(short *)(iVar3 + 0x46);
  iVar7 = FUN_00464080(DAT_00904a00);
  if (iVar7 < 0x60181) {
    iVar7 = FUN_00464080(0);
    if (iVar7 < 0x60181) {
      iVar7 = FUN_00464080(7);
      if (iVar7 < 0x60181) {
        iVar7 = FUN_00464050(7);
        if (iVar7 < 0x60181) {
          FUN_006bedb0(pbVar5);
          FUN_006bedd0(piVar6);
          return 0;
        }
        FUN_007303d0();
        FUN_00730bf0(0x60180,1);
      }
      local_64 = (short *)FUN_00465a70(0x30000,7);
      uVar8 = 7;
    }
    else {
      local_64 = (short *)FUN_00465a70(0x30000,0x40);
      uVar8 = 0x40;
    }
  }
  else {
    local_64 = (short *)FUN_00465a70(0x30000,DAT_00904a00 & 0xf | 0x40);
    uVar8 = DAT_00904a00 & 0xf | 0x40;
  }
  iVar7 = FUN_00465a70(0x30000,uVar8);
  pbVar20 = pbVar5 + (int)*(short *)(iVar3 + 0x46) * (int)*(short *)(iVar3 + 0x44);
  iVar21 = 0;
  local_70 = (byte *)0x0;
  local_40 = pbVar20;
  if (0 < (int)pbVar22) {
    piVar14 = param_1 + 0xc;
    do {
      if (piVar14[-6] != 0) {
        FUN_006cb650(piVar14[-2]);
        FUN_006cb650(*piVar14);
        iVar9 = piVar14[-1];
        aiStack_50[iVar21 + 2] = piVar14[-3];
        aiStack_50[iVar21] = iVar9;
      }
      iVar21 = iVar21 + 1;
      piVar14 = piVar14 + 0xd;
    } while (iVar21 < (int)pbVar22);
  }
  if (DAT_009b0a18 == 0) {
    local_30[0] = -0.5000152;
    local_30[1] = -0.503891;
    local_30[2] = -1.9921875;
    local_30[3] = -1.9922179;
    local_20[0] = 0xffffffff;
    local_20[1] = 0xffffffff;
    local_20[2] = 0xffffffff;
    local_20[3] = 0xffffffff;
    iVar21 = 0;
    do {
      iVar9 = 0;
      do {
        if (piVar6[iVar9] == *(int *)((int)local_30 + iVar21)) {
          *(int *)((int)local_20 + iVar21) = iVar9;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x100);
      iVar21 = iVar21 + 4;
    } while (iVar21 < 0x10);
    puVar23 = &DAT_009af288;
    for (iVar21 = 0x40; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + 1;
    }
    if (pbVar5 < pbVar20) {
      iVar21 = 0;
      pbVar19 = pbVar5;
      do {
        iVar9 = 0;
        do {
          if ((uint)*pbVar19 == local_20[iVar9]) {
            *pbVar19 = (char)iVar9 + 1;
            iVar4 = (&DAT_009b0a1c)[iVar9];
            (&DAT_009af288)[iVar9 * 0x10 + iVar4] = iVar21;
            (&DAT_009b0a1c)[iVar9] = iVar4 + 1;
            pbVar20 = local_40;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
        if (iVar9 == 4) {
          *pbVar19 = 0;
        }
        pbVar19 = pbVar19 + 1;
        iVar21 = iVar21 + 1;
      } while (pbVar19 < pbVar20);
    }
    DAT_009b0a18 = 1;
  }
  else {
    pbVar19 = pbVar5;
    for (uVar8 = (uint)(aiStack_50[3] * aiStack_50[1]) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pbVar19[0] = 0;
      pbVar19[1] = 0;
      pbVar19[2] = 0;
      pbVar19[3] = 0;
      pbVar19 = pbVar19 + 4;
    }
    for (uVar8 = aiStack_50[3] * aiStack_50[1] & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar19 = 0;
      pbVar19 = pbVar19 + 1;
    }
  }
  *piVar6 = iVar11;
  piVar6[1] = param_1[2];
  piVar6[2] = param_1[3];
  piVar6[3] = param_1[4];
  piVar6[4] = param_1[5];
  local_6c = 5;
  local_5c = pbVar5;
  if (pbVar5 < pbVar20) {
    do {
      aiStack_50[1] = piVar6[*local_5c];
      aiStack_50[3] = 0;
      if (0 < (int)pbVar22) {
        piVar14 = param_1 + 0xc;
        do {
          iVar11 = aiStack_50[3];
          if (piVar14[-6] != 0) {
            pbVar20 = (byte *)aiStack_50[aiStack_50[3] + 2];
            bVar1 = *pbVar20;
            uVar8 = *(uint *)(piVar14[-2] + (uint)bVar1 * 4);
            local_34 = (uint)*(byte *)(*piVar14 + 2 + (uint)*(byte *)aiStack_50[aiStack_50[3]] * 4);
            local_38 = uVar8;
            if ((piVar14[2] != 0) && (local_34 != 0)) {
              local_3c = uVar8 >> 8 & 0xff;
              local_10 = (float)(uVar8 & 0xff) * _DAT_00899dd0;
              local_38 = uVar8 >> 0x10 & 0xff;
              local_c = (float)local_3c * _DAT_00899dd0;
              local_4 = 0;
              local_8 = (float)local_38 * _DAT_00899dd0;
              uVar8 = FUN_0073ae60(piVar14 + 3,&local_10,3,1);
            }
            if (local_34 < 0x80) {
              if (local_34 != 0) {
                local_30[0] = (float)(int)local_34;
                if ((int)local_34 < 0) {
                  local_30[0] = local_30[0] + _DAT_00891214;
                }
                local_30[0] = local_30[0] * _DAT_008a7a5c;
                if (_DAT_0089096c < local_30[0]) {
                  local_30[0] = 1.0;
                }
                iVar11 = piVar14[-3];
                local_30[1] = _DAT_0089096c - local_30[0];
                local_20[1] = aiStack_50[1];
                sVar2 = *(short *)(iVar3 + 0x44);
                local_20[0] = uVar8;
                uVar10 = FUN_0073ae60(local_20,local_30,2,0);
                *(undefined4 *)(iVar7 + (int)local_70 * 4) = uVar10;
                local_64[(int)local_70 * 2] = (short)(((int)pbVar20 - iVar11) % (int)sVar2);
                local_64[(int)local_70 * 2 + 1] = (short)(((int)pbVar20 - iVar11) / (int)sVar2);
                pbVar19 = local_70 + 1;
                if (0xbfff < (int)(local_70 + 1)) {
                  pbVar19 = local_70;
                }
                local_70 = pbVar19;
                *local_5c = 0xff;
                iVar11 = aiStack_50[3];
              }
            }
            else {
              *local_5c = bVar1 + 5;
              aiStack_50[1] = uVar8;
            }
            aiStack_50[iVar11] = aiStack_50[iVar11] + 1;
            aiStack_50[iVar11 + 2] = (int)(pbVar20 + 1);
          }
          piVar14 = piVar14 + 0xd;
          aiStack_50[3] = iVar11 + 1;
        } while (iVar11 + 1 < (int)pbVar22);
      }
      local_5c = local_5c + 1;
    } while (local_5c < local_40);
  }
  if (0 < (int)pbVar22) {
    do {
      local_40 = pbVar22;
      piVar14 = param_1 + 0xd;
      if (param_1[0xe] == 0) {
        iVar11 = 0;
        if (0 < *piVar14) {
          piVar17 = piVar6 + local_6c;
          do {
            *piVar17 = *(int *)(param_1[10] + iVar11 * 4);
            iVar11 = iVar11 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar11 < *piVar14);
        }
      }
      else {
        iVar11 = 0;
        if (0 < *piVar14) {
          local_4 = 0;
          piVar17 = piVar6 + local_6c;
          do {
            local_38 = *(uint *)(param_1[10] + iVar11 * 4);
            local_10 = (float)(local_38 & 0xff) * _DAT_00899dd0;
            local_34 = local_38 >> 0x10 & 0xff;
            local_c = (float)(local_38 >> 8 & 0xff) * _DAT_00899dd0;
            local_8 = (float)local_34 * _DAT_00899dd0;
            iVar21 = FUN_0073ae60(param_1 + 0xf,&local_10,3,1);
            *piVar17 = iVar21;
            iVar11 = iVar11 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar11 < *piVar14);
        }
      }
      FUN_006cb640(param_1[10]);
      FUN_006cb640(param_1[0xc]);
      local_6c = local_6c + *piVar14;
      local_40 = local_40 + -1;
      param_1 = piVar14;
      pbVar22 = local_40;
    } while (local_40 != (byte *)0x0);
  }
  if (local_70 != (byte *)0x0) {
    iVar11 = 0xff - local_6c;
    if ((int)local_70 < iVar11) {
      iVar11 = 0;
      if (0 < (int)local_70) {
        piVar14 = piVar6 + local_6c;
        psVar12 = local_64;
        do {
          pbVar5[(int)*psVar12 + (int)psVar12[1] * (int)*(short *)(iVar3 + 0x44)] =
               (char)local_6c + (char)iVar11;
          *piVar14 = *(int *)((iVar7 - (int)local_64) + (int)psVar12);
          iVar11 = iVar11 + 1;
          psVar12 = psVar12 + 2;
          piVar14 = piVar14 + 1;
        } while (iVar11 < (int)local_70);
      }
    }
    else {
      FUN_0073bc00(iVar7,(int)local_70 << 2,iVar11,0x14);
      FUN_0073c260();
      iVar21 = DAT_00904a10;
      iVar9 = 0;
      if (0 < DAT_00904a10) {
        piVar17 = &DAT_009af398;
        piVar14 = (int *)&DAT_009af38c;
        do {
          piVar14[-1] = piVar14[-1] >> 4;
          *piVar14 = *piVar14 >> 4;
          piVar14[1] = piVar14[1] >> 4;
          piVar14[2] = piVar14[2] >> 4;
          *piVar17 = iVar9;
          iVar9 = iVar9 + 1;
          piVar14 = piVar14 + 5;
          piVar17 = piVar17 + 5;
        } while (iVar9 < iVar21);
      }
      iVar9 = 0;
      if (0 < iVar11) {
        puVar13 = &DAT_009af38c;
        piVar14 = piVar6 + local_6c;
        do {
          if (((int)puVar13 < 0x9af38c) || (iVar21 <= iVar9)) {
            uVar15 = 0;
            local_76 = 0;
            local_75 = 0;
            uVar16 = 0;
          }
          else {
            local_76 = *puVar13;
            uVar15 = puVar13[4];
            local_75 = puVar13[-4];
            uVar16 = puVar13[8];
          }
          puVar13 = puVar13 + 0x14;
          *piVar14 = CONCAT31(CONCAT21(CONCAT11(uVar16,uVar15),local_76),local_75);
          iVar9 = iVar9 + 1;
          iVar21 = DAT_00904a10;
          piVar14 = piVar14 + 1;
        } while (iVar9 < iVar11);
      }
      FUN_0073bcd0();
      if (0 < (int)local_70) {
        local_40 = local_70;
        psVar12 = local_64;
        do {
          pbVar22 = pbVar5 + (int)*psVar12 + (int)psVar12[1] * (int)*(short *)(iVar3 + 0x44);
          if (*pbVar22 == 0xff) {
            local_34 = *(uint *)((int)psVar12 + (iVar7 - (int)local_64));
            iVar21 = FUN_0073be00(local_34 & 0xff,local_34 >> 8 & 0xff,local_34 >> 0x10 & 0xff,
                                  local_34 >> 0x18);
            if (iVar21 < iVar11) {
              *pbVar22 = (char)local_6c + (char)iVar21;
            }
            else {
              *pbVar22 = 0;
            }
          }
          psVar12 = psVar12 + 2;
          local_40 = local_40 + -1;
        } while (local_40 != (byte *)0x0);
      }
    }
  }
  FUN_004655f0(local_64);
  FUN_004655f0(iVar7);
  cVar18 = '\0';
  local_40 = (byte *)&DAT_009af288;
  piVar14 = &DAT_009b0a1c;
  do {
    iVar11 = 0;
    if (0 < *piVar14) {
      pbVar22 = local_40;
      do {
        pbVar5[*(int *)pbVar22] = cVar18 + 1;
        iVar11 = iVar11 + 1;
        pbVar22 = (byte *)((int)pbVar22 + 4);
      } while (iVar11 < *piVar14);
    }
    piVar14 = piVar14 + 1;
    local_40 = (byte *)((int)local_40 + 0x40);
    cVar18 = cVar18 + '\x01';
  } while ((int)piVar14 < 0x9b0a2c);
  FUN_006cb640(piVar6);
  FUN_006bedb0(pbVar5);
  FUN_006bedd0(piVar6);
  return 1;
}

