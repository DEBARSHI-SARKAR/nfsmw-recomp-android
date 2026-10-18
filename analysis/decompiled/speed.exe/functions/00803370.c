/* speed.exe 00803370 FUN_00803370; analysis pseudocode, not buildable source.
 */

void FUN_00803370(int param_1,byte *param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte *local_88;
  int local_6c;
  byte *local_68;
  byte *local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  int local_54;
  byte *local_4c;
  undefined1 *local_48;
  byte *local_44;
  uint local_40;
  int local_3c [6];
  uint local_24 [5];
  int local_10;
  byte *local_c;
  int local_8;
  
  iVar1 = *(int *)(param_7 + *(int *)(param_1 + 0xc) * 4);
  uVar7 = param_5 + param_6;
  local_40 = param_6;
  if (param_6 < uVar7) {
    iVar4 = iVar1 * 3 >> 2;
    iVar10 = (int)param_2 - param_3;
    local_3c[0] = param_6 << 2;
    local_54 = uVar7 * 4;
    iVar2 = param_4 * 3;
    local_48 = (undefined1 *)(param_3 + param_4 * -8);
    local_4c = local_48 + -4;
    local_44 = param_2 + param_4 * -3;
    local_64 = param_2;
    local_68 = param_2 + param_4;
    local_58 = (undefined1 *)(param_3 + param_4 * -4);
    local_60 = (undefined1 *)(param_4 * 2 + param_3);
    do {
      local_6c = 8;
      local_88 = local_64;
      local_c = local_68;
      puVar3 = local_58;
      puVar9 = local_60;
      pbVar11 = local_44;
      do {
        local_3c[1] = (int)(pbVar11 + param_4 * 2)[param_4 * -4];
        local_3c[5] = (int)pbVar11[param_4 * 2];
        local_3c[2] = (int)(byte)puVar3[iVar10];
        local_3c[3] = (int)*pbVar11;
        local_3c[4] = (int)pbVar11[param_4];
        local_8 = 0;
        local_24[0] = (uint)*local_88;
        local_24[1] = (uint)*local_c;
        local_24[2] = (uint)(byte)puVar9[iVar10];
        local_10 = 0;
        local_24[3] = (uint)local_c[param_4 * 2];
        local_24[4] = (uint)local_c[iVar2];
        param_7 = 1;
        do {
          iVar8 = local_3c[param_7 + 1] - local_3c[param_7];
          if (iVar8 < 1) {
            iVar8 = local_3c[param_7] - local_3c[param_7 + 1];
          }
          local_10 = local_10 + iVar8;
          param_7 = param_7 + 1;
        } while (param_7 < 5);
        param_7 = 5;
        do {
          iVar8 = local_3c[param_7 + 1] - local_3c[param_7 + 2];
          if (iVar8 < 1) {
            iVar8 = local_3c[param_7 + 2] - local_3c[param_7 + 1];
          }
          local_8 = local_8 + iVar8;
          param_7 = param_7 + 1;
        } while (param_7 < 9);
        param_7 = 0xff;
        if (local_10 < 0x100) {
          param_7 = local_10;
        }
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + local_3c[0]);
        *piVar5 = *piVar5 + param_7;
        param_7 = 0xff;
        if (local_8 < 0x100) {
          param_7 = local_8;
        }
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + local_54);
        *piVar5 = *piVar5 + param_7;
        if ((((local_10 < iVar4) && (local_8 < iVar4)) && ((int)(local_24[0] - local_3c[5]) < iVar1)
            ) && ((int)(local_3c[5] - local_24[0]) < iVar1)) {
          iVar8 = local_3c[5] + local_3c[1] * 3 + local_3c[4] + local_3c[3] + 4 + local_3c[2];
          *puVar3 = (char)(local_3c[2] + iVar8 >> 3);
          iVar8 = iVar8 + (local_24[0] - local_3c[1]);
          puVar3[param_4] = (char)(local_3c[3] + iVar8 >> 3);
          iVar8 = iVar8 + (local_24[1] - local_3c[1]);
          puVar3[param_4 * 2] = (char)(local_3c[4] + iVar8 >> 3);
          iVar8 = iVar8 + (local_24[2] - local_3c[1]);
          puVar3[iVar2] = (char)(local_3c[5] + iVar8 >> 3);
          iVar8 = iVar8 + (local_24[3] - local_3c[2]);
          iVar6 = iVar8 + (local_24[4] - local_3c[3]);
          puVar3[param_4 * 4] = (char)((int)(iVar8 + local_24[0]) >> 3);
          puVar9[-param_4] = (char)((int)(iVar6 + local_24[1]) >> 3);
          iVar6 = iVar6 + (local_24[4] - local_3c[4]);
          *puVar9 = (char)((int)(iVar6 + local_24[2]) >> 3);
          puVar9[param_4] = (char)((int)((iVar6 - local_3c[5]) + local_24[4] + local_24[3]) >> 3);
        }
        else {
          iVar8 = *(int *)(*(int *)(param_1 + 0x38) +
                          ((int)(((local_24[0] - local_3c[5]) * 3 - local_24[1]) + 4 + local_3c[4])
                          >> 3) * 4);
          puVar3[iVar2] = (&DAT_009c6c00)[local_3c[5] + iVar8];
          puVar3[param_4 * 4] = (&DAT_009c6c00)[local_24[0] - iVar8];
          *puVar3 = puVar3[iVar10];
          puVar3[param_4] = *pbVar11;
          puVar3[param_4 * 2] = pbVar11[param_4];
          puVar9[-param_4] = *local_c;
          *puVar9 = puVar9[iVar10];
          puVar9[param_4] = local_c[param_4 * 2];
        }
        local_88 = local_88 + 1;
        pbVar11 = pbVar11 + 1;
        local_c = local_c + 1;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
        local_6c = local_6c + -1;
      } while (local_6c != 0);
      if (local_40 != param_6) {
        local_c = local_48;
        local_6c = 8;
        pbVar11 = local_4c;
        do {
          local_3c[1] = (int)pbVar11[-1];
          local_3c[3] = (int)pbVar11[1];
          local_3c[2] = (int)*pbVar11;
          local_24[0] = (uint)pbVar11[4];
          local_3c[4] = (int)pbVar11[2];
          local_8 = 0;
          local_10 = 0;
          local_3c[5] = (int)pbVar11[3];
          local_24[1] = (uint)pbVar11[5];
          local_24[2] = (uint)pbVar11[6];
          local_24[3] = (uint)pbVar11[7];
          local_24[4] = (uint)pbVar11[8];
          param_7 = 1;
          do {
            iVar8 = local_3c[param_7 + 1] - local_3c[param_7];
            if (iVar8 < 1) {
              iVar8 = local_3c[param_7] - local_3c[param_7 + 1];
            }
            local_10 = local_10 + iVar8;
            param_7 = param_7 + 1;
          } while (param_7 < 5);
          param_7 = 5;
          do {
            iVar8 = local_3c[param_7 + 1] - local_3c[param_7 + 2];
            if (iVar8 < 1) {
              iVar8 = local_3c[param_7 + 2] - local_3c[param_7 + 1];
            }
            local_8 = local_8 + iVar8;
            param_7 = param_7 + 1;
          } while (param_7 < 9);
          param_7 = 0xff;
          if (local_10 < 0x100) {
            param_7 = local_10;
          }
          piVar5 = (int *)(*(int *)(param_1 + 0x28) + -4 + local_3c[0]);
          *piVar5 = *piVar5 + param_7;
          param_7 = 0xff;
          if (local_8 < 0x100) {
            param_7 = local_8;
          }
          piVar5 = (int *)(*(int *)(param_1 + 0x28) + local_3c[0]);
          *piVar5 = *piVar5 + param_7;
          if (((local_10 < iVar4) && (local_8 < iVar4)) &&
             (((int)(local_24[0] - local_3c[5]) < iVar1 &&
              ((int)(local_3c[5] - local_24[0]) < iVar1)))) {
            iVar8 = local_3c[5] + local_3c[1] * 2 + local_3c[1] + local_3c[4] + local_3c[3] + 4 +
                    local_3c[2];
            *pbVar11 = (byte)(iVar8 + local_3c[2] >> 3);
            iVar8 = iVar8 + (local_24[0] - local_3c[1]);
            iVar6 = iVar8 + (local_24[1] - local_3c[1]);
            pbVar11[1] = (byte)(iVar8 + local_3c[3] >> 3);
            iVar8 = iVar6 + (local_24[2] - local_3c[1]);
            pbVar11[2] = (byte)(iVar6 + local_3c[4] >> 3);
            iVar6 = iVar8 + (local_24[3] - local_3c[2]);
            pbVar11[3] = (byte)(iVar8 + local_3c[5] >> 3);
            *local_c = (char)((int)(iVar6 + local_24[0]) >> 3);
            iVar6 = iVar6 + (local_24[4] - local_3c[3]);
            iVar8 = iVar6 + (local_24[4] - local_3c[4]);
            pbVar11[5] = (byte)((int)(iVar6 + local_24[1]) >> 3);
            pbVar11[6] = (byte)((int)(iVar8 + local_24[2]) >> 3);
            pbVar11[7] = (byte)((int)((iVar8 - local_3c[5]) + local_24[4] + local_24[3]) >> 3);
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 0x38) +
                            ((int)(((local_24[0] - local_3c[5]) * 3 - local_24[1]) + 4 + local_3c[4]
                                  ) >> 3) * 4);
            pbVar11[3] = (&DAT_009c6c00)[local_3c[5] + iVar8];
            *local_c = (&DAT_009c6c00)[local_24[0] - iVar8];
          }
          local_c = local_c + param_4;
          pbVar11 = pbVar11 + param_4;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
      }
      local_3c[0] = local_3c[0] + 4;
      local_4c = local_4c + 8;
      local_48 = local_48 + 8;
      local_58 = local_58 + 8;
      local_60 = local_60 + 8;
      local_44 = local_44 + 8;
      local_68 = local_68 + 8;
      local_64 = local_64 + 8;
      local_40 = local_40 + 1;
      local_54 = local_54 + 4;
    } while (local_40 < uVar7);
  }
  return;
}

