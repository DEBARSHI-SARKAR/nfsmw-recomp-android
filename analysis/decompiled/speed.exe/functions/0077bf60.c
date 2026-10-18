/* speed.exe 0077bf60 FUN_0077bf60; analysis pseudocode, not buildable source.
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 00762300 FUN_00762300
 * calls 00765c30 FUN_00765c30
 * calls 007753e0 FUN_007753e0
 * calls 00764ad0 FUN_00764ad0
 * calls 0077bcd0 FUN_0077bcd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0077bf60(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  float local_34;
  float local_30;
  uint local_2c;
  ushort *local_28;
  uint local_20;
  float local_14;
  float local_10;
  float local_c [3];
  
  sVar1 = *(short *)(param_1 + 0x8e);
  iVar6 = sVar1 * 0x16;
  puVar7 = (ushort *)(iVar6 + DAT_009b38c0);
  if ((*(byte *)(iVar6 + 10 + DAT_009b38c0) & 1) != 0) {
    local_c[0] = (float)((uint)*puVar7 * 0x20 + DAT_009b38bc);
    local_c[1] = (float)((uint)puVar7[1] * 0x20 + DAT_009b38bc);
    uVar11 = (int)*(char *)(param_1 + 0x8c) ^ 1;
    fVar3 = local_c[uVar11];
    FUN_00764ad0((int)*(char *)(param_1 + 0x8c),local_c);
    if (uVar11 == 1) {
      local_c[0] = local_c[0] * _DAT_00890da8;
      local_c[1] = local_c[1] * _DAT_00890da8;
    }
    FUN_00762300(local_c);
    puVar7 = (ushort *)0x0;
    local_2c = 0;
    local_34 = 0.7;
    local_28 = (ushort *)0x0;
    local_30 = 1.0;
    if (-1 < param_2) {
      local_30 = -1.0;
    }
    local_20 = (uint)*(byte *)((int)fVar3 + 0x10);
    if (local_20 != 0) {
      puVar14 = (ushort *)((int)fVar3 + 0x12);
      do {
        if ((((uint)*puVar14 != (int)sVar1) &&
            (iVar6 = (uint)*puVar14 * 0x16, puVar15 = (ushort *)(iVar6 + DAT_009b38c0),
            (*(byte *)(iVar6 + 10 + DAT_009b38c0) & 1) != 0)) && ((puVar15[5] & 0x8000) != 0)) {
          uVar11 = (uint)((int)*(short *)((int)fVar3 + 0xc) == (uint)*puVar15);
          FUN_00764ad0(uVar11,&local_14);
          if (uVar11 == 0) {
            local_14 = local_14 * _DAT_00890da8;
            local_10 = local_10 * _DAT_00890da8;
          }
          FUN_00762300(&local_14);
          if ((_DAT_00890968 <= (local_10 * local_c[0] - local_14 * local_c[1]) * local_30) &&
             (fVar4 = local_14 * local_c[0] + local_10 * local_c[1], local_34 < fVar4)) {
            puVar7 = puVar15;
            local_34 = fVar4;
            local_2c = uVar11;
            local_28 = puVar15;
          }
        }
        puVar14 = puVar14 + 1;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
      if (puVar7 != (ushort *)0x0) {
        uVar2 = puVar7[4];
        bVar5 = (byte)(puVar7[5] >> 8);
        if (local_2c == 0) {
          bVar5 = bVar5 >> 2;
        }
        else {
          bVar5 = bVar5 >> 1;
        }
        bVar5 = local_2c == 1 ^ bVar5 & 1;
        iVar6 = (uint)puVar7[local_2c] * 0x20 + DAT_009b38bc;
        if ((iVar6 == 0) || (sVar1 = *(short *)(iVar6 + 0xe), sVar1 < 0)) {
          pbVar10 = &DAT_009b3830;
        }
        else {
          pbVar10 = (byte *)(sVar1 * 0x40 + DAT_009b38b8);
        }
        uVar11 = (uint)*pbVar10;
        local_30 = -NAN;
        if (param_2 < 0) {
          uVar9 = uVar11 - 1;
        }
        else {
          uVar9 = 0;
          local_30 = (float)uVar11;
        }
        if (bVar5 == 0) {
          uVar12 = (uint)pbVar10[1];
        }
        else {
          uVar12 = uVar11 - pbVar10[1];
        }
        uVar13 = uVar12;
        if ((float)uVar9 != local_30) {
          iVar6 = (uVar11 - uVar9) * 4 + -4;
          do {
            iVar8 = iVar6;
            if (bVar5 == 0) {
              iVar8 = uVar9 * 4;
            }
            uVar13 = uVar9;
            if ((*(uint *)(&DAT_008b5aa0 + *(int *)(param_1 + 0x80) * 4) &
                1 << ((byte)*(undefined4 *)(pbVar10 + iVar8 + 4) & 0xf)) != 0) break;
            uVar9 = uVar9 + param_2;
            iVar6 = iVar6 + param_2 * -4;
            uVar13 = uVar12;
          } while ((float)uVar9 != local_30);
        }
        if (bVar5 == 0) {
          uVar9 = (uint)pbVar10[1];
          uVar11 = uVar13;
        }
        else {
          uVar9 = uVar11 - pbVar10[1];
          uVar11 = (uVar11 - uVar13) - 1;
        }
        fVar3 = (float)(*(int *)(pbVar10 + uVar11 * 4 + 4) >> 0x12) * _DAT_009b3a68;
        if ((int)uVar13 < (int)uVar9) {
          fVar3 = -fVar3;
        }
        *(float *)(param_1 + 0x2c4) = fVar3;
        *(float *)(param_1 + 0x2cc) = fVar3;
        *(float *)(param_1 + 0x2c8) = fVar3;
        *(undefined1 *)(param_1 + 0x8c) = (undefined1)local_2c;
        *(ushort *)(param_1 + 0x8e) = uVar2;
        FUN_0076f140(local_28,0);
        FUN_0076f4a0(local_28,fVar3,0);
        FUN_00765c30(local_28);
        FUN_0077bcd0(param_1 + 0x98,local_c,param_1 + 0x90,0x3dcccccd,(int)(short)uVar2);
        FUN_007753e0(local_28);
        return 1;
      }
    }
  }
  return 0;
}

