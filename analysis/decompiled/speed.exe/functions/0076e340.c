/* speed.exe 0076e340 FUN_0076e340; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0076e340(int param_1,float param_2,int param_3,char param_4)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  float10 fVar20;
  float10 fVar21;
  uint local_20;
  uint local_c;
  uint local_8;
  
  iVar3 = *(int *)(param_1 + 0x80);
  if ((iVar3 == 3) || (bVar7 = false, iVar3 == 4)) {
    bVar7 = true;
  }
  iVar11 = param_3 * 0x16 + DAT_009b38c0;
  iVar13 = (uint)*(ushort *)(iVar11 + param_4 * 2) * 0x20 + DAT_009b38bc;
  if ((iVar13 == 0) || (sVar2 = *(short *)(iVar13 + 0xe), sVar2 < 0)) {
    pbVar17 = &DAT_009b3830;
  }
  else {
    pbVar17 = (byte *)(sVar2 * 0x40 + DAT_009b38b8);
  }
  bVar15 = (byte)((ushort)*(undefined2 *)(iVar11 + 10) >> 8);
  if (param_4 == '\0') {
    bVar15 = bVar15 >> 2;
  }
  else {
    bVar15 = bVar15 >> 1;
  }
  fVar20 = (float10)_DAT_00890968;
  uVar14 = (uint)pbVar17[1];
  bVar10 = '\0' < param_4 ^ bVar15 & 1;
  local_20 = 0xffffffff;
  bVar8 = false;
  bVar9 = false;
  local_8 = uVar14;
  if (bVar10 != 0) {
    local_8 = *pbVar17 - uVar14;
  }
  fVar1 = _DAT_00894200;
  if (0 < (int)local_8) {
    uVar19 = uVar14;
    bVar8 = false;
    do {
      uVar19 = uVar19 - 1;
      if (bVar10 == 0) {
        uVar16 = uVar19;
        if ((int)uVar19 < 0) {
          uVar16 = 0;
        }
      }
      else {
        uVar16 = uVar14;
        if ((int)(uint)*pbVar17 <= (int)uVar14) {
          uVar16 = *pbVar17 - 1;
        }
      }
      if ((*(uint *)(&DAT_008b5ac0 + iVar3 * 4) &
          1 << ((byte)*(int *)(pbVar17 + uVar16 * 4 + 4) & 0xf)) != 0) {
        fVar5 = (float)(*(int *)(pbVar17 + uVar16 * 4 + 4) >> 0x12) * _DAT_009b3a68;
        fVar6 = fVar5 - param_2;
        fVar4 = -fVar1;
        if (-fVar1 < fVar6) {
          fVar4 = fVar6;
        }
        if (fVar1 < fVar4) {
          fVar4 = fVar1;
        }
        if (fVar6 == fVar4) {
          bVar8 = true;
          fVar20 = (float10)fVar5;
          fVar1 = ABS(fVar6);
          local_20 = uVar16;
        }
      }
      uVar14 = uVar14 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  uVar14 = (uint)pbVar17[1];
  bVar15 = '\0' >= param_4 ^ bVar15 & 1;
  local_c = uVar14;
  if (bVar15 != 0) {
    local_c = *pbVar17 - uVar14;
  }
  if ((((bVar7) || (iVar3 == 6)) || (iVar3 == 0)) || ((iVar3 == 2 || (!bVar8)))) {
    if (0 < (int)local_c) {
      uVar19 = uVar14;
      do {
        uVar19 = uVar19 - 1;
        if (bVar15 == 0) {
          uVar16 = uVar19;
          if ((int)uVar19 < 0) {
            uVar16 = 0;
          }
        }
        else {
          uVar16 = uVar14;
          if ((int)(uint)*pbVar17 <= (int)uVar14) {
            uVar16 = *pbVar17 - 1;
          }
        }
        if ((*(uint *)(&DAT_008b5ac0 + iVar3 * 4) &
            1 << ((byte)*(int *)(pbVar17 + uVar16 * 4 + 4) & 0xf)) != 0) {
          fVar5 = -((float)(*(int *)(pbVar17 + uVar16 * 4 + 4) >> 0x12) * _DAT_009b3a68);
          fVar6 = fVar5 - param_2;
          fVar4 = -fVar1;
          if (-fVar1 < fVar6) {
            fVar4 = fVar6;
          }
          if (fVar1 < fVar4) {
            fVar4 = fVar1;
          }
          if (fVar6 == fVar4) {
            bVar9 = true;
            fVar20 = (float10)fVar5;
            fVar1 = ABS(fVar6);
            local_20 = uVar16;
          }
        }
        uVar14 = uVar14 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    if (((bVar7) || (iVar3 == 0)) && (-1 < (int)local_20)) {
      fVar21 = (float10)(*(int *)(pbVar17 + local_20 * 4 + 4) >> 0x12) * (float10)_DAT_009b3a68;
      if (bVar9) {
        fVar21 = -fVar21;
      }
      fVar20 = (float10)((*(int *)(pbVar17 + local_20 * 4 + 4) << 0xe) >> 0x12) *
               (float10)_DAT_009b3a68;
      fVar1 = (float)((float10)_DAT_008933d4 * fVar20);
      fVar20 = fVar20 * (float10)_DAT_00891068;
      if (fVar20 < (float10)(float)((float10)param_2 - fVar21)) {
        fVar20 = (float10)(float)((float10)param_2 - fVar21);
      }
      if ((float10)fVar1 < fVar20) {
        fVar20 = (float10)fVar1;
      }
      if (bVar15 != 0) {
        local_20 = (*pbVar17 - local_20) - 1;
      }
      param_2 = (float)local_20;
      if (0 < (int)local_20) {
        uVar14 = local_20;
        do {
          uVar14 = uVar14 - 1;
          uVar19 = uVar14;
          if (bVar15 != 0) {
            uVar19 = (*pbVar17 - uVar14) - 1;
          }
        } while (((*(uint *)(&DAT_008b5aa0 + iVar3 * 4) &
                  1 << ((byte)*(undefined4 *)(pbVar17 + uVar19 * 4 + 4) & 0xf)) != 0) &&
                (param_2 = (float)((int)param_2 - 1), 0 < (int)param_2));
      }
      uVar14 = (uint)*pbVar17;
      if ((int)local_20 < (int)(uVar14 - 1)) {
        iVar11 = local_20 * 4;
        iVar13 = (uVar14 - local_20) * 4 + -8;
        do {
          iVar11 = iVar11 + 4;
          iVar12 = iVar13;
          if (bVar15 == 0) {
            iVar12 = iVar11;
          }
          if ((*(uint *)(&DAT_008b5aa0 + iVar3 * 4) &
              1 << ((byte)*(undefined4 *)(pbVar17 + iVar12 + 4) & 0xf)) == 0) break;
          local_20 = local_20 + 1;
          iVar13 = iVar13 + -4;
        } while ((int)local_20 < (int)(uVar14 - 1));
      }
      uVar18 = (uint)pbVar17[1];
      uVar19 = local_20;
      uVar16 = uVar18;
      if (bVar15 != 0) {
        uVar19 = (uVar14 - local_20) - 1;
        uVar16 = uVar14 - uVar18;
      }
      fVar1 = (float)(*(int *)(pbVar17 + uVar19 * 4 + 4) >> 0x12) * _DAT_009b3a68;
      if ((int)local_20 < (int)uVar16) {
        fVar1 = -fVar1;
      }
      if (bVar15 != 0) {
        local_20 = (uVar14 - local_20) - 1;
      }
      uVar19 = (uint)param_2;
      if (bVar15 != 0) {
        uVar18 = uVar14 - uVar18;
        uVar19 = (uVar14 - (int)param_2) - 1;
      }
      fVar4 = (float)(*(int *)(pbVar17 + uVar19 * 4 + 4) >> 0x12) * _DAT_009b3a68;
      if ((int)param_2 < (int)uVar18) {
        fVar4 = -fVar4;
      }
      if (bVar15 != 0) {
        param_2 = (float)((uVar14 - (int)param_2) - 1);
      }
      fVar5 = *(float *)(param_1 + 0x88) + _DAT_008b5a78;
      fVar1 = ((float)((*(int *)(pbVar17 + local_20 * 4 + 4) << 0xe) >> 0x12) * _DAT_009b3a68 *
               _DAT_008933d4 + fVar1) - fVar5;
      fVar5 = (fVar4 - (float)((*(int *)(pbVar17 + (int)param_2 * 4 + 4) << 0xe) >> 0x12) *
                       _DAT_009b3a68 * _DAT_008933d4) + fVar5;
      fVar20 = fVar20 + fVar21;
      if (fVar20 <= (float10)fVar5) {
        fVar20 = (float10)fVar5;
      }
      if ((float10)fVar1 < fVar20) {
        return (float10)fVar1;
      }
    }
  }
  return fVar20;
}

