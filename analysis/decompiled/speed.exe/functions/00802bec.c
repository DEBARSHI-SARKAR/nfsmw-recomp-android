/* speed.exe 00802bec FUN_00802bec; analysis pseudocode, not buildable source.
 */

void FUN_00802bec(int param_1,byte *param_2,int param_3,int param_4,uint param_5,uint param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  byte *local_8c;
  byte *local_80;
  int local_74;
  byte *local_70;
  byte *local_6c;
  undefined1 *local_68;
  byte *local_64;
  undefined1 *local_60;
  byte *local_5c;
  uint local_54;
  int local_4c;
  int aiStack_48 [5];
  uint local_34 [5];
  int local_20;
  int local_1c;
  byte *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar13 = param_5 + param_6;
  local_54 = param_6;
  if (param_6 < uVar13) {
    local_1c = param_6 << 2;
    iVar16 = (int)param_2 - param_3;
    local_4c = uVar13 * 4;
    local_68 = (undefined1 *)(param_3 + param_4 * -8);
    local_5c = local_68 + -2;
    local_6c = param_2 + param_4 * -5;
    local_64 = param_2;
    local_80 = param_2 + param_4 * 3;
    local_70 = (byte *)(param_3 + param_4 * -4);
    local_60 = (undefined1 *)(param_4 * 2 + param_3);
    do {
      local_74 = 8;
      local_8c = local_64;
      iVar1 = *(int *)(param_7 + *(int *)(local_4c + *(int *)(param_1 + 0x24)) * 4);
      iVar2 = iVar1 * iVar1 * 3 >> 5;
      pbVar3 = local_70;
      pbVar12 = local_6c;
      puVar15 = local_60;
      local_14 = local_80;
      do {
        pbVar5 = pbVar3 + iVar16;
        aiStack_48[1] = (int)*pbVar5;
        aiStack_48[2] = (int)pbVar12[param_4 * 2];
        aiStack_48[3] = (int)pbVar12[param_4 * 3];
        aiStack_48[4] = (int)pbVar12[param_4 * 4];
        local_34[0] = (uint)*local_8c;
        pbVar6 = local_14 + param_4;
        local_34[1] = (uint)pbVar6[param_4 * -3];
        local_34[2] = (uint)(byte)puVar15[iVar16];
        local_34[3] = (uint)*local_14;
        local_8 = 0;
        local_c = 0;
        local_10 = 0;
        local_20 = 0;
        param_5 = 1;
        do {
          iVar9 = aiStack_48[param_5];
          local_20 = local_20 + iVar9;
          local_c = local_c + iVar9 * iVar9;
          param_5 = param_5 + 1;
        } while (param_5 < 5);
        param_5 = 5;
        do {
          iVar9 = aiStack_48[param_5];
          local_10 = local_10 + iVar9;
          local_8 = local_8 + iVar9 * iVar9;
          param_5 = param_5 + 1;
        } while (param_5 < 9);
        local_c = local_c - (local_20 + 1 >> 1) * (local_20 >> 1);
        local_8 = local_8 - (local_10 + 1 >> 1) * (local_10 >> 1);
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + local_1c);
        *piVar7 = *piVar7 + local_c;
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + local_4c);
        *piVar7 = *piVar7 + local_8;
        if ((((local_c < iVar2) && (local_8 < iVar2)) &&
            ((int)(local_34[0] - aiStack_48[4]) < iVar1)) &&
           ((int)(aiStack_48[4] - local_34[0]) < iVar1)) {
          uVar14 = (uint)*pbVar12;
          uVar8 = (uint)*pbVar5;
          iVar9 = uVar8 - uVar14;
          if (iVar9 < 1) {
            iVar9 = uVar14 - uVar8;
          }
          if (iVar1 <= iVar9) {
            uVar14 = uVar8;
          }
          uVar8 = (uint)*pbVar6;
          uVar10 = (uint)*local_14;
          iVar9 = uVar10 - uVar8;
          if (iVar9 < 1) {
            iVar9 = uVar8 - uVar10;
          }
          if (iVar1 <= iVar9) {
            uVar8 = uVar10;
          }
          iVar9 = aiStack_48[4] + uVar14 * 3 + aiStack_48[3] + aiStack_48[2] + 4 + aiStack_48[1];
          iVar11 = iVar9 + (local_34[0] - uVar14);
          *pbVar3 = (byte)((int)(((aiStack_48[1] + iVar9) * 2 - aiStack_48[4]) + local_34[0]) >> 4);
          pbVar3[param_4] =
               (byte)((int)(((aiStack_48[2] + iVar11) * 2 - local_34[0]) + local_34[1]) >> 4);
          iVar11 = iVar11 + (local_34[1] - uVar14);
          pbVar3[param_4 * 2] =
               (byte)((int)(((aiStack_48[3] + iVar11) * 2 - local_34[1]) + local_34[2]) >> 4);
          iVar11 = iVar11 + (local_34[2] - uVar14);
          pbVar3[param_4 * 3] =
               (byte)((int)((((aiStack_48[4] + iVar11) * 2 - local_34[2]) - aiStack_48[1]) + uVar14
                           + local_34[3]) >> 4);
          iVar11 = iVar11 + (local_34[3] - aiStack_48[1]);
          pbVar3[param_4 * 4] =
               (byte)((int)((((iVar11 + local_34[0]) * 2 - local_34[3]) - aiStack_48[2]) + uVar8 +
                           aiStack_48[1]) >> 4);
          iVar11 = iVar11 + (uVar8 - aiStack_48[2]);
          puVar15[-param_4] =
               (char)((int)(((local_34[1] + iVar11) * 2 - aiStack_48[3]) + aiStack_48[2]) >> 4);
          iVar11 = iVar11 + (uVar8 - aiStack_48[3]);
          *puVar15 = (char)((int)(((local_34[2] + iVar11) * 2 - aiStack_48[4]) + aiStack_48[3]) >> 4
                           );
          bVar4 = (byte)((int)(((iVar11 + uVar8 + local_34[3]) * 2 - local_34[0]) - aiStack_48[4])
                        >> 4);
        }
        else {
          iVar9 = *(int *)(*(int *)(param_1 + 0x38) +
                          ((int)(((local_34[0] - aiStack_48[4]) * 3 - local_34[1]) + 4 +
                                aiStack_48[3]) >> 3) * 4);
          pbVar3[param_4 * 3] = (&DAT_009c6c00)[aiStack_48[4] + iVar9];
          pbVar3[param_4 * 4] = (&DAT_009c6c00)[local_34[0] - iVar9];
          *pbVar3 = *pbVar5;
          pbVar3[param_4] = pbVar12[param_4 * 2];
          pbVar3[param_4 * 2] = pbVar12[param_4 * 3];
          puVar15[-param_4] = pbVar6[param_4 * -3];
          *puVar15 = puVar15[iVar16];
          bVar4 = *local_14;
        }
        local_8c = local_8c + 1;
        puVar15[param_4] = bVar4;
        pbVar12 = pbVar12 + 1;
        local_14 = local_14 + 1;
        pbVar3 = pbVar3 + 1;
        puVar15 = puVar15 + 1;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
      if (local_54 == param_6) {
        local_54 = local_54 + 1;
        local_64 = local_64 + 8;
        local_80 = local_80 + 8;
        local_6c = local_6c + 8;
        local_60 = local_60 + 8;
        local_70 = local_70 + 8;
        local_68 = local_68 + 8;
        local_5c = local_5c + 8;
        local_1c = local_1c + 4;
        local_4c = local_4c + 4;
      }
      else {
        local_14 = local_68;
        iVar1 = *(int *)(param_7 + *(int *)(local_1c + *(int *)(param_1 + 0x24)) * 4);
        iVar2 = iVar1 * iVar1 * 3 >> 5;
        local_74 = 8;
        pbVar3 = local_5c;
        do {
          aiStack_48[2] = (int)pbVar3[-1];
          aiStack_48[1] = (int)pbVar3[-2];
          aiStack_48[4] = (int)pbVar3[1];
          local_34[0] = (uint)pbVar3[2];
          aiStack_48[3] = (int)*pbVar3;
          local_34[1] = (uint)pbVar3[3];
          local_34[2] = (uint)pbVar3[4];
          local_34[3] = (uint)pbVar3[5];
          local_8 = 0;
          local_c = 0;
          local_10 = 0;
          local_20 = 0;
          param_5 = 1;
          do {
            iVar9 = aiStack_48[param_5];
            local_20 = local_20 + iVar9;
            local_c = local_c + iVar9 * iVar9;
            param_5 = param_5 + 1;
          } while (param_5 < 5);
          param_5 = 5;
          do {
            iVar9 = aiStack_48[param_5];
            local_10 = local_10 + iVar9;
            local_8 = local_8 + iVar9 * iVar9;
            param_5 = param_5 + 1;
          } while (param_5 < 9);
          local_c = local_c - (local_20 + 1 >> 1) * (local_20 >> 1);
          local_8 = local_8 - (local_10 + 1 >> 1) * (local_10 >> 1);
          piVar7 = (int *)(local_1c + -4 + *(int *)(param_1 + 0x28));
          *piVar7 = *piVar7 + local_c;
          piVar7 = (int *)(*(int *)(param_1 + 0x28) + local_1c);
          *piVar7 = *piVar7 + local_8;
          if (((local_c < iVar2) && (local_8 < iVar2)) &&
             (((int)(local_34[0] - aiStack_48[4]) < iVar1 &&
              ((int)(aiStack_48[4] - local_34[0]) < iVar1)))) {
            iVar9 = (uint)pbVar3[-2] - (uint)pbVar3[-3];
            if (iVar9 < 1) {
              iVar9 = (uint)pbVar3[-3] - (uint)pbVar3[-2];
            }
            if (iVar9 < iVar1) {
              bVar4 = pbVar3[-3];
            }
            else {
              bVar4 = pbVar3[-2];
            }
            uVar14 = (uint)bVar4;
            iVar9 = (uint)pbVar3[5] - (uint)pbVar3[6];
            if (iVar9 < 1) {
              iVar9 = (uint)pbVar3[6] - (uint)pbVar3[5];
            }
            if (iVar9 < iVar1) {
              bVar4 = pbVar3[6];
            }
            else {
              bVar4 = pbVar3[5];
            }
            uVar8 = (uint)bVar4;
            iVar9 = aiStack_48[4] + uVar14 * 3 + aiStack_48[3] + aiStack_48[2] + 4 + aiStack_48[1];
            pbVar3[-2] = (byte)((int)(((aiStack_48[1] + iVar9) * 2 - aiStack_48[4]) + local_34[0])
                               >> 4);
            iVar9 = iVar9 + (local_34[0] - uVar14);
            pbVar3[-1] = (byte)((int)(((aiStack_48[2] + iVar9) * 2 - local_34[0]) + local_34[1]) >>
                               4);
            iVar9 = iVar9 + (local_34[1] - uVar14);
            *pbVar3 = (byte)((int)(((aiStack_48[3] + iVar9) * 2 - local_34[1]) + local_34[2]) >> 4);
            iVar9 = iVar9 + (local_34[2] - uVar14);
            pbVar3[1] = (byte)((int)((((iVar9 + aiStack_48[4]) * 2 - local_34[2]) - aiStack_48[1]) +
                                     uVar14 + local_34[3]) >> 4);
            iVar9 = iVar9 + (local_34[3] - aiStack_48[1]);
            *local_14 = (char)((int)((((iVar9 + local_34[0]) * 2 - local_34[3]) - aiStack_48[2]) +
                                     uVar8 + aiStack_48[1]) >> 4);
            iVar9 = iVar9 + (uVar8 - aiStack_48[2]);
            pbVar3[3] = (byte)((int)(((local_34[1] + iVar9) * 2 - aiStack_48[3]) + aiStack_48[2]) >>
                              4);
            iVar9 = iVar9 + (uVar8 - aiStack_48[3]);
            pbVar3[4] = (byte)((int)(((local_34[2] + iVar9) * 2 - aiStack_48[4]) + aiStack_48[3]) >>
                              4);
            pbVar3[5] = (byte)((int)(((iVar9 + uVar8 + local_34[3]) * 2 - local_34[0]) -
                                    aiStack_48[4]) >> 4);
          }
          else {
            iVar9 = *(int *)(*(int *)(param_1 + 0x38) +
                            ((int)(((local_34[0] - aiStack_48[4]) * 3 - local_34[1]) + 4 +
                                  aiStack_48[3]) >> 3) * 4);
            pbVar3[1] = (&DAT_009c6c00)[aiStack_48[4] + iVar9];
            *local_14 = (&DAT_009c6c00)[local_34[0] - iVar9];
          }
          local_14 = local_14 + param_4;
          pbVar3 = pbVar3 + param_4;
          local_74 = local_74 + -1;
        } while (local_74 != 0);
      }
      local_54 = local_54 + 1;
      local_64 = local_64 + 8;
      local_6c = local_6c + 8;
      local_60 = local_60 + 8;
      local_70 = local_70 + 8;
      local_68 = local_68 + 8;
      local_5c = local_5c + 8;
      local_1c = local_1c + 4;
      local_4c = local_4c + 4;
      local_80 = local_80 + 8;
    } while (local_54 < uVar13);
  }
  return;
}

