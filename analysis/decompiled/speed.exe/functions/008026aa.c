/* speed.exe 008026aa FUN_008026aa; analysis pseudocode, not buildable source.
 */

void FUN_008026aa(int param_1,byte *param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  int aiStack_58 [5];
  uint local_44 [7];
  int local_28;
  undefined1 *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  uint local_c;
  int local_8;
  
  uVar2 = param_5 + -1 + param_6;
  local_c = param_6;
  if (param_6 < uVar2) {
    iVar3 = (int)param_2 - param_3;
    local_24 = (undefined1 *)(param_3 + 5);
    do {
      local_20 = param_2 + 8;
      iVar5 = *(int *)(param_7 + *(int *)(*(int *)(param_1 + 0x24) + 4 + local_c * 4) * 4);
      iVar6 = iVar5 * iVar5 * 3 >> 5;
      local_28 = 8;
      pbVar9 = local_20;
      puVar11 = local_24;
      do {
        aiStack_58[2] = (int)(byte)puVar11[iVar3];
        aiStack_58[1] = (int)pbVar9[-4];
        local_44[0] = (uint)*pbVar9;
        aiStack_58[3] = (int)pbVar9[-2];
        aiStack_58[4] = (int)pbVar9[-1];
        local_44[1] = (uint)pbVar9[1];
        local_44[2] = (uint)pbVar9[2];
        local_44[3] = (uint)pbVar9[3];
        local_8 = 0;
        param_5 = 0;
        local_1c = 0;
        local_18 = 0;
        param_6 = 1;
        do {
          iVar10 = aiStack_58[param_6];
          local_18 = local_18 + iVar10;
          param_5 = param_5 + iVar10 * iVar10;
          param_6 = param_6 + 1;
        } while (param_6 < 5);
        param_6 = 5;
        do {
          iVar10 = aiStack_58[param_6];
          local_1c = local_1c + iVar10;
          local_8 = local_8 + iVar10 * iVar10;
          param_6 = param_6 + 1;
        } while (param_6 < 9);
        param_5 = param_5 - (local_18 + 1 >> 1) * (local_18 >> 1);
        local_8 = local_8 - (local_1c + 1 >> 1) * (local_1c >> 1);
        piVar1 = (int *)(*(int *)(param_1 + 0x28) + local_c * 4);
        *piVar1 = *piVar1 + param_5;
        piVar1 = (int *)(*(int *)(param_1 + 0x28) + 4 + local_c * 4);
        *piVar1 = *piVar1 + local_8;
        if ((((param_5 < iVar6) && (local_8 < iVar6)) &&
            ((int)(local_44[0] - aiStack_58[4]) < iVar5)) &&
           ((int)(aiStack_58[4] - local_44[0]) < iVar5)) {
          iVar10 = (uint)pbVar9[-4] - (uint)pbVar9[-5];
          if (iVar10 < 1) {
            iVar10 = (uint)pbVar9[-5] - (uint)pbVar9[-4];
          }
          if (iVar10 < iVar5) {
            bVar4 = pbVar9[-5];
          }
          else {
            bVar4 = pbVar9[-4];
          }
          uVar7 = (uint)bVar4;
          iVar10 = (uint)pbVar9[3] - (uint)pbVar9[4];
          if (iVar10 < 1) {
            iVar10 = (uint)pbVar9[4] - (uint)pbVar9[3];
          }
          if (iVar10 < iVar5) {
            bVar4 = pbVar9[4];
          }
          else {
            bVar4 = pbVar9[3];
          }
          uVar8 = (uint)bVar4;
          iVar10 = aiStack_58[4] + uVar7 * 2 + uVar7 + aiStack_58[3] + aiStack_58[2] + 4 +
                   aiStack_58[1];
          puVar11[-1] = (char)((int)(((aiStack_58[1] + iVar10) * 2 - aiStack_58[4]) + local_44[0])
                              >> 4);
          iVar10 = iVar10 + (local_44[0] - uVar7);
          *puVar11 = (char)((int)(((aiStack_58[2] + iVar10) * 2 - local_44[0]) + local_44[1]) >> 4);
          iVar10 = iVar10 + (local_44[1] - uVar7);
          puVar11[1] = (char)((int)(((aiStack_58[3] + iVar10) * 2 - local_44[1]) + local_44[2]) >> 4
                             );
          iVar10 = iVar10 + (local_44[2] - uVar7);
          puVar11[2] = (char)((int)((((aiStack_58[4] + iVar10) * 2 - local_44[2]) - aiStack_58[1]) +
                                    uVar7 + local_44[3]) >> 4);
          iVar10 = iVar10 + (local_44[3] - aiStack_58[1]);
          puVar11[3] = (char)((int)((((iVar10 + local_44[0]) * 2 - local_44[3]) - aiStack_58[2]) +
                                    uVar8 + aiStack_58[1]) >> 4);
          iVar10 = iVar10 + (uVar8 - aiStack_58[2]);
          puVar11[4] = (char)((int)(((local_44[1] + iVar10) * 2 - aiStack_58[3]) + aiStack_58[2]) >>
                             4);
          iVar10 = iVar10 + (uVar8 - aiStack_58[3]);
          puVar11[5] = (char)((int)(((local_44[2] + iVar10) * 2 - aiStack_58[4]) + aiStack_58[3]) >>
                             4);
          puVar11[6] = (char)((int)(((iVar10 + uVar8 + local_44[3]) * 2 - local_44[0]) -
                                   aiStack_58[4]) >> 4);
        }
        else {
          iVar10 = *(int *)(*(int *)(param_1 + 0x38) +
                           ((int)(((local_44[0] - aiStack_58[4]) * 3 - local_44[1]) + 4 +
                                 aiStack_58[3]) >> 3) * 4);
          puVar11[2] = (&DAT_009c6c00)[aiStack_58[4] + iVar10];
          puVar11[3] = (&DAT_009c6c00)[local_44[0] - iVar10];
        }
        pbVar9 = pbVar9 + param_4;
        puVar11 = puVar11 + param_4;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_c = local_c + 1;
      local_24 = local_24 + 8;
      param_2 = local_20;
    } while (local_c < uVar2);
  }
  return;
}

