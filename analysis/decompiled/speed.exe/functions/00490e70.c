/* speed.exe 00490e70 FUN_00490e70; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00490e70(ushort *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
            ,float param_8,int param_9,ushort *param_10)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  float *pfVar7;
  float *pfVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort *puVar16;
  
  iVar4 = param_6;
  if (param_3 != param_2) {
    if (((param_3 == 0) || (param_2 == -1)) || (param_3 < param_2)) {
      param_2 = 0;
      if (0 < param_9) {
        do {
          uVar15 = (uint)*(ushort *)(param_7 + (uint)param_10[param_2] * 2);
          iVar5 = 0;
          puVar6 = param_1 + (uint)param_10[param_2] * param_6 * 6 + 2;
          if (3 < param_6) {
            iVar13 = (param_6 - 4U >> 2) + 1;
            iVar5 = iVar13 * 4;
            puVar11 = (undefined4 *)(param_5 + 8 + uVar15 * 4);
            uVar15 = uVar15 + iVar5;
            do {
              puVar11[-2] = *(undefined4 *)(puVar6 + 4);
              puVar11[-1] = *(undefined4 *)(puVar6 + 10);
              *puVar11 = *(undefined4 *)(puVar6 + 0x10);
              puVar11[1] = *(undefined4 *)(puVar6 + 0x16);
              puVar11 = puVar11 + 4;
              puVar6 = puVar6 + 0x18;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          if (iVar5 < param_6) {
            puVar11 = (undefined4 *)(param_5 + uVar15 * 4);
            puVar6 = puVar6 + 4;
            iVar5 = param_6 - iVar5;
            do {
              *puVar11 = *(undefined4 *)puVar6;
              puVar11 = puVar11 + 1;
              puVar6 = puVar6 + 6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          param_2 = param_2 + 1;
        } while (param_2 < param_9);
      }
      param_2 = 0;
    }
    else if (0 < param_9) {
      param_6 = param_9;
      puVar6 = param_10;
      do {
        uVar15 = (uint)*(ushort *)(param_7 + (uint)*puVar6 * 2);
        iVar5 = 0;
        if (3 < iVar4) {
          puVar11 = (undefined4 *)(param_5 + 8 + uVar15 * 4);
          uVar15 = uVar15 + 4 + (iVar4 - 4U & 0xfffffffc);
          do {
            puVar11[-2] = *(undefined4 *)(param_4 + ((uint)*puVar6 * iVar4 + iVar5) * 4);
            puVar11[-1] = *(undefined4 *)(param_4 + 4 + ((uint)*puVar6 * iVar4 + iVar5) * 4);
            *puVar11 = *(undefined4 *)(param_4 + 8 + ((uint)*puVar6 * iVar4 + iVar5) * 4);
            puVar11[1] = *(undefined4 *)(param_4 + 0xc + ((uint)*puVar6 * iVar4 + iVar5) * 4);
            iVar5 = iVar5 + 4;
            puVar11 = puVar11 + 4;
          } while (iVar5 < iVar4 + -3);
        }
        if (iVar5 < iVar4) {
          puVar11 = (undefined4 *)(param_5 + uVar15 * 4);
          do {
            *puVar11 = *(undefined4 *)(param_4 + ((uint)*puVar6 * iVar4 + iVar5) * 4);
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        puVar6 = puVar6 + 1;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    if (param_3 != 0) {
      uVar2 = *param_1;
      iVar5 = param_2;
      if ((char)param_1[1] == '\b') {
        for (; iVar5 < param_3; iVar5 = iVar5 + 1) {
          param_2 = 0;
          if (0 < param_9) {
            do {
              iVar13 = iVar4 * (uint)param_10[param_2];
              pfVar8 = (float *)(param_1 + iVar13 * 6 + 2);
              pbVar9 = (byte *)((int)param_1 +
                               iVar13 + (uint)*param_1 * iVar5 + (uint)uVar2 * 0xc + 4);
              uVar15 = (uint)*(ushort *)(param_7 + (uint)param_10[param_2] * 2);
              param_6 = 0;
              if (3 < iVar4) {
                iVar14 = (iVar4 - 4U >> 2) + 1;
                iVar13 = uVar15 * 4;
                param_6 = iVar14 * 4;
                uVar15 = uVar15 + param_6;
                pbVar10 = pbVar9;
                pfVar7 = pfVar8;
                pfVar12 = (float *)(param_5 + 8 + iVar13);
                do {
                  pfVar8 = pfVar7 + 0xc;
                  pbVar9 = pbVar10 + 4;
                  iVar14 = iVar14 + -1;
                  pfVar12[-2] = ((float)*pbVar10 * pfVar7[1] + *pfVar7) * param_8 + pfVar12[-2];
                  pfVar12[-1] = ((float)pbVar10[1] * pfVar7[4] + pfVar7[3]) * param_8 + pfVar12[-1];
                  *pfVar12 = ((float)pbVar10[2] * pfVar7[7] + pfVar7[6]) * param_8 + *pfVar12;
                  pfVar12[1] = ((float)pbVar10[3] * pfVar7[10] + pfVar7[9]) * param_8 + pfVar12[1];
                  pbVar10 = pbVar9;
                  pfVar7 = pfVar8;
                  pfVar12 = pfVar12 + 4;
                } while (iVar14 != 0);
              }
              if (param_6 < iVar4) {
                param_6 = iVar4 - param_6;
                pfVar7 = (float *)(param_5 + uVar15 * 4);
                do {
                  bVar1 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                  param_6 = param_6 + -1;
                  *pfVar7 = ((float)bVar1 * pfVar8[1] + *pfVar8) * param_8 + *pfVar7;
                  pfVar8 = pfVar8 + 3;
                  pfVar7 = pfVar7 + 1;
                } while (param_6 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_2 < param_9);
          }
        }
      }
      else if (((char)param_1[1] == '\x10') && (param_4 = param_2, param_2 < param_3)) {
        do {
          param_2 = 0;
          if (0 < param_9) {
            do {
              iVar5 = (uint)param_10[param_2] * iVar4;
              puVar6 = param_1 + (uint)uVar2 * 6 + (uint)*param_1 * param_4 + iVar5 + 2;
              uVar15 = (uint)*(ushort *)(param_7 + (uint)param_10[param_2] * 2);
              pfVar8 = (float *)(param_1 + iVar5 * 6 + 2);
              param_6 = 0;
              if (3 < iVar4) {
                iVar13 = (iVar4 - 4U >> 2) + 1;
                iVar5 = uVar15 * 4;
                param_6 = iVar13 * 4;
                uVar15 = uVar15 + param_6;
                pfVar7 = pfVar8;
                pfVar12 = (float *)(param_5 + 8 + iVar5);
                puVar16 = puVar6;
                do {
                  pfVar8 = pfVar7 + 0xc;
                  puVar6 = puVar16 + 4;
                  iVar13 = iVar13 + -1;
                  pfVar12[-2] = ((float)*puVar16 * pfVar7[1] + *pfVar7) * param_8 + pfVar12[-2];
                  pfVar12[-1] = ((float)puVar16[1] * pfVar7[4] + pfVar7[3]) * param_8 + pfVar12[-1];
                  *pfVar12 = ((float)puVar16[2] * pfVar7[7] + pfVar7[6]) * param_8 + *pfVar12;
                  pfVar12[1] = ((float)puVar16[3] * pfVar7[10] + pfVar7[9]) * param_8 + pfVar12[1];
                  pfVar7 = pfVar8;
                  pfVar12 = pfVar12 + 4;
                  puVar16 = puVar6;
                } while (iVar13 != 0);
              }
              if (param_6 < iVar4) {
                param_6 = iVar4 - param_6;
                pfVar7 = (float *)(param_5 + uVar15 * 4);
                do {
                  uVar3 = *puVar6;
                  puVar6 = puVar6 + 1;
                  param_6 = param_6 + -1;
                  *pfVar7 = ((float)uVar3 * pfVar8[1] + *pfVar8) * param_8 + *pfVar7;
                  pfVar8 = pfVar8 + 3;
                  pfVar7 = pfVar7 + 1;
                } while (param_6 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_2 < param_9);
          }
          param_4 = param_4 + 1;
        } while (param_4 < param_3);
        return;
      }
    }
  }
  return;
}

