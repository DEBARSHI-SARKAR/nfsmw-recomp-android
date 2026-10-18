/* speed.exe 00582d20 FUN_00582d20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582d20(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  bool bVar29;
  uint local_124;
  float *local_120;
  float *local_11c;
  float *local_118;
  uint local_114;
  uint local_10c;
  undefined4 *local_104;
  undefined4 *local_e4;
  int local_dc;
  float *local_d4;
  int local_c4;
  int local_c0;
  
  local_104 = param_6;
  local_dc = -(int)param_2;
  local_e4 = param_5;
  local_c4 = -(int)param_5;
  local_d4 = (float *)(param_1 + 0x40);
  pfVar24 = (float *)(param_1 + 8);
  local_10c = 4;
  local_c0 = 0;
  do {
    puVar28 = param_2;
    puVar27 = param_3;
    puVar21 = param_7;
    iVar18 = local_dc;
    if (local_10c == 0) {
      return 0;
    }
    fVar13 = pfVar24[-2];
    fVar14 = pfVar24[-1];
    fVar15 = *pfVar24;
    fVar16 = *local_d4;
    uVar25 = local_10c - 1;
    iVar26 = uVar25 * 0x10;
    bVar29 = _DAT_00891068 <
             fVar13 * (float)puVar28[uVar25 * 4] +
             fVar14 * (float)puVar28[uVar25 * 4 + 1] + fVar15 * (float)puVar28[uVar25 * 4 + 2] +
             fVar16;
    if (bVar29) {
      uVar1 = puVar28[uVar25 * 4 + 1];
      uVar2 = puVar28[uVar25 * 4 + 2];
      *local_e4 = puVar28[uVar25 * 4];
      local_e4[1] = uVar1;
      local_e4[2] = uVar2;
      uVar1 = puVar27[uVar25 * 2];
      local_104[1] = puVar27[uVar25 * 2 + 1];
      *local_104 = uVar1;
      uVar1 = param_4[uVar25 * 4 + 1];
      uVar2 = param_4[uVar25 * 4 + 2];
      uVar3 = param_4[uVar25 * 4 + 3];
      *puVar21 = param_4[uVar25 * 4];
      puVar21[1] = uVar1;
      puVar21[3] = uVar3;
      puVar21[2] = uVar2;
    }
    local_124 = (uint)bVar29;
    local_114 = 0;
    if (local_10c != 0) {
      local_118 = (float *)(puVar21 + local_124 * 4);
      pfVar23 = (float *)(local_e4 + local_124 * 4);
      local_11c = (float *)(param_4 + 3);
      local_120 = (float *)(puVar28 + 2);
      iVar20 = (int)param_4 - (int)puVar28;
      uVar19 = local_114;
      do {
        local_114 = uVar19;
        if (fVar13 * local_120[-2] + fVar15 * *local_120 + fVar14 * local_120[-1] + fVar16 <=
            _DAT_00891068) {
          if (bVar29) {
            fVar4 = local_120[-2];
            fVar5 = *(float *)(iVar26 + (int)puVar28);
            fVar6 = local_120[-1];
            fVar7 = *(float *)(iVar26 + 4 + (int)puVar28);
            pfVar23[2] = *local_120 - *(float *)(iVar26 + 8 + (int)puVar28);
            *pfVar23 = fVar4 - fVar5;
            pfVar23[1] = fVar6 - fVar7;
            fVar17 = -((fVar13 * *(float *)(iVar26 + (int)puVar28) +
                        fVar14 * *(float *)(iVar26 + 4 + (int)puVar28) +
                        fVar15 * *(float *)(iVar26 + 8 + (int)puVar28) + fVar16) /
                      (fVar13 * *pfVar23 + fVar14 * pfVar23[1] + fVar15 * pfVar23[2]));
            *pfVar23 = fVar17 * *pfVar23;
            pfVar23[1] = fVar17 * pfVar23[1];
            pfVar23[2] = fVar17 * pfVar23[2];
            fVar4 = *(float *)(iVar26 + 4 + (int)puVar28);
            fVar5 = *(float *)(iVar26 + 8 + (int)puVar28);
            *pfVar23 = *(float *)(iVar26 + (int)puVar28) + *pfVar23;
            pfVar23[1] = fVar4 + pfVar23[1];
            pfVar23[2] = fVar5 + pfVar23[2];
            fVar4 = (float)puVar27[local_114 * 2 + 1];
            fVar5 = (float)puVar27[uVar25 * 2 + 1];
            fVar6 = (float)puVar27[uVar25 * 2 + 1];
            local_104[local_124 * 2] =
                 ((float)puVar27[local_114 * 2] - (float)puVar27[uVar25 * 2]) * fVar17 +
                 (float)puVar27[uVar25 * 2];
            local_104[local_124 * 2 + 1] = (fVar4 - fVar5) * fVar17 + fVar6;
            fVar4 = local_11c[-3];
            fVar5 = *(float *)(iVar26 + (int)param_4);
            pfVar23 = pfVar23 + 4;
            fVar6 = local_11c[-2];
            fVar7 = *(float *)(iVar26 + 4 + (int)param_4);
            bVar29 = false;
            fVar8 = *local_11c;
            fVar9 = *(float *)(iVar26 + 0xc + (int)param_4);
            fVar10 = *(float *)(iVar26 + (int)param_4);
            fVar11 = *(float *)(iVar26 + 4 + (int)param_4);
            fVar12 = *(float *)(iVar26 + 0xc + (int)param_4);
            local_118[2] = (*(float *)(iVar20 + (int)local_120) -
                           *(float *)(iVar26 + 8 + (int)param_4)) * fVar17 +
                           *(float *)(iVar26 + 8 + (int)param_4);
            local_118[3] = fVar17 * (fVar8 - fVar9) + fVar12;
            *local_118 = (fVar4 - fVar5) * fVar17 + fVar10;
            local_124 = local_124 + 1;
            local_118[1] = (fVar6 - fVar7) * fVar17 + fVar11;
            local_118 = local_118 + 4;
          }
        }
        else {
          pfVar22 = pfVar23;
          if (!bVar29) {
            fVar4 = local_120[-2];
            fVar5 = *(float *)(iVar26 + (int)puVar28);
            fVar6 = local_120[-1];
            fVar7 = *(float *)(iVar26 + 4 + (int)puVar28);
            pfVar23[2] = *local_120 - *(float *)(iVar26 + 8 + (int)puVar28);
            *pfVar23 = fVar4 - fVar5;
            pfVar23[1] = fVar6 - fVar7;
            fVar17 = -((fVar13 * *(float *)(iVar26 + (int)puVar28) +
                        fVar14 * *(float *)(iVar26 + 4 + (int)puVar28) +
                        fVar15 * *(float *)(iVar26 + 8 + (int)puVar28) + fVar16) /
                      (fVar13 * *pfVar23 + fVar14 * pfVar23[1] + fVar15 * pfVar23[2]));
            *pfVar23 = fVar17 * *pfVar23;
            pfVar23[1] = fVar17 * pfVar23[1];
            pfVar23[2] = fVar17 * pfVar23[2];
            fVar4 = *(float *)(iVar26 + 4 + (int)puVar28);
            fVar5 = *(float *)(iVar26 + 8 + (int)puVar28);
            *pfVar23 = *pfVar23 + *(float *)(iVar26 + (int)puVar28);
            pfVar23[1] = fVar4 + pfVar23[1];
            pfVar23[2] = fVar5 + pfVar23[2];
            fVar4 = (float)puVar27[local_114 * 2 + 1];
            fVar5 = (float)puVar27[uVar25 * 2 + 1];
            fVar6 = (float)puVar27[uVar25 * 2 + 1];
            local_104[local_124 * 2] =
                 ((float)puVar27[local_114 * 2] - (float)puVar27[uVar25 * 2]) * fVar17 +
                 (float)puVar27[uVar25 * 2];
            local_104[local_124 * 2 + 1] = (fVar4 - fVar5) * fVar17 + fVar6;
            fVar4 = local_11c[-3];
            fVar5 = *(float *)(iVar26 + (int)param_4);
            pfVar22 = pfVar23 + 4;
            fVar6 = local_11c[-2];
            fVar7 = *(float *)(iVar26 + 4 + (int)param_4);
            bVar29 = true;
            fVar8 = *local_11c;
            fVar9 = *(float *)(iVar26 + 0xc + (int)param_4);
            fVar10 = *(float *)(iVar26 + (int)param_4);
            fVar11 = *(float *)(iVar26 + 4 + (int)param_4);
            fVar12 = *(float *)(iVar26 + 0xc + (int)param_4);
            local_118[2] = (*(float *)(iVar20 + (int)local_120) -
                           *(float *)(iVar26 + 8 + (int)param_4)) * fVar17 +
                           *(float *)(iVar26 + 8 + (int)param_4);
            local_118[3] = fVar17 * (fVar8 - fVar9) + fVar12;
            *local_118 = (fVar4 - fVar5) * fVar17 + fVar10;
            local_124 = local_124 + 1;
            local_118[1] = (fVar6 - fVar7) * fVar17 + fVar11;
            local_118 = local_118 + 4;
          }
          fVar4 = local_120[-1];
          fVar5 = *local_120;
          *pfVar22 = local_120[-2];
          pfVar22[1] = fVar4;
          pfVar23 = pfVar22 + 4;
          pfVar22[2] = fVar5;
          uVar1 = puVar27[local_114 * 2 + 1];
          local_104[local_124 * 2] = puVar27[local_114 * 2];
          local_104[local_124 * 2 + 1] = uVar1;
          fVar4 = *(float *)(iVar20 + (int)local_120);
          fVar5 = *local_11c;
          fVar6 = local_11c[-3];
          local_118[1] = local_11c[-2];
          *local_118 = fVar6;
          local_124 = local_124 + 1;
          local_118[2] = fVar4;
          local_118[3] = fVar5;
          local_118 = local_118 + 4;
        }
        iVar26 = local_dc + -8 + (int)local_120;
        local_120 = local_120 + 4;
        local_11c = local_11c + 4;
        uVar19 = local_114 + 1;
        uVar25 = local_114;
      } while (local_114 + 1 < local_10c);
    }
    local_dc = local_c4;
    local_c4 = iVar18;
    local_10c = local_124;
    local_d4 = local_d4 + 1;
    local_c0 = local_c0 + 1;
    pfVar24 = pfVar24 + 4;
    param_7 = param_4;
    param_3 = local_104;
    param_2 = local_e4;
    param_4 = puVar21;
    local_104 = puVar27;
    local_e4 = puVar28;
  } while (local_c0 < 4);
  return local_124;
}

