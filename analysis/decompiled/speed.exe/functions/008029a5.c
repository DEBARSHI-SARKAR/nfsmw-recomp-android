/* speed.exe 008029a5 FUN_008029a5; analysis pseudocode, not buildable source.
 */

void FUN_008029a5(int param_1,byte *param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_50 [5];
  uint local_3c [7];
  int local_20;
  int local_1c;
  undefined1 *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_7 + *(int *)(param_1 + 0xc) * 4);
  uVar5 = param_5 + -1 + param_6;
  if (param_6 < uVar5) {
    iVar3 = iVar2 * iVar2 * 3 >> 5;
    iVar1 = (int)param_2 - param_3;
    local_14 = (undefined1 *)(param_3 + 5);
    local_20 = uVar5 - param_6;
    do {
      local_10 = param_2 + 8;
      local_1c = 8;
      pbVar4 = local_10;
      puVar7 = local_14;
      do {
        uVar5 = (uint)pbVar4[-5];
        local_50[2] = (int)(byte)puVar7[iVar1];
        local_50[1] = (int)pbVar4[-4];
        local_3c[0] = (uint)*pbVar4;
        local_50[3] = (int)pbVar4[-2];
        local_c = 0;
        local_8 = 0;
        local_50[4] = (int)pbVar4[-1];
        local_3c[1] = (uint)pbVar4[1];
        local_3c[2] = (uint)pbVar4[2];
        local_3c[3] = (uint)pbVar4[3];
        local_3c[4] = (uint)pbVar4[4];
        param_7 = 1;
        do {
          iVar6 = local_50[param_7] - local_3c[param_7 - 6];
          if (iVar6 < 1) {
            iVar6 = local_3c[param_7 - 6] - local_50[param_7];
          }
          local_8 = local_8 + iVar6;
          param_7 = param_7 + 1;
        } while (param_7 < 5);
        param_7 = 5;
        do {
          iVar6 = local_50[param_7] - local_50[param_7 + 1];
          if (iVar6 < 1) {
            iVar6 = local_50[param_7 + 1] - local_50[param_7];
          }
          local_c = local_c + iVar6;
          param_7 = param_7 + 1;
        } while (param_7 < 9);
        if ((((local_8 < iVar3) && (local_c < iVar3)) && ((int)(local_3c[0] - local_50[4]) < iVar2))
           && ((int)(local_50[4] - local_3c[0]) < iVar2)) {
          iVar6 = local_50[4] + uVar5 * 2 + uVar5 + local_50[3] + local_50[2] + 4 + local_50[1];
          puVar7[-1] = (char)(local_50[1] + iVar6 >> 3);
          iVar6 = iVar6 + (local_3c[0] - uVar5);
          *puVar7 = (char)(local_50[2] + iVar6 >> 3);
          iVar6 = iVar6 + (local_3c[1] - uVar5);
          puVar7[1] = (char)(local_50[3] + iVar6 >> 3);
          iVar6 = iVar6 + (local_3c[2] - uVar5);
          puVar7[2] = (char)(local_50[4] + iVar6 >> 3);
          iVar6 = iVar6 + (local_3c[3] - local_50[1]);
          puVar7[3] = (char)((int)(iVar6 + local_3c[0]) >> 3);
          iVar6 = iVar6 + (local_3c[4] - local_50[2]);
          puVar7[4] = (char)((int)(local_3c[1] + iVar6) >> 3);
          iVar6 = iVar6 + (local_3c[4] - local_50[3]);
          puVar7[5] = (char)((int)(local_3c[2] + iVar6) >> 3);
          puVar7[6] = (char)((int)((iVar6 - local_50[4]) + local_3c[4] + local_3c[3]) >> 3);
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x38) +
                          ((int)(((local_3c[0] - local_50[4]) * 3 - local_3c[1]) + 4 + local_50[3])
                          >> 3) * 4);
          puVar7[2] = (&DAT_009c6c00)[local_50[4] + iVar6];
          puVar7[3] = (&DAT_009c6c00)[local_3c[0] - iVar6];
        }
        pbVar4 = pbVar4 + param_4;
        puVar7 = puVar7 + param_4;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = local_14 + 8;
      local_20 = local_20 + -1;
      param_2 = local_10;
    } while (local_20 != 0);
  }
  return;
}

