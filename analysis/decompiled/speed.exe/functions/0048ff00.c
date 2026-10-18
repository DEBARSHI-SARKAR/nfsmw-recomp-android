/* speed.exe 0048ff00 FUN_0048ff00; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0048ff00(ushort *param_1,uint param_2,uint param_3,int param_4,int param_5,float *param_6,
            float *param_7)

{
  float *pfVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  ushort *puVar8;
  byte *pbVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  
  if (param_5 != param_4) {
    pfVar1 = (float *)(param_1 + param_2 * 6 + 2);
    if (((param_5 < param_4) || (param_5 == 0)) || (param_4 == -1)) {
      iVar13 = 0;
      pfVar6 = pfVar1;
      if (3 < (int)param_3) {
        iVar11 = (param_3 - 4 >> 2) + 1;
        pfVar7 = param_7 + 2;
        iVar13 = iVar11 * 4;
        do {
          pfVar7[-2] = pfVar6[2];
          pfVar7[-1] = pfVar6[5];
          *pfVar7 = pfVar6[8];
          pfVar7[1] = pfVar6[0xb];
          pfVar6 = pfVar6 + 0xc;
          pfVar7 = pfVar7 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (iVar13 < (int)param_3) {
        pfVar6 = pfVar6 + 2;
        do {
          fVar5 = *pfVar6;
          pfVar6 = pfVar6 + 3;
          param_7[iVar13] = fVar5;
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)param_3);
      }
      param_4 = 0;
    }
    else {
      uVar12 = param_3;
      pfVar6 = param_7;
      if (param_7 != param_6) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pfVar6 = *param_6;
          param_6 = param_6 + 1;
          pfVar6 = pfVar6 + 1;
        }
      }
    }
    if (param_5 != 0) {
      uVar12 = (uint)*param_1;
      iVar13 = uVar12 * 0xc + 4;
      cVar2 = (char)param_1[1];
      if (cVar2 == '\x04') {
        pbVar14 = (byte *)((int)param_1 + param_2 + ((int)(uVar12 + 1) >> 1) * param_4 + iVar13);
        uVar12 = param_3 - 1;
        if ((param_2 & 1) == 0) {
          if (param_4 < param_5) {
            param_5 = param_5 - param_4;
            do {
              iVar13 = 0;
              pfVar6 = pfVar1;
              if (0 < (int)uVar12) {
                iVar11 = 0;
                pfVar7 = pfVar1;
                do {
                  bVar3 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                  iVar13 = iVar11 + 2;
                  pfVar6 = pfVar7 + 6;
                  param_7[iVar11] = (float)(bVar3 & 0xf) * pfVar7[1] + param_7[iVar11] + *pfVar7;
                  param_7[iVar11 + 1] =
                       (float)(bVar3 >> 4) * pfVar7[4] + param_7[iVar11 + 1] + pfVar7[3];
                  iVar11 = iVar13;
                  pfVar7 = pfVar6;
                } while (iVar13 < (int)uVar12);
              }
              if ((param_3 & 1) != 0) {
                bVar3 = *pbVar14;
                pbVar14 = pbVar14 + 1;
                param_7[iVar13] = (float)(bVar3 & 0xf) * pfVar6[1] + param_7[iVar13] + *pfVar6;
              }
              param_5 = param_5 + -1;
            } while (param_5 != 0);
            return;
          }
        }
        else if (param_4 < param_5) {
          param_5 = param_5 - param_4;
          do {
            iVar13 = 0;
            pfVar6 = pfVar1;
            if (0 < (int)uVar12) {
              bVar3 = *pbVar14;
              iVar13 = 1;
              pbVar14 = pbVar14 + 1;
              pfVar6 = pfVar1 + 3;
              *param_7 = (float)(bVar3 >> 4) * pfVar1[1] + *param_7 + *pfVar1;
              iVar11 = iVar13;
              pfVar7 = pfVar6;
              if (1 < (int)uVar12) {
                do {
                  bVar3 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                  iVar13 = iVar11 + 2;
                  pfVar6 = pfVar7 + 6;
                  param_7[iVar11] = (float)(bVar3 & 0xf) * pfVar7[1] + param_7[iVar11] + *pfVar7;
                  param_7[iVar11 + 1] =
                       (float)(bVar3 >> 4) * pfVar7[4] + param_7[iVar11 + 1] + pfVar7[3];
                  iVar11 = iVar13;
                  pfVar7 = pfVar6;
                } while (iVar13 < (int)uVar12);
              }
            }
            if ((uVar12 & 1) != 0) {
              bVar3 = *pbVar14;
              pbVar14 = pbVar14 + 1;
              param_7[iVar13] = (float)(bVar3 & 0xf) * pfVar6[1] + param_7[iVar13] + *pfVar6;
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
      }
      else if (cVar2 == '\b') {
        pbVar14 = (byte *)((int)param_1 + param_2 + uVar12 * param_4 + iVar13);
        if (param_4 < param_5) {
          param_4 = param_5 - param_4;
          do {
            iVar13 = 0;
            pfVar6 = pfVar1;
            if (3 < (int)param_3) {
              param_5 = (param_3 - 4 >> 2) + 1;
              iVar13 = param_5 * 4;
              pfVar7 = pfVar1;
              pbVar9 = pbVar14;
              pfVar10 = param_7 + 2;
              do {
                pbVar14 = pbVar9 + 4;
                pfVar6 = pfVar7 + 0xc;
                pfVar10[-2] = (float)*pbVar9 * pfVar7[1] + pfVar10[-2] + *pfVar7;
                pfVar10[-1] = (float)pbVar9[1] * pfVar7[4] + pfVar7[3] + pfVar10[-1];
                *pfVar10 = (float)pbVar9[2] * pfVar7[7] + pfVar7[6] + *pfVar10;
                param_5 = param_5 + -1;
                pfVar10[1] = (float)pbVar9[3] * pfVar7[10] + pfVar7[9] + pfVar10[1];
                pfVar7 = pfVar6;
                pbVar9 = pbVar14;
                pfVar10 = pfVar10 + 4;
              } while (param_5 != 0);
            }
            for (; iVar13 < (int)param_3; iVar13 = iVar13 + 1) {
              bVar3 = *pbVar14;
              pbVar14 = pbVar14 + 1;
              param_7[iVar13] = (float)bVar3 * pfVar6[1] + param_7[iVar13] + *pfVar6;
              pfVar6 = pfVar6 + 3;
            }
            param_4 = param_4 + -1;
          } while (param_4 != 0);
          return;
        }
      }
      else if ((cVar2 == '\x10') &&
              (param_1 = param_1 + uVar12 * 6 + uVar12 * param_4 + param_2 + 2, param_4 < param_5))
      {
        param_4 = param_5 - param_4;
        do {
          iVar13 = 0;
          pfVar6 = pfVar1;
          if (3 < (int)param_3) {
            param_5 = (param_3 - 4 >> 2) + 1;
            iVar13 = param_5 * 4;
            pfVar7 = pfVar1;
            puVar8 = param_1;
            pfVar10 = param_7 + 2;
            do {
              param_1 = puVar8 + 4;
              pfVar6 = pfVar7 + 0xc;
              pfVar10[-2] = (float)*puVar8 * pfVar7[1] + pfVar10[-2] + *pfVar7;
              pfVar10[-1] = (float)puVar8[1] * pfVar7[4] + pfVar7[3] + pfVar10[-1];
              *pfVar10 = (float)puVar8[2] * pfVar7[7] + pfVar7[6] + *pfVar10;
              param_5 = param_5 + -1;
              pfVar10[1] = (float)puVar8[3] * pfVar7[10] + pfVar7[9] + pfVar10[1];
              pfVar7 = pfVar6;
              puVar8 = param_1;
              pfVar10 = pfVar10 + 4;
            } while (param_5 != 0);
          }
          for (; iVar13 < (int)param_3; iVar13 = iVar13 + 1) {
            uVar4 = *param_1;
            param_1 = param_1 + 1;
            param_7[iVar13] = (float)uVar4 * pfVar6[1] + param_7[iVar13] + *pfVar6;
            pfVar6 = pfVar6 + 3;
          }
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
    }
  }
  return;
}

