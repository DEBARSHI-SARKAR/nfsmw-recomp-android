/* speed.exe 0076f4a0 FUN_0076f4a0; analysis pseudocode, not buildable source.
 * calls 00765410 FUN_00765410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0076f4a0(int param_1,int param_2,float param_3,byte param_4)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  char extraout_DL;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar19;
  int local_48;
  float local_40;
  int local_38;
  float local_30;
  uint local_2c;
  float local_c;
  
  cVar2 = *(char *)(param_1 + 0x8c);
  bVar6 = cVar2 != '\0' ^ param_4;
  pfVar12 = (float *)((uint)*(ushort *)(param_2 + (uint)bVar6 * 2) * 0x20 + DAT_009b38bc);
  fVar4 = _DAT_00890da8;
  if (cVar2 != '\0') {
    fVar4 = _DAT_0089096c;
  }
  fVar17 = (float10)fVar4;
  if (bVar6 == 0) {
    local_c = (float)(int)*(char *)(param_2 + 0x15) * _DAT_00890bf0;
    fVar4 = (float)(int)*(char *)(param_2 + 0x13) * _DAT_008b5b30;
  }
  else {
    local_c = (float)(int)*(char *)(param_2 + 0x12) * _DAT_008b5b30;
    fVar4 = (float)(int)*(char *)(param_2 + 0x10) * _DAT_00890bf0;
  }
  if (*(char *)(param_1 + 0x55) != '\0') {
    fVar3 = *(float *)(param_1 + 0x88);
    fVar18 = (float10)fVar3 * (float10)_DAT_008933d4;
    local_30 = (float)((float10)param_3 - fVar18);
    fVar18 = fVar18 + (float10)param_3;
    if (*(int *)(param_1 + 0x78) != 1) {
      local_30 = param_3 - _DAT_00890d3c;
      pbVar7 = (byte *)FUN_00765410(param_2,(uint)bVar6);
      uVar14 = (uint)*pbVar7;
      fVar18 = extraout_ST0;
      fVar17 = extraout_ST1;
      if (uVar14 != 0) {
        local_48 = -1;
        local_40 = 0.0;
        bVar6 = (byte)((ushort)*(undefined2 *)(param_2 + 10) >> 8);
        if (cVar2 == '\0') {
          bVar6 = bVar6 >> 2;
        }
        else {
          bVar6 = bVar6 >> 1;
        }
        bVar6 = extraout_DL == '\0' ^ bVar6 & 1;
        local_2c = (uint)pbVar7[1];
        if (bVar6 != 0) {
          local_2c = uVar14 - local_2c;
        }
        local_38 = 0;
        if (3 < uVar14) {
          uVar10 = *(uint *)(&DAT_008b5aa0 + *(int *)(param_1 + 0x80) * 4);
          iVar16 = 2;
          iVar15 = 8;
          iVar13 = uVar14 * 4 + -8;
          do {
            iVar8 = iVar13 + 4;
            if (bVar6 == 0) {
              iVar8 = iVar15 + -8;
            }
            if ((uVar10 & 1 << ((byte)*(undefined4 *)(pbVar7 + iVar8 + 4) & 0xf)) != 0) {
              iVar8 = iVar13 + 4;
              if (bVar6 == 0) {
                iVar8 = iVar15 + -8;
              }
              fVar5 = (float)(*(int *)(pbVar7 + iVar8 + 4) >> 0x12) * _DAT_009b3a68;
              if (local_38 < (int)local_2c) {
                fVar5 = -fVar5;
              }
              if ((local_48 < 0) || (ABS(param_3 - fVar5) < local_40)) {
                local_48 = local_38;
                local_40 = ABS(param_3 - fVar5);
              }
            }
            iVar8 = iVar13;
            if (bVar6 == 0) {
              iVar8 = iVar15 + -4;
            }
            iVar1 = local_48;
            fVar5 = local_40;
            if ((uVar10 & 1 << ((byte)*(undefined4 *)(pbVar7 + iVar8 + 4) & 0xf)) != 0) {
              iVar8 = iVar13;
              if (bVar6 == 0) {
                iVar8 = iVar15 + -4;
              }
              iVar1 = iVar16 + -1;
              fVar5 = (float)(*(int *)(pbVar7 + iVar8 + 4) >> 0x12) * _DAT_009b3a68;
              if (iVar1 < (int)local_2c) {
                fVar5 = -fVar5;
              }
              fVar5 = ABS(param_3 - fVar5);
              if ((-1 < local_48) && (local_40 <= fVar5)) {
                iVar1 = local_48;
                fVar5 = local_40;
              }
            }
            local_40 = fVar5;
            local_48 = iVar1;
            iVar8 = iVar13 + -4;
            if (bVar6 == 0) {
              iVar8 = iVar15;
            }
            iVar1 = local_48;
            fVar5 = local_40;
            if ((uVar10 & 1 << ((byte)*(undefined4 *)(pbVar7 + iVar8 + 4) & 0xf)) != 0) {
              iVar8 = iVar13 + -4;
              if (bVar6 == 0) {
                iVar8 = iVar15;
              }
              fVar5 = (float)(*(int *)(pbVar7 + iVar8 + 4) >> 0x12) * _DAT_009b3a68;
              if (iVar16 < (int)local_2c) {
                fVar5 = -fVar5;
              }
              fVar5 = ABS(param_3 - fVar5);
              iVar1 = iVar16;
              if ((-1 < local_48) && (local_40 <= fVar5)) {
                iVar1 = local_48;
                fVar5 = local_40;
              }
            }
            local_40 = fVar5;
            local_48 = iVar1;
            iVar8 = iVar13 + -8;
            if (bVar6 == 0) {
              iVar8 = iVar15 + 4;
            }
            iVar1 = local_48;
            fVar5 = local_40;
            if ((uVar10 & 1 << ((byte)*(undefined4 *)(pbVar7 + iVar8 + 4) & 0xf)) != 0) {
              iVar8 = iVar13 + -8;
              if (bVar6 == 0) {
                iVar8 = iVar15 + 4;
              }
              iVar1 = iVar16 + 1;
              fVar5 = (float)(*(int *)(pbVar7 + iVar8 + 4) >> 0x12) * _DAT_009b3a68;
              if (iVar1 < (int)local_2c) {
                fVar5 = -fVar5;
              }
              fVar5 = ABS(param_3 - fVar5);
              if ((-1 < local_48) && (local_40 <= fVar5)) {
                iVar1 = local_48;
                fVar5 = local_40;
              }
            }
            local_40 = fVar5;
            local_48 = iVar1;
            local_38 = local_38 + 4;
            iVar15 = iVar15 + 0x10;
            iVar16 = iVar16 + 4;
            iVar13 = iVar13 + -0x10;
          } while (local_38 < (int)(uVar14 - 3));
        }
        if (local_38 < (int)uVar14) {
          iVar13 = local_38 * 4;
          iVar15 = (uVar14 - local_38) * 4;
          do {
            iVar15 = iVar15 + -4;
            iVar16 = iVar15;
            if (bVar6 == 0) {
              iVar16 = iVar13;
            }
            if ((*(uint *)(&DAT_008b5aa0 + *(int *)(param_1 + 0x80) * 4) &
                1 << ((byte)*(undefined4 *)(pbVar7 + iVar16 + 4) & 0xf)) != 0) {
              iVar16 = iVar15;
              if (bVar6 == 0) {
                iVar16 = iVar13;
              }
              fVar5 = (float)(*(int *)(pbVar7 + iVar16 + 4) >> 0x12) * _DAT_009b3a68;
              if (local_38 < (int)local_2c) {
                fVar5 = -fVar5;
              }
              if ((local_48 < 0) || (ABS(param_3 - fVar5) < local_40)) {
                local_48 = local_38;
                local_40 = ABS(param_3 - fVar5);
              }
            }
            local_38 = local_38 + 1;
            iVar13 = iVar13 + 4;
          } while (local_38 < (int)uVar14);
        }
        if (-1 < local_48) {
          local_2c = local_48;
          iVar13 = local_48;
          if (0 < local_48) {
            iVar15 = local_48 * 4;
            iVar16 = (uVar14 - local_48) * 4;
            do {
              iVar15 = iVar15 + -4;
              iVar8 = iVar16;
              if (bVar6 == 0) {
                iVar8 = iVar15;
              }
              if ((*(uint *)(&DAT_008b5aa0 + *(int *)(param_1 + 0x80) * 4) &
                  1 << ((byte)*(undefined4 *)(pbVar7 + iVar8 + 4) & 0xf)) == 0) break;
              iVar13 = iVar13 + -1;
              iVar16 = iVar16 + 4;
            } while (0 < iVar13);
          }
          if (local_48 < (int)(uVar14 - 1)) {
            iVar15 = local_48 * 4;
            iVar16 = (uVar14 - local_48) * 4 + -8;
            do {
              iVar15 = iVar15 + 4;
              iVar8 = iVar16;
              if (bVar6 == 0) {
                iVar8 = iVar15;
              }
              if ((*(uint *)(&DAT_008b5aa0 + *(int *)(param_1 + 0x80) * 4) &
                  1 << ((byte)*(undefined4 *)(pbVar7 + iVar8 + 4) & 0xf)) == 0) break;
              local_2c = local_2c + 1;
              iVar16 = iVar16 + -4;
            } while ((int)local_2c < (int)(uVar14 - 1));
          }
          if (bVar6 == 0) {
            uVar10 = (uint)pbVar7[1];
            iVar15 = iVar13;
          }
          else {
            uVar10 = uVar14 - pbVar7[1];
            iVar15 = (uVar14 - iVar13) + -1;
          }
          fVar5 = (float)(*(int *)(pbVar7 + iVar15 * 4 + 4) >> 0x12) * _DAT_009b3a68;
          if (iVar13 < (int)uVar10) {
            fVar5 = -fVar5;
          }
          if (bVar6 == 0) {
            uVar11 = (uint)pbVar7[1];
            uVar10 = local_2c;
          }
          else {
            uVar11 = uVar14 - pbVar7[1];
            uVar10 = (uVar14 - local_2c) + -1;
          }
          fVar18 = (float10)(*(int *)(pbVar7 + uVar10 * 4 + 4) >> 0x12) * (float10)_DAT_009b3a68;
          if ((int)local_2c < (int)uVar11) {
            fVar18 = -fVar18;
          }
          fVar3 = fVar3 + _DAT_008b5a78;
          if (bVar6 != 0) {
            iVar13 = (uVar14 - iVar13) + -1;
          }
          local_30 = (fVar5 - (float)((*(int *)(pbVar7 + iVar13 * 4 + 4) << 0xe) >> 0x12) *
                              _DAT_009b3a68 * _DAT_008933d4) + fVar3;
          if (bVar6 != 0) {
            local_2c = (uVar14 - local_2c) + -1;
          }
          fVar18 = ((float10)((*(int *)(pbVar7 + local_2c * 4 + 4) << 0xe) >> 0x12) *
                    (float10)_DAT_009b3a68 * (float10)_DAT_008933d4 + fVar18) - (float10)fVar3;
          fVar19 = ((float10)fVar3 + (float10)fVar3) - (fVar18 - (float10)local_30);
          if (fVar19 < (float10)_DAT_00890968) {
            fVar19 = (float10)_DAT_00890968;
          }
          fVar18 = fVar19 * (float10)_DAT_008933d4 + fVar18;
          local_30 = local_30 - (float)(fVar19 * (float10)_DAT_008933d4);
        }
        fVar3 = local_30 + _DAT_00890cd4;
        if (local_30 + _DAT_00890cd4 < param_3) {
          fVar3 = param_3;
        }
        param_3 = fVar3;
        if ((float)(fVar18 - (float10)_DAT_00890cd4) < fVar3) {
          param_3 = (float)(fVar18 - (float10)_DAT_00890cd4);
        }
      }
    }
    if (param_4 == 0) {
      pfVar9 = (float *)(param_1 + 0xf8);
    }
    else {
      pfVar9 = (float *)(param_1 + 0x104);
    }
    fVar19 = (float10)local_30 * fVar17;
    *pfVar9 = (float)((float10)local_c * fVar19 + (float10)*pfVar12);
    pfVar9[1] = (float)((float10)0.0 * fVar19 + (float10)pfVar12[1]);
    pfVar9[2] = (float)((float10)fVar4 * fVar19 + (float10)pfVar12[2]);
    if (param_4 == 0) {
      pfVar9 = (float *)(param_1 + 0x128);
    }
    else {
      pfVar9 = (float *)(param_1 + 0x134);
    }
    fVar18 = fVar18 * fVar17;
    *pfVar9 = (float)((float10)local_c * fVar18 + (float10)*pfVar12);
    pfVar9[1] = (float)((float10)0.0 * fVar18 + (float10)pfVar12[1]);
    pfVar9[2] = (float)((float10)fVar4 * fVar18 + (float10)pfVar12[2]);
  }
  if (param_4 == 0) {
    pfVar9 = (float *)(param_1 + 200);
  }
  else {
    pfVar9 = (float *)(param_1 + 0xd4);
  }
  fVar17 = fVar17 * (float10)param_3;
  *pfVar9 = (float)((float10)local_c * fVar17 + (float10)*pfVar12);
  pfVar9[1] = (float)((float10)0.0 * fVar17 + (float10)pfVar12[1]);
  pfVar9[2] = (float)((float10)fVar4 * fVar17 + (float10)pfVar12[2]);
  return;
}

