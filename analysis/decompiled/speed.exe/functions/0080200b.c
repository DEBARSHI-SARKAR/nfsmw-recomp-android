/* speed.exe 0080200b FUN_0080200b; analysis pseudocode, not buildable source.
 */

void FUN_0080200b(int param_1,byte *param_2,int param_3,undefined1 *param_4,uint param_5,
                 undefined1 *param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int local_94;
  int local_64;
  byte *local_5c;
  byte *local_58;
  int local_50;
  byte *local_4c;
  int local_44;
  int aiStack_40 [5];
  uint local_2c [6];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar3 = (int)param_4;
  uVar10 = param_5 + (int)param_6;
  iVar2 = (int)param_4 * 3;
  local_10 = (uint)param_6;
  if (param_6 < uVar10) {
    iVar14 = (int)param_2 - param_3;
    local_64 = uVar10 * 4;
    local_5c = param_2;
    param_2 = param_2 + (int)param_4 * -4;
    puVar8 = (undefined1 *)(param_3 + (int)param_4 * -3);
    puVar13 = (undefined1 *)((int)param_4 * 2 + param_3);
    do {
      local_58 = local_5c;
      iVar15 = *(int *)(param_7 + *(int *)(local_64 + *(int *)(param_1 + 0x24)) * 4);
      iVar9 = iVar15 * iVar15 * 3 >> 5;
      local_4c = local_5c + iVar2;
      local_94 = 8;
      do {
        aiStack_40[2] = (int)(byte)puVar8[iVar14];
        aiStack_40[3] = (int)param_2[(int)param_4 * 2];
        aiStack_40[4] = (int)param_2[(int)param_4 * 3];
        local_2c[0] = (uint)*local_58;
        aiStack_40[1] = (int)*param_2;
        pbVar4 = local_4c + (int)param_4;
        local_2c[1] = (uint)pbVar4[(int)param_4 * -3];
        local_2c[2] = (uint)(byte)puVar13[iVar14];
        local_2c[3] = (uint)*local_4c;
        local_8 = 0;
        local_c = 0;
        local_14 = 0;
        local_44 = 0;
        param_5 = 1;
        do {
          iVar11 = aiStack_40[param_5];
          local_44 = local_44 + iVar11;
          local_c = local_c + iVar11 * iVar11;
          param_5 = param_5 + 1;
        } while (param_5 < 5);
        param_5 = 5;
        do {
          iVar11 = aiStack_40[param_5];
          local_14 = local_14 + iVar11;
          local_8 = local_8 + iVar11 * iVar11;
          param_5 = param_5 + 1;
        } while (param_5 < 9);
        local_c = local_c - (local_44 + 1 >> 1) * (local_44 >> 1);
        local_8 = local_8 - (local_14 + 1 >> 1) * (local_14 >> 1);
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + local_10 * 4);
        *piVar5 = *piVar5 + local_c;
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + local_64);
        *piVar5 = *piVar5 + local_8;
        if ((((local_c < iVar9) && (local_8 < iVar9)) &&
            ((int)(local_2c[0] - aiStack_40[4]) < iVar15)) &&
           ((int)(aiStack_40[4] - local_2c[0]) < iVar15)) {
          uVar6 = (uint)param_2[-(int)param_4];
          iVar11 = *param_2 - uVar6;
          if (iVar11 < 1) {
            iVar11 = uVar6 - *param_2;
          }
          if (iVar15 <= iVar11) {
            uVar6 = (uint)*param_2;
          }
          uVar12 = (uint)*pbVar4;
          uVar7 = (uint)*local_4c;
          iVar11 = uVar7 - uVar12;
          if (iVar11 < 1) {
            iVar11 = uVar12 - uVar7;
          }
          if (iVar15 <= iVar11) {
            uVar12 = uVar7;
          }
          iVar11 = aiStack_40[4] + uVar6 * 2 + uVar6 + aiStack_40[3] + aiStack_40[2] + 4 +
                   aiStack_40[1];
          puVar8[-(int)param_4] =
               (char)((int)(((aiStack_40[1] + iVar11) * 2 - aiStack_40[4]) + local_2c[0]) >> 4);
          iVar11 = iVar11 + (local_2c[0] - uVar6);
          *puVar8 = (char)((int)(((aiStack_40[2] + iVar11) * 2 - local_2c[0]) + local_2c[1]) >> 4);
          iVar11 = iVar11 + (local_2c[1] - uVar6);
          puVar8[(int)param_4] =
               (char)((int)(((aiStack_40[3] + iVar11) * 2 - local_2c[1]) + local_2c[2]) >> 4);
          iVar11 = iVar11 + (local_2c[2] - uVar6);
          puVar8[(int)param_4 * 2] =
               (char)((int)((((aiStack_40[4] + iVar11) * 2 - local_2c[2]) - aiStack_40[1]) + uVar6 +
                           local_2c[3]) >> 4);
          iVar11 = iVar11 + (local_2c[3] - aiStack_40[1]);
          puVar8[iVar2] =
               (char)((int)((((local_2c[0] + iVar11) * 2 - local_2c[3]) - aiStack_40[2]) + uVar12 +
                           aiStack_40[1]) >> 4);
          iVar11 = iVar11 + (uVar12 - aiStack_40[2]);
          puVar13[-(int)param_4] =
               (char)((int)(((local_2c[1] + iVar11) * 2 - aiStack_40[3]) + aiStack_40[2]) >> 4);
          iVar11 = iVar11 + (uVar12 - aiStack_40[3]);
          *puVar13 = (char)((int)(((local_2c[2] + iVar11) * 2 - aiStack_40[4]) + aiStack_40[3]) >> 4
                           );
          puVar13[(int)param_4] =
               (char)((int)(((iVar11 + uVar12 + local_2c[3]) * 2 - local_2c[0]) - aiStack_40[4]) >>
                     4);
        }
        else {
          puVar8[-(int)param_4] = *param_2;
          *puVar8 = puVar8[iVar14];
          puVar8[(int)param_4] = param_2[(int)param_4 * 2];
          puVar8[(int)param_4 * 2] = param_2[(int)param_4 * 3];
          puVar8[iVar2] = *local_58;
          puVar13[-(int)param_4] = pbVar4[(int)param_4 * -3];
          *puVar13 = puVar13[iVar14];
          puVar13[(int)param_4] = *local_4c;
        }
        local_58 = local_58 + 1;
        param_2 = param_2 + 1;
        local_4c = local_4c + 1;
        puVar8 = puVar8 + 1;
        puVar13 = puVar13 + 1;
        local_94 = local_94 + -1;
      } while (local_94 != 0);
      local_10 = local_10 + 1;
      local_5c = local_5c + 8;
      local_64 = local_64 + 4;
    } while (local_10 < uVar10);
  }
  local_10 = (uint)param_6;
  if (param_6 < uVar10 - 1) {
    puVar13 = (undefined1 *)(param_3 + (int)param_4 * -8);
    do {
      param_6 = puVar13 + 8;
      iVar2 = *(int *)(param_7 + *(int *)(*(int *)(param_1 + 0x24) + 4 + local_10 * 4) * 4);
      iVar14 = iVar2 * iVar2 * 3 >> 5;
      param_4 = param_6;
      pbVar4 = puVar13 + 6;
      local_50 = 8;
      do {
        aiStack_40[2] = (int)pbVar4[-1];
        aiStack_40[1] = (int)pbVar4[-2];
        aiStack_40[4] = (int)pbVar4[1];
        aiStack_40[3] = (int)*pbVar4;
        local_2c[0] = (uint)pbVar4[2];
        local_2c[1] = (uint)pbVar4[3];
        local_2c[2] = (uint)pbVar4[4];
        local_2c[3] = (uint)pbVar4[5];
        local_8 = 0;
        local_c = 0;
        local_14 = 0;
        local_44 = 0;
        param_5 = 1;
        do {
          iVar15 = aiStack_40[param_5];
          local_44 = local_44 + iVar15;
          local_c = local_c + iVar15 * iVar15;
          param_5 = param_5 + 1;
        } while (param_5 < 5);
        param_5 = 5;
        do {
          iVar15 = aiStack_40[param_5];
          local_14 = local_14 + iVar15;
          local_8 = local_8 + iVar15 * iVar15;
          param_5 = param_5 + 1;
        } while (param_5 < 9);
        local_c = local_c - (local_44 + 1 >> 1) * (local_44 >> 1);
        local_8 = local_8 - (local_14 + 1 >> 1) * (local_14 >> 1);
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + local_10 * 4);
        *piVar5 = *piVar5 + local_c;
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + 4 + local_10 * 4);
        *piVar5 = *piVar5 + local_8;
        if (((local_c < iVar14) && (local_8 < iVar14)) &&
           (((int)(local_2c[0] - aiStack_40[4]) < iVar2 &&
            ((int)(aiStack_40[4] - local_2c[0]) < iVar2)))) {
          iVar15 = (uint)pbVar4[-2] - (uint)pbVar4[-3];
          if (iVar15 < 1) {
            iVar15 = (uint)pbVar4[-3] - (uint)pbVar4[-2];
          }
          if (iVar15 < iVar2) {
            bVar1 = pbVar4[-3];
          }
          else {
            bVar1 = pbVar4[-2];
          }
          uVar6 = (uint)bVar1;
          iVar15 = (uint)pbVar4[5] - (uint)pbVar4[6];
          if (iVar15 < 1) {
            iVar15 = (uint)pbVar4[6] - (uint)pbVar4[5];
          }
          if (iVar15 < iVar2) {
            bVar1 = pbVar4[6];
          }
          else {
            bVar1 = pbVar4[5];
          }
          uVar12 = (uint)bVar1;
          iVar15 = aiStack_40[4] + uVar6 * 3 + aiStack_40[3] + aiStack_40[2] + 4 + aiStack_40[1];
          iVar9 = iVar15 + (local_2c[0] - uVar6);
          pbVar4[-2] = (byte)((int)(((iVar15 + aiStack_40[1]) * 2 - aiStack_40[4]) + local_2c[0]) >>
                             4);
          iVar15 = iVar9 + (local_2c[1] - uVar6);
          pbVar4[-1] = (byte)((int)(((aiStack_40[2] + iVar9) * 2 - local_2c[0]) + local_2c[1]) >> 4)
          ;
          iVar9 = iVar15 + (local_2c[2] - uVar6);
          *pbVar4 = (byte)((int)(((aiStack_40[3] + iVar15) * 2 - local_2c[1]) + local_2c[2]) >> 4);
          iVar15 = iVar9 + (local_2c[3] - aiStack_40[1]);
          pbVar4[1] = (byte)((int)((((iVar9 + aiStack_40[4]) * 2 - local_2c[2]) - aiStack_40[1]) +
                                   uVar6 + local_2c[3]) >> 4);
          *param_4 = (char)((int)((((local_2c[0] + iVar15) * 2 - local_2c[3]) - aiStack_40[2]) +
                                  uVar12 + aiStack_40[1]) >> 4);
          iVar15 = iVar15 + (uVar12 - aiStack_40[2]);
          iVar9 = iVar15 + (uVar12 - aiStack_40[3]);
          pbVar4[3] = (byte)((int)(((local_2c[1] + iVar15) * 2 - aiStack_40[3]) + aiStack_40[2]) >>
                            4);
          pbVar4[4] = (byte)((int)(((local_2c[2] + iVar9) * 2 - aiStack_40[4]) + aiStack_40[3]) >> 4
                            );
          pbVar4[5] = (byte)((int)(((iVar9 + uVar12 + local_2c[3]) * 2 - local_2c[0]) -
                                  aiStack_40[4]) >> 4);
        }
        param_4 = param_4 + iVar3;
        pbVar4 = pbVar4 + iVar3;
        local_50 = local_50 + -1;
      } while (local_50 != 0);
      local_10 = local_10 + 1;
      puVar13 = param_6;
    } while (local_10 < uVar10 - 1);
  }
  return;
}

