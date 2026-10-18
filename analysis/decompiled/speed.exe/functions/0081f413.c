/* speed.exe 0081f413 FUN_0081f413; analysis pseudocode, not buildable source.
 * calls 0081f39d FUN_0081f39d
 * calls 0081f3ef FUN_0081f3ef
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0081f413(uint *param_1,uint param_2,uint *param_3,int param_4,int param_5)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  int local_14;
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_14 = -9;
  if (0 < (int)param_1) {
    puVar11 = (undefined4 *)&DAT_009c225c;
    for (uVar6 = (uint)param_1 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar6 = (uint)(((uint)param_1 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined2 *)puVar11 = 0xffff;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    }
  }
  _DAT_009c2268 = _DAT_009c2268 + 0x100;
  if ((int)_DAT_009c2268 < 0) {
    _DAT_009c2268 = 0;
  }
  puVar8 = param_1;
  if (0 < (int)param_1) {
    local_10 = param_1;
    do {
      uVar6 = 0xffffffff;
      iVar12 = -1;
      if (param_4 < param_5) {
        puVar8 = DAT_009c21f4 + param_4 * 0x24 + 0xb;
        iVar9 = param_4;
        do {
          if (*(byte *)((int)puVar8 + 0x41) == 0) {
            uVar13 = FUN_0081f3ef(iVar9,local_8);
            puVar8 = (uint *)((ulonglong)uVar13 >> 0x20);
            if (((int)uVar13 == 0) && (*puVar8 < uVar6)) {
              uVar6 = *puVar8;
              iVar12 = iVar9;
            }
          }
          iVar9 = iVar9 + 1;
          puVar8 = puVar8 + 0x24;
        } while (iVar9 < param_5);
        if (-1 < iVar12) {
          (&DAT_009c225c)[(int)local_8] = (short)iVar12;
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      local_10 = (uint *)((int)local_10 + -1);
    } while (local_10 != (uint *)0x0);
  }
  for (local_10 = local_8; (int)local_10 < (int)param_1; local_10 = (uint *)((int)local_10 + 1)) {
    local_c = param_2;
    if (DAT_009c2054 == '\0') {
      local_c = param_2 - 1;
    }
    iVar12 = -1;
    uVar6 = 0xffffffff;
    iVar9 = param_4;
    if (param_4 < param_5) {
      do {
        uVar13 = FUN_0081f3ef(iVar9,local_8);
        pbVar7 = (byte *)((ulonglong)uVar13 >> 0x20);
        if (((int)uVar13 == 0) && (*pbVar7 < 0x65)) {
          uVar5 = (uint)*pbVar7;
          if ((int)uVar5 < (int)local_c) {
            uVar10 = *(uint *)(pbVar7 + 2);
            local_c = uVar5;
          }
          else if ((uVar5 != local_c) || (uVar10 = *(uint *)(pbVar7 + 2), uVar6 <= uVar10))
          goto LAB_0081f527;
          iVar12 = iVar9;
          uVar6 = uVar10;
        }
LAB_0081f527:
        iVar9 = iVar9 + 1;
        puVar8 = (uint *)(pbVar7 + 0x90);
      } while (iVar9 < param_5);
      if (-1 < iVar12) {
        (&DAT_009c225c)[(int)local_8] = (short)iVar12;
        local_8 = (uint *)((int)local_8 + 1);
        if ((int)param_1 <= (int)local_8) break;
      }
    }
  }
  if (local_8 == param_1) {
    do {
      iVar12 = 0;
      bVar4 = true;
      if ((int)param_1 + -1 < 1) break;
      do {
        sVar2 = (&DAT_009c225c)[iVar12];
        sVar3 = (&DAT_009c225e)[iVar12];
        if (sVar3 < sVar2) {
          (&DAT_009c225c)[iVar12] = sVar3;
          (&DAT_009c225e)[iVar12] = sVar2;
          bVar4 = false;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)((int)param_1 + -1));
    } while (!bVar4);
    *param_3 = (int)DAT_009c225c | _DAT_009c2268;
    local_14 = (int)DAT_009c225c;
    iVar12 = 0;
    if (0 < (int)local_8) {
      do {
        puVar8 = DAT_009c21f4 + (&DAT_009c225c)[iVar12] * 0x24;
        uVar6 = *puVar8;
        if (*(byte *)((int)puVar8 + 0x6d) != 0) {
          if ((int)uVar6 < 0) {
            uVar6 = DAT_009c21f4[(short)puVar8[10] * 0x24];
          }
          FUN_0081f39d(uVar6);
        }
        *(byte *)((int)puVar8 + 0x6d) = 1;
        puVar8[0xb] = DAT_009c2190;
        iVar12 = iVar12 + 1;
        *(byte *)((int)puVar8 + 0x2a) = (byte)param_2;
      } while (iVar12 < (int)local_8);
    }
    DAT_009c21f4[DAT_009c225c * 0x24] = *param_3;
    puVar8 = DAT_009c21f4;
    *(short *)(DAT_009c21f4 + DAT_009c225c * 0x24 + 1) = DAT_009c225c;
    *(undefined2 *)(DAT_009c21f4 + DAT_009c225c * 0x24 + 10) = 0xffff;
    iVar12 = 1;
    if (1 < (int)local_8) {
      do {
        psVar1 = &DAT_009c225c + iVar12;
        *(short *)((int)DAT_009c21f4 + (iVar12 + DAT_009c225c * 0x48) * 2 + 4) = *psVar1;
        sVar2 = *psVar1;
        DAT_009c21f4[sVar2 * 0x24] = 0xffffffff;
        puVar8 = (uint *)CONCAT22((short)((uint)(sVar2 * 0x90) >> 0x10),DAT_009c225c);
        iVar12 = iVar12 + 1;
        *(short *)(DAT_009c21f4 + *psVar1 * 0x24 + 10) = DAT_009c225c;
      } while (iVar12 < (int)local_8);
    }
  }
  return CONCAT44(puVar8,local_14);
}

