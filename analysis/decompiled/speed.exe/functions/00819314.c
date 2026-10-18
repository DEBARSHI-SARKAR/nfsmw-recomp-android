/* speed.exe 00819314 FUN_00819314; analysis pseudocode, not buildable source.
 */

void FUN_00819314(uint param_1,byte *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  byte local_28 [16];
  int local_18;
  uint local_14;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
  bVar4 = 0xff;
  bVar8 = 0;
  if (param_5 != 0) {
    local_c = (byte *)param_5;
    pbVar3 = param_2;
    uVar5 = param_4;
    do {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        bVar2 = *pbVar3;
        if (bVar2 < bVar4) {
          bVar4 = bVar2;
        }
        if (bVar8 < bVar2) {
          bVar8 = bVar2;
        }
        pbVar3 = pbVar3 + 1;
      }
      pbVar3 = pbVar3 + (param_3 - param_4);
      local_c = (byte *)((int)local_c - 1);
      uVar5 = param_4;
    } while (local_c != (byte *)0x0);
  }
  uVar5 = *(uint *)(param_1 + (0x124f - (uint)bVar4) * 4);
  uVar6 = *(uint *)(param_1 + 0x4540 + (uint)bVar8 * 4);
  param_1 = uVar5;
  if (uVar5 <= uVar6) {
    param_1 = uVar6;
  }
  iVar1 = param_1 + ((int)((uint)bVar8 - (uint)bVar4) >> 5);
  local_8 = param_2;
  if (param_5 != 0) {
    local_c = local_28 + -(int)param_2;
    local_18 = -param_3;
    local_14 = param_5;
    do {
      if (param_4 != 0) {
        local_10 = (byte *)param_4;
        pbVar3 = local_8;
        do {
          pbVar9 = pbVar3 + 1;
          uVar5 = (int)((uint)*pbVar3 - (uint)*pbVar9) >> 0x1f;
          uVar6 = (int)((uint)*pbVar3 - (uint)pbVar3[-1]) >> 0x1f;
          if (iVar1 < (int)(((uint)*pbVar3 - (uint)pbVar3[-1] ^ uVar6) - uVar6)) {
            bVar4 = *pbVar3;
          }
          else {
            bVar4 = pbVar3[-1];
          }
          if (iVar1 < (int)(((uint)*pbVar3 - (uint)*pbVar9 ^ uVar5) - uVar5)) {
            bVar8 = *pbVar3;
          }
          else {
            bVar8 = *pbVar9;
          }
          local_10 = (byte *)((int)local_10 - 1);
          pbVar3[(int)local_c] =
               (byte)((int)((uint)*pbVar3 * 2 + (uint)bVar4 + (uint)bVar8 + 2) >> 2);
          pbVar3 = pbVar9;
        } while (local_10 != (byte *)0x0);
      }
      pbVar3 = local_28;
      pbVar9 = local_8;
      for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar9 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar9 = pbVar9 + 1;
      }
      local_8 = local_8 + param_3;
      local_c = local_c + -param_3;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  local_c = (byte *)0x0;
  if (param_4 != 0) {
    local_10 = param_2;
    local_18 = (int)param_2 - param_3;
    do {
      local_14 = 0;
      pbVar3 = (byte *)(local_18 + (int)local_c);
      local_8 = param_2;
      local_10 = param_2;
      pbVar9 = param_2;
      if (param_5 != 0) {
        do {
          pbVar9 = pbVar9 + param_3;
          uVar5 = (uint)*local_8;
          uVar6 = (int)(uVar5 - *pbVar9) >> 0x1f;
          uVar7 = (int)(uVar5 - *pbVar3) >> 0x1f;
          if (iVar1 < (int)((uVar5 - *pbVar3 ^ uVar7) - uVar7)) {
            param_2 = (byte *)(uVar5 * 3);
          }
          else {
            param_2 = (byte *)(uVar5 * 2 + (uint)*pbVar3);
          }
          if ((int)((uVar5 - *pbVar9 ^ uVar6) - uVar6) <= iVar1) {
            uVar5 = (uint)*pbVar9;
          }
          param_2 = (byte *)((int)param_2 + uVar5);
          local_28[local_14] = (byte)((int)param_2 + 2 >> 2);
          local_8 = local_8 + param_3;
          pbVar3 = pbVar3 + param_3;
          local_14 = local_14 + 1;
        } while (local_14 < param_5);
      }
      uVar5 = 0;
      pbVar3 = local_10;
      if (param_5 != 0) {
        do {
          *pbVar3 = local_28[uVar5];
          pbVar3 = pbVar3 + param_3;
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_5);
      }
      local_c = (byte *)((int)local_c + 1);
      param_2 = local_10 + 1;
      local_10 = param_2;
    } while (local_c < param_4);
  }
  return;
}

