/* speed.exe 00583440 FUN_00583440; analysis pseudocode, not buildable source.
 */

uint FUN_00583440(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,int param_6,uint param_7,float param_8)

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
  bool bVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  uint local_d4;
  float *local_d0;
  float *local_cc;
  float *local_c8;
  uint local_c4;
  int local_c0;
  
  uVar19 = param_7 - 1;
  iVar20 = uVar19 * 0x10;
  bVar13 = param_8 <= *(float *)(iVar20 + param_4);
  if (bVar13) {
    uVar1 = *(undefined4 *)(iVar20 + 4 + param_4);
    uVar2 = *(undefined4 *)(iVar20 + 8 + param_4);
    *param_1 = *(undefined4 *)(iVar20 + param_4);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    uVar1 = *(undefined4 *)(param_5 + uVar19 * 8);
    param_2[1] = *(undefined4 *)(param_5 + 4 + uVar19 * 8);
    *param_2 = uVar1;
    uVar1 = *(undefined4 *)(iVar20 + 4 + param_6);
    uVar2 = *(undefined4 *)(iVar20 + 8 + param_6);
    uVar3 = *(undefined4 *)(iVar20 + 0xc + param_6);
    *param_3 = *(undefined4 *)(iVar20 + param_6);
    param_3[1] = uVar1;
    param_3[3] = uVar3;
    param_3[2] = uVar2;
  }
  local_d4 = (uint)bVar13;
  local_c4 = 0;
  if (param_7 != 0) {
    local_c8 = (float *)(param_3 + local_d4 * 4);
    pfVar18 = (float *)(param_1 + local_d4 * 4);
    local_cc = (float *)(param_6 + 0xc);
    local_d0 = (float *)(param_4 + 8);
    iVar16 = param_6 - param_4;
    uVar15 = local_c4;
    do {
      local_c4 = uVar15;
      local_c0 = uVar19 * 8;
      if (local_d0[-2] < param_8) {
        if (bVar13) {
          fVar4 = local_d0[-2];
          fVar5 = *(float *)(iVar20 + param_4);
          fVar6 = local_d0[-1];
          fVar7 = *(float *)(iVar20 + 4 + param_4);
          pfVar18[2] = *local_d0 - *(float *)(iVar20 + 8 + param_4);
          *pfVar18 = fVar4 - fVar5;
          pfVar18[1] = fVar6 - fVar7;
          fVar14 = (param_8 - *(float *)(iVar20 + param_4)) / *pfVar18;
          *pfVar18 = fVar14 * *pfVar18;
          pfVar18[1] = fVar14 * pfVar18[1];
          pfVar18[2] = fVar14 * pfVar18[2];
          fVar4 = *(float *)(iVar20 + 4 + param_4);
          fVar5 = *(float *)(iVar20 + 8 + param_4);
          *pfVar18 = *pfVar18 + *(float *)(iVar20 + param_4);
          pfVar18[1] = fVar4 + pfVar18[1];
          pfVar18[2] = fVar5 + pfVar18[2];
          fVar4 = *(float *)(param_5 + 4 + local_c4 * 8);
          fVar5 = *(float *)(local_c0 + 4 + param_5);
          fVar6 = *(float *)(local_c0 + 4 + param_5);
          param_2[local_d4 * 2] =
               (*(float *)(param_5 + local_c4 * 8) - *(float *)(local_c0 + param_5)) * fVar14 +
               *(float *)(local_c0 + param_5);
          param_2[local_d4 * 2 + 1] = (fVar4 - fVar5) * fVar14 + fVar6;
          fVar4 = local_cc[-3];
          fVar5 = *(float *)(iVar20 + param_6);
          fVar6 = local_cc[-2];
          fVar7 = *(float *)(iVar20 + 4 + param_6);
          fVar8 = *local_cc;
          fVar9 = *(float *)(iVar20 + 0xc + param_6);
          pfVar18 = pfVar18 + 4;
          bVar13 = false;
          fVar10 = *(float *)(iVar20 + param_6);
          fVar11 = *(float *)(iVar20 + 4 + param_6);
          fVar12 = *(float *)(iVar20 + 0xc + param_6);
          local_c8[2] = (*(float *)(iVar16 + (int)local_d0) - *(float *)(iVar20 + 8 + param_6)) *
                        fVar14 + *(float *)(iVar20 + 8 + param_6);
          local_c8[3] = fVar14 * (fVar8 - fVar9) + fVar12;
          *local_c8 = (fVar4 - fVar5) * fVar14 + fVar10;
          local_d4 = local_d4 + 1;
          local_c8[1] = (fVar6 - fVar7) * fVar14 + fVar11;
          local_c8 = local_c8 + 4;
        }
      }
      else {
        pfVar17 = pfVar18;
        if (!bVar13) {
          fVar4 = local_d0[-2];
          fVar5 = *(float *)(iVar20 + param_4);
          fVar6 = local_d0[-1];
          fVar7 = *(float *)(iVar20 + 4 + param_4);
          pfVar18[2] = *local_d0 - *(float *)(iVar20 + 8 + param_4);
          *pfVar18 = fVar4 - fVar5;
          pfVar18[1] = fVar6 - fVar7;
          fVar14 = (param_8 - *(float *)(iVar20 + param_4)) / *pfVar18;
          *pfVar18 = fVar14 * *pfVar18;
          pfVar18[1] = fVar14 * pfVar18[1];
          pfVar18[2] = fVar14 * pfVar18[2];
          fVar4 = *(float *)(iVar20 + 4 + param_4);
          fVar5 = *(float *)(iVar20 + 8 + param_4);
          *pfVar18 = *pfVar18 + *(float *)(iVar20 + param_4);
          pfVar18[1] = fVar4 + pfVar18[1];
          pfVar18[2] = fVar5 + pfVar18[2];
          fVar4 = *(float *)(param_5 + 4 + local_c4 * 8);
          fVar5 = *(float *)(local_c0 + 4 + param_5);
          fVar6 = *(float *)(local_c0 + 4 + param_5);
          param_2[local_d4 * 2] =
               (*(float *)(param_5 + local_c4 * 8) - *(float *)(local_c0 + param_5)) * fVar14 +
               *(float *)(local_c0 + param_5);
          param_2[local_d4 * 2 + 1] = (fVar4 - fVar5) * fVar14 + fVar6;
          fVar4 = local_cc[-3];
          fVar5 = *(float *)(iVar20 + param_6);
          fVar6 = local_cc[-2];
          fVar7 = *(float *)(iVar20 + 4 + param_6);
          fVar8 = *local_cc;
          fVar9 = *(float *)(iVar20 + 0xc + param_6);
          pfVar17 = pfVar18 + 4;
          bVar13 = true;
          fVar10 = *(float *)(iVar20 + param_6);
          fVar11 = *(float *)(iVar20 + 4 + param_6);
          fVar12 = *(float *)(iVar20 + 0xc + param_6);
          local_c8[2] = (*(float *)(iVar16 + (int)local_d0) - *(float *)(iVar20 + 8 + param_6)) *
                        fVar14 + *(float *)(iVar20 + 8 + param_6);
          local_c8[3] = fVar14 * (fVar8 - fVar9) + fVar12;
          *local_c8 = (fVar4 - fVar5) * fVar14 + fVar10;
          local_d4 = local_d4 + 1;
          local_c8[1] = (fVar6 - fVar7) * fVar14 + fVar11;
          local_c8 = local_c8 + 4;
        }
        fVar4 = local_d0[-1];
        fVar5 = *local_d0;
        *pfVar17 = local_d0[-2];
        pfVar17[1] = fVar4;
        pfVar18 = pfVar17 + 4;
        pfVar17[2] = fVar5;
        uVar1 = *(undefined4 *)(param_5 + 4 + local_c4 * 8);
        param_2[local_d4 * 2] = *(undefined4 *)(param_5 + local_c4 * 8);
        param_2[local_d4 * 2 + 1] = uVar1;
        fVar4 = *(float *)(iVar16 + (int)local_d0);
        fVar5 = *local_cc;
        fVar6 = local_cc[-3];
        local_c8[1] = local_cc[-2];
        *local_c8 = fVar6;
        local_d4 = local_d4 + 1;
        local_c8[2] = fVar4;
        local_c8[3] = fVar5;
        local_c8 = local_c8 + 4;
      }
      iVar20 = (-8 - param_4) + (int)local_d0;
      local_d0 = local_d0 + 4;
      local_cc = local_cc + 4;
      uVar15 = local_c4 + 1;
      uVar19 = local_c4;
    } while (local_c4 + 1 < param_7);
  }
  return local_d4;
}

