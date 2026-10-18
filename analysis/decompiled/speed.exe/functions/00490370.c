/* speed.exe 00490370 FUN_00490370; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00490370(ushort *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,float param_10)

{
  float *pfVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  
  if (param_5 != param_4) {
    pfVar1 = (float *)(param_1 + param_2 * 6 + 2);
    iVar4 = param_3 / param_8;
    if (((param_5 == 0) || (param_4 == -1)) || (param_5 < param_4)) {
      param_3 = 0;
      pfVar7 = pfVar1;
      if (0 < iVar4) {
        do {
          uVar8 = (uint)*(ushort *)(param_9 + param_3 * 2);
          iVar5 = 0;
          if (3 < param_8) {
            pfVar6 = (float *)(param_7 + uVar8 * 4);
            iVar15 = (param_8 - 4U >> 2) + 1;
            iVar5 = iVar15 * 4;
            do {
              *pfVar6 = pfVar7[2];
              pfVar6[1] = pfVar7[5];
              pfVar6[2] = pfVar7[8];
              pfVar6[3] = pfVar7[0xb];
              pfVar7 = pfVar7 + 0xc;
              pfVar6 = pfVar6 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          if (iVar5 < param_8) {
            pfVar6 = (float *)(param_7 + (iVar5 + uVar8) * 4);
            iVar5 = param_8 - iVar5;
            do {
              *pfVar6 = pfVar7[2];
              pfVar7 = pfVar7 + 3;
              pfVar6 = pfVar6 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          param_3 = param_3 + 1;
        } while (param_3 < iVar4);
      }
      param_4 = 0;
    }
    else {
      iVar5 = 0;
      param_3 = 0;
      if (0 < iVar4) {
        do {
          uVar8 = (uint)*(ushort *)(param_9 + param_3 * 2);
          iVar15 = 0;
          if (3 < param_8) {
            iVar16 = (param_8 - 4U >> 2) + 1;
            puVar10 = (undefined4 *)(param_7 + uVar8 * 4);
            iVar15 = iVar16 * 4;
            do {
              *puVar10 = *(undefined4 *)(param_6 + iVar5 * 4);
              puVar10[1] = *(undefined4 *)(param_6 + (iVar5 + 1) * 4);
              puVar10[2] = *(undefined4 *)(param_6 + (iVar5 + 2) * 4);
              puVar10[3] = *(undefined4 *)(param_6 + (iVar5 + 3) * 4);
              iVar5 = iVar5 + 4;
              puVar10 = puVar10 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          if (iVar15 < param_8) {
            puVar10 = (undefined4 *)(param_7 + (uVar8 + iVar15) * 4);
            iVar15 = param_8 - iVar15;
            do {
              *puVar10 = *(undefined4 *)(param_6 + iVar5 * 4);
              iVar5 = iVar5 + 1;
              puVar10 = puVar10 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          param_3 = param_3 + 1;
        } while (param_3 < iVar4);
      }
    }
    if (param_5 != 0) {
      uVar8 = (uint)*param_1;
      iVar5 = uVar8 * 0xc + 4;
      cVar3 = (char)param_1[1];
      if (cVar3 == '\x04') {
        pbVar12 = (byte *)((int)param_1 + ((uVar8 + 1) / 2) * param_4 + iVar5);
        cVar3 = '\x01' - ((param_2 & 0xfffffffe) != 0);
        if (param_4 < param_5) {
          param_4 = param_5 - param_4;
          do {
            param_3 = 0;
            pfVar7 = pfVar1;
            if (0 < iVar4) {
              do {
                uVar8 = (uint)*(ushort *)(param_9 + param_3 * 2);
                iVar5 = 0;
                if (3 < param_8) {
                  iVar15 = (param_8 - 4U >> 2) + 1;
                  iVar5 = iVar15 * 4;
                  pfVar6 = pfVar7;
                  pfVar9 = (float *)(param_7 + uVar8 * 4);
                  do {
                    if (cVar3 == '\0') {
                      bVar14 = *pbVar12 >> 4;
                      pbVar12 = pbVar12 + 1;
                    }
                    else {
                      bVar14 = *pbVar12 & 0xf;
                    }
                    cVar3 = cVar3 != '\0';
                    *pfVar9 = ((float)bVar14 * pfVar6[1] + *pfVar6) * param_10 + *pfVar9;
                    if ((bool)cVar3) {
                      bVar14 = *pbVar12 >> 4;
                      pbVar12 = pbVar12 + 1;
                    }
                    else {
                      bVar14 = *pbVar12 & 0xf;
                    }
                    pfVar9[1] = ((float)bVar14 * pfVar6[4] + pfVar6[3]) * param_10 + pfVar9[1];
                    if ((bool)cVar3) {
                      bVar14 = *pbVar12 & 0xf;
                    }
                    else {
                      bVar14 = *pbVar12 >> 4;
                      pbVar12 = pbVar12 + 1;
                    }
                    pfVar9[2] = ((float)bVar14 * pfVar6[7] + pfVar6[6]) * param_10 + pfVar9[2];
                    if ((bool)cVar3) {
                      bVar14 = *pbVar12 >> 4;
                      pbVar12 = pbVar12 + 1;
                    }
                    else {
                      bVar14 = *pbVar12 & 0xf;
                    }
                    pfVar7 = pfVar6 + 0xc;
                    iVar15 = iVar15 + -1;
                    pfVar9[3] = ((float)bVar14 * pfVar6[10] + pfVar6[9]) * param_10 + pfVar9[3];
                    pfVar6 = pfVar7;
                    pfVar9 = pfVar9 + 4;
                  } while (iVar15 != 0);
                }
                if (iVar5 < param_8) {
                  iVar15 = param_8 - iVar5;
                  pfVar6 = pfVar7;
                  pfVar9 = (float *)(param_7 + (uVar8 + iVar5) * 4);
                  do {
                    if (cVar3 == '\0') {
                      bVar14 = *pbVar12 >> 4;
                      pbVar12 = pbVar12 + 1;
                    }
                    else {
                      bVar14 = *pbVar12 & 0xf;
                    }
                    cVar3 = cVar3 == '\0';
                    pfVar7 = pfVar6 + 3;
                    iVar15 = iVar15 + -1;
                    *pfVar9 = ((float)bVar14 * pfVar6[1] + *pfVar6) * param_10 + *pfVar9;
                    pfVar6 = pfVar7;
                    pfVar9 = pfVar9 + 1;
                  } while (iVar15 != 0);
                }
                param_3 = param_3 + 1;
              } while (param_3 < iVar4);
            }
            if (cVar3 == '\0') {
              pbVar12 = pbVar12 + 1;
              cVar3 = '\x01';
            }
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
      else if (cVar3 == '\b') {
        pbVar12 = (byte *)((int)param_1 + uVar8 * param_4 + iVar5);
        if (param_4 < param_5) {
          param_5 = param_5 - param_4;
          do {
            param_3 = 0;
            pfVar7 = pfVar1;
            if (0 < iVar4) {
              do {
                uVar8 = (uint)*(ushort *)(param_9 + param_3 * 2);
                iVar5 = 0;
                if (3 < param_8) {
                  iVar15 = (param_8 - 4U >> 2) + 1;
                  iVar5 = iVar15 * 4;
                  pfVar6 = pfVar7;
                  pfVar9 = (float *)(param_7 + uVar8 * 4);
                  pbVar13 = pbVar12;
                  do {
                    pfVar7 = pfVar6 + 0xc;
                    pbVar12 = pbVar13 + 4;
                    iVar15 = iVar15 + -1;
                    *pfVar9 = ((float)*pbVar13 * pfVar6[1] + *pfVar6) * param_10 + *pfVar9;
                    pfVar9[1] = ((float)pbVar13[1] * pfVar6[4] + pfVar6[3]) * param_10 + pfVar9[1];
                    pfVar9[2] = ((float)pbVar13[2] * pfVar6[7] + pfVar6[6]) * param_10 + pfVar9[2];
                    pfVar9[3] = ((float)pbVar13[3] * pfVar6[10] + pfVar6[9]) * param_10 + pfVar9[3];
                    pfVar6 = pfVar7;
                    pfVar9 = pfVar9 + 4;
                    pbVar13 = pbVar12;
                  } while (iVar15 != 0);
                }
                if (iVar5 < param_8) {
                  iVar15 = param_8 - iVar5;
                  pfVar6 = pfVar7;
                  pfVar9 = (float *)(param_7 + (uVar8 + iVar5) * 4);
                  do {
                    bVar14 = *pbVar12;
                    pfVar7 = pfVar6 + 3;
                    pbVar12 = pbVar12 + 1;
                    iVar15 = iVar15 + -1;
                    *pfVar9 = ((float)bVar14 * pfVar6[1] + *pfVar6) * param_10 + *pfVar9;
                    pfVar6 = pfVar7;
                    pfVar9 = pfVar9 + 1;
                  } while (iVar15 != 0);
                }
                param_3 = param_3 + 1;
              } while (param_3 < iVar4);
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
          return;
        }
      }
      else if ((cVar3 == '\x10') &&
              (param_1 = param_1 + uVar8 * 6 + uVar8 * param_4 + 2, param_4 < param_5)) {
        param_5 = param_5 - param_4;
        do {
          param_3 = 0;
          pfVar7 = pfVar1;
          if (0 < iVar4) {
            do {
              uVar8 = (uint)*(ushort *)(param_9 + param_3 * 2);
              iVar5 = 0;
              if (3 < param_8) {
                iVar15 = (param_8 - 4U >> 2) + 1;
                iVar5 = iVar15 * 4;
                pfVar6 = pfVar7;
                pfVar9 = (float *)(param_7 + uVar8 * 4);
                puVar11 = param_1;
                do {
                  pfVar7 = pfVar6 + 0xc;
                  param_1 = puVar11 + 4;
                  iVar15 = iVar15 + -1;
                  *pfVar9 = ((float)*puVar11 * pfVar6[1] + *pfVar6) * param_10 + *pfVar9;
                  pfVar9[1] = ((float)puVar11[1] * pfVar6[4] + pfVar6[3]) * param_10 + pfVar9[1];
                  pfVar9[2] = ((float)puVar11[2] * pfVar6[7] + pfVar6[6]) * param_10 + pfVar9[2];
                  pfVar9[3] = ((float)puVar11[3] * pfVar6[10] + pfVar6[9]) * param_10 + pfVar9[3];
                  pfVar6 = pfVar7;
                  pfVar9 = pfVar9 + 4;
                  puVar11 = param_1;
                } while (iVar15 != 0);
              }
              if (iVar5 < param_8) {
                iVar15 = param_8 - iVar5;
                pfVar6 = pfVar7;
                pfVar9 = (float *)(param_7 + (uVar8 + iVar5) * 4);
                do {
                  uVar2 = *param_1;
                  pfVar7 = pfVar6 + 3;
                  param_1 = param_1 + 1;
                  iVar15 = iVar15 + -1;
                  *pfVar9 = ((float)uVar2 * pfVar6[1] + *pfVar6) * param_10 + *pfVar9;
                  pfVar6 = pfVar7;
                  pfVar9 = pfVar9 + 1;
                } while (iVar15 != 0);
              }
              param_3 = param_3 + 1;
            } while (param_3 < iVar4);
          }
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return;
      }
    }
  }
  return;
}

