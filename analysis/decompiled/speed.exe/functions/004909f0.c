/* speed.exe 004909f0 FUN_004909f0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_004909f0(ushort *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
            ,int param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  undefined4 *puVar16;
  
  iVar4 = param_2;
  if (param_4 != param_3) {
    if (((param_4 < param_3) || (param_4 == 0)) || (param_3 == -1)) {
      param_2 = 0;
      if (0 < param_7) {
        do {
          iVar13 = (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4;
          iVar15 = 0;
          puVar6 = param_1 + iVar13 * 6 + 2;
          if (3 < iVar4) {
            iVar9 = (iVar4 - 4U >> 2) + 1;
            iVar15 = iVar9 * 4;
            puVar5 = (undefined4 *)(param_6 + 8 + iVar13 * 4);
            iVar13 = iVar13 + iVar15;
            do {
              puVar5[-2] = *(undefined4 *)(puVar6 + 4);
              puVar5[-1] = *(undefined4 *)(puVar6 + 10);
              *puVar5 = *(undefined4 *)(puVar6 + 0x10);
              puVar5[1] = *(undefined4 *)(puVar6 + 0x16);
              puVar5 = puVar5 + 4;
              puVar6 = puVar6 + 0x18;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          if (iVar15 < iVar4) {
            puVar6 = puVar6 + 4;
            puVar5 = (undefined4 *)(param_6 + iVar13 * 4);
            iVar15 = iVar4 - iVar15;
            do {
              *puVar5 = *(undefined4 *)puVar6;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 6;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          param_2 = param_2 + 1;
        } while (param_2 < param_7);
      }
      param_3 = 0;
    }
    else if ((param_6 != param_5) && (param_2 = 0, 0 < param_7)) {
      do {
        iVar13 = (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4;
        iVar15 = 0;
        if (3 < iVar4) {
          puVar5 = (undefined4 *)(param_6 + 4 + iVar13 * 4);
          puVar16 = (undefined4 *)(param_5 + 0xc + iVar13 * 4);
          iVar9 = (iVar4 - 4U >> 2) + 1;
          iVar15 = iVar9 * 4;
          iVar13 = iVar13 + iVar15;
          do {
            puVar5[-1] = puVar16[-3];
            *puVar5 = *(undefined4 *)((int)puVar5 + (param_5 - param_6));
            puVar5[1] = puVar16[-1];
            puVar5[2] = *puVar16;
            puVar5 = puVar5 + 4;
            puVar16 = puVar16 + 4;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (iVar15 < iVar4) {
          puVar5 = (undefined4 *)(param_6 + iVar13 * 4);
          iVar15 = iVar4 - iVar15;
          do {
            *puVar5 = *(undefined4 *)((int)puVar5 + (param_5 - param_6));
            puVar5 = puVar5 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        param_2 = param_2 + 1;
      } while (param_2 < param_7);
    }
    if (param_4 != 0) {
      uVar2 = *param_1;
      if ((char)param_1[1] == '\b') {
        for (; param_3 < param_4; param_3 = param_3 + 1) {
          param_2 = 0;
          if (0 < param_7) {
            do {
              iVar13 = (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4;
              pbVar11 = (byte *)((int)param_1 +
                                iVar13 + (uint)*param_1 * param_3 + (uint)uVar2 * 0xc + 4);
              iVar15 = 0;
              pfVar8 = (float *)(param_1 + iVar13 * 6 + 2);
              if (3 < iVar4) {
                iVar9 = (iVar4 - 4U >> 2) + 1;
                iVar15 = iVar9 * 4;
                pfVar7 = pfVar8;
                pbVar12 = pbVar11;
                pfVar10 = (float *)(param_6 + iVar13 * 4);
                do {
                  pfVar8 = pfVar7 + 0xc;
                  pbVar11 = pbVar12 + 4;
                  iVar9 = iVar9 + -1;
                  *pfVar10 = (float)*pbVar12 * pfVar7[1] + *pfVar7 + *pfVar10;
                  pfVar10[1] = (float)pbVar12[1] * pfVar7[4] + pfVar7[3] + pfVar10[1];
                  pfVar10[2] = (float)pbVar12[2] * pfVar7[7] + pfVar7[6] + pfVar10[2];
                  pfVar10[3] = (float)pbVar12[3] * pfVar7[10] + pfVar7[9] + pfVar10[3];
                  pfVar7 = pfVar8;
                  pbVar12 = pbVar11;
                  pfVar10 = pfVar10 + 4;
                } while (iVar9 != 0);
              }
              if (iVar15 < iVar4) {
                iVar9 = iVar4 - iVar15;
                pfVar7 = (float *)(param_6 + (iVar13 + iVar15) * 4);
                do {
                  bVar1 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  iVar9 = iVar9 + -1;
                  *pfVar7 = (float)bVar1 * pfVar8[1] + *pfVar7 + *pfVar8;
                  pfVar8 = pfVar8 + 3;
                  pfVar7 = pfVar7 + 1;
                } while (iVar9 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_2 < param_7);
          }
        }
      }
      else if (((char)param_1[1] == '\x10') && (param_3 < param_4)) {
        do {
          param_2 = 0;
          if (0 < param_7) {
            do {
              iVar13 = (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4;
              puVar6 = param_1 + (uint)uVar2 * 6 + (uint)*param_1 * param_3 + iVar13 + 2;
              iVar15 = 0;
              pfVar8 = (float *)(param_1 + iVar13 * 6 + 2);
              if (3 < iVar4) {
                iVar9 = (iVar4 - 4U >> 2) + 1;
                iVar15 = iVar9 * 4;
                pfVar7 = pfVar8;
                pfVar10 = (float *)(param_6 + iVar13 * 4);
                puVar14 = puVar6;
                do {
                  pfVar8 = pfVar7 + 0xc;
                  puVar6 = puVar14 + 4;
                  iVar9 = iVar9 + -1;
                  *pfVar10 = (float)*puVar14 * pfVar7[1] + *pfVar7 + *pfVar10;
                  pfVar10[1] = (float)puVar14[1] * pfVar7[4] + pfVar7[3] + pfVar10[1];
                  pfVar10[2] = (float)puVar14[2] * pfVar7[7] + pfVar7[6] + pfVar10[2];
                  pfVar10[3] = (float)puVar14[3] * pfVar7[10] + pfVar7[9] + pfVar10[3];
                  pfVar7 = pfVar8;
                  pfVar10 = pfVar10 + 4;
                  puVar14 = puVar6;
                } while (iVar9 != 0);
              }
              if (iVar15 < iVar4) {
                iVar9 = iVar4 - iVar15;
                pfVar7 = (float *)(param_6 + (iVar13 + iVar15) * 4);
                do {
                  uVar3 = *puVar6;
                  puVar6 = puVar6 + 1;
                  iVar9 = iVar9 + -1;
                  *pfVar7 = (float)uVar3 * pfVar8[1] + *pfVar8 + *pfVar7;
                  pfVar8 = pfVar8 + 3;
                  pfVar7 = pfVar7 + 1;
                } while (iVar9 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_2 < param_7);
          }
          param_3 = param_3 + 1;
        } while (param_3 < param_4);
        return;
      }
    }
  }
  return;
}

