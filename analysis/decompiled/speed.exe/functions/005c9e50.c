/* speed.exe 005c9e50 FUN_005c9e50; analysis pseudocode, not buildable source.
 * calls 005c58b0 FUN_005c58b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c9e50(uint param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  float *pfVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  float local_40 [4];
  float local_30 [8];
  float local_10 [4];
  
  iVar3 = *(int *)(&DAT_008a3130 + param_1 * 4);
  uVar10 = 0;
  pfVar9 = param_2;
  if (param_1 != 0) {
    do {
      if ((((*param_3 <= *pfVar9) && (*pfVar9 < *param_4 != (*pfVar9 == *param_4))) &&
          (param_3[2] <= pfVar9[2])) && (pfVar9[2] < param_4[2] != (pfVar9[2] == param_4[2]))) {
        return 1;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar10 < param_1);
  }
  uVar10 = 0;
  bVar7 = true;
  if (3 < (int)param_1) {
    piVar11 = (int *)(iVar3 + 8);
    pfVar9 = param_2 + 10;
    do {
      if (((!bVar7) ||
          ((param_2[piVar11[-2] * 4] - *param_3) * (pfVar9[-8] - param_3[2]) -
           (pfVar9[-10] - *param_3) * (param_2[piVar11[-2] * 4 + 2] - param_3[2]) <
           (float)_DAT_008942e0)) ||
         (((param_2[piVar11[-1] * 4] - *param_3) * (pfVar9[-4] - param_3[2]) -
           (pfVar9[-6] - *param_3) * (param_2[piVar11[-1] * 4 + 2] - param_3[2]) <
           (float)_DAT_008942e0 ||
          ((*pfVar9 - param_3[2]) * (param_2[*piVar11 * 4] - *param_3) -
           (pfVar9[-2] - *param_3) * (param_2[*piVar11 * 4 + 2] - param_3[2]) < (float)_DAT_008942e0
          )))) goto LAB_005ca02e;
      bVar7 = (float)_DAT_008942e0 <=
              (param_2[piVar11[1] * 4] - *param_3) * (pfVar9[4] - param_3[2]) -
              (pfVar9[2] - *param_3) * ((param_2 + piVar11[1] * 4)[2] - param_3[2]);
      uVar10 = uVar10 + 4;
      piVar11 = piVar11 + 4;
      pfVar9 = pfVar9 + 0x10;
    } while (uVar10 < param_1 - 3);
  }
  if (uVar10 < param_1) {
    pfVar9 = param_2 + uVar10 * 4;
    do {
      if (!bVar7) goto LAB_005ca02e;
      iVar4 = *(int *)(iVar3 + uVar10 * 4);
      bVar7 = (float)_DAT_008942e0 <=
              (param_2[iVar4 * 4] - *param_3) * (pfVar9[2] - param_3[2]) -
              (*pfVar9 - *param_3) * ((param_2 + iVar4 * 4)[2] - param_3[2]);
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar10 < param_1);
  }
  if (bVar7) {
    return 1;
  }
LAB_005ca02e:
  local_30[4] = param_3[2];
  local_30[5] = param_3[2];
  local_30[0] = *param_4 - *param_3;
  local_10[0] = *param_3;
  local_30[6] = param_4[2];
  local_30[7] = param_4[2];
  local_40[1] = param_4[2] - param_3[2];
  local_10[1] = *param_4;
  local_10[2] = *param_4;
  local_40[0] = 0.0;
  local_30[2] = *param_3 - *param_4;
  local_30[1] = 0.0;
  local_40[2] = 0.0;
  uVar10 = 0;
  local_10[3] = *param_3;
  local_40[3] = param_3[2] - param_4[2];
  local_30[3] = 0.0;
  pfVar9 = param_2;
  if (param_1 != 0) {
    do {
      fVar5 = *pfVar9;
      fVar6 = pfVar9[2];
      iVar4 = *(int *)(iVar3 + uVar10 * 4);
      fVar1 = param_2[iVar4 * 4];
      uVar12 = 0;
      fVar2 = param_2[iVar4 * 4 + 2];
      do {
        cVar8 = FUN_005c58b0(*(undefined4 *)((int)local_10 + uVar12),
                             *(undefined4 *)((int)local_30 + uVar12 + 0x10),
                             *(undefined4 *)((int)local_30 + uVar12),
                             *(undefined4 *)((int)local_40 + uVar12),fVar5,fVar6,fVar1 - fVar5,
                             fVar2 - fVar6);
        if (cVar8 != '\0') {
          return 1;
        }
        uVar12 = uVar12 + 4;
      } while (uVar12 < 0x10);
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar10 < param_1);
  }
  return 0;
}

