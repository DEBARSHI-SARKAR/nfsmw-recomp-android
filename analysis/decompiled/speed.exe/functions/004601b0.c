/* speed.exe 004601b0 FUN_004601b0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_004601b0(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar5;
  int iVar4;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  iVar8 = 0;
  bVar10 = false;
  iVar4 = param_3 + -1;
  if (3 < param_3) {
    iVar7 = iVar4 * 8;
    pfVar6 = (float *)(param_2 + 4);
    do {
      if ((((*pfVar6 < fVar3 != (*pfVar6 == fVar3)) &&
           (pfVar9 = (float *)(iVar7 + 4 + param_2), fVar3 < *pfVar9)) ||
          ((fVar1 = *(float *)(iVar7 + 4 + param_2), pfVar9 = (float *)(iVar7 + 4 + param_2),
           fVar1 < fVar3 != (fVar1 == fVar3) && (fVar3 < *pfVar6)))) &&
         (fVar2 < ((*(float *)(iVar7 + param_2) - pfVar6[-1]) * (fVar3 - *pfVar6)) /
                  (*pfVar9 - *pfVar6) + pfVar6[-1])) {
        bVar10 = bVar10 == false;
      }
      if (pfVar6[2] < fVar3 == (pfVar6[2] == fVar3)) {
        if (*pfVar6 < fVar3 != (*pfVar6 == fVar3)) goto LAB_0046028f;
      }
      else {
        if (*pfVar6 <= fVar3) {
LAB_0046028f:
          if (pfVar6[2] <= fVar3) goto LAB_004602ce;
        }
        if (fVar2 < ((fVar3 - pfVar6[2]) * (pfVar6[-1] - pfVar6[1])) / (*pfVar6 - pfVar6[2]) +
                    pfVar6[1]) {
          bVar10 = bVar10 == false;
        }
      }
LAB_004602ce:
      if ((((pfVar6[4] < fVar3 != (pfVar6[4] == fVar3)) && (fVar3 < pfVar6[2])) ||
          ((pfVar6[2] < fVar3 != (pfVar6[2] == fVar3) && (fVar3 < pfVar6[4])))) &&
         (fVar2 < ((fVar3 - pfVar6[4]) * (pfVar6[1] - pfVar6[3])) / (pfVar6[2] - pfVar6[4]) +
                  pfVar6[3])) {
        bVar10 = bVar10 == false;
      }
      if ((((pfVar6[6] < fVar3 != (pfVar6[6] == fVar3)) && (fVar3 < pfVar6[4])) ||
          ((pfVar6[4] < fVar3 != (pfVar6[4] == fVar3) && (fVar3 < pfVar6[6])))) &&
         (fVar2 < ((fVar3 - pfVar6[6]) * (pfVar6[3] - pfVar6[5])) / (pfVar6[4] - pfVar6[6]) +
                  pfVar6[5])) {
        bVar10 = bVar10 == false;
      }
      iVar4 = iVar8 + 3;
      iVar7 = (0x14 - param_2) + (int)pfVar6;
      iVar8 = iVar8 + 4;
      pfVar6 = pfVar6 + 8;
    } while (iVar8 < param_3 + -3);
  }
  if (iVar8 < param_3) {
    iVar7 = iVar4 * 8;
    pfVar6 = (float *)(param_2 + 4 + iVar8 * 8);
    param_3 = param_3 - iVar8;
    do {
      uVar5 = (ushort)((uint)iVar4 >> 0x10);
      if (*pfVar6 < fVar3 == (*pfVar6 == fVar3)) {
LAB_004603f6:
        fVar1 = *(float *)(iVar7 + 4 + param_2);
        pfVar9 = (float *)(iVar7 + 4 + param_2);
        iVar4 = CONCAT22(uVar5,(ushort)(fVar1 < fVar3) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                               (ushort)(fVar1 == fVar3) << 0xe);
        if (fVar1 < fVar3 != (fVar1 == fVar3)) {
          fVar1 = *pfVar6;
          iVar4 = CONCAT22(uVar5,(ushort)(fVar3 < fVar1) << 8 |
                                 (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar3 == fVar1) << 0xe);
          if (fVar3 < fVar1) goto LAB_00460416;
        }
      }
      else {
        pfVar9 = (float *)(iVar7 + 4 + param_2);
        iVar4 = (uint)uVar5 << 0x10;
        if (*pfVar9 <= fVar3) goto LAB_004603f6;
LAB_00460416:
        fVar1 = ((fVar3 - *pfVar6) * (*(float *)(iVar7 + param_2) - pfVar6[-1])) /
                (*pfVar9 - *pfVar6) + pfVar6[-1];
        iVar4 = CONCAT22((short)((uint)iVar4 >> 0x10),
                         (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                         (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
          bVar10 = bVar10 == false;
          iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),bVar10);
        }
      }
      iVar7 = (-4 - param_2) + (int)pfVar6;
      pfVar6 = pfVar6 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),bVar10);
}

