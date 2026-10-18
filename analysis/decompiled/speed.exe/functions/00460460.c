/* speed.exe 00460460 FUN_00460460; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00460460(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  iVar8 = 0;
  bVar10 = false;
  iVar5 = param_3 + -1;
  if (3 < param_3) {
    iVar4 = iVar5 * 0x10;
    pfVar7 = (float *)(param_2 + 4);
    do {
      if ((((*pfVar7 < fVar3 != (*pfVar7 == fVar3)) &&
           (pfVar9 = (float *)(iVar4 + 4 + param_2), fVar3 < *pfVar9)) ||
          ((fVar1 = *(float *)(iVar4 + 4 + param_2), pfVar9 = (float *)(iVar4 + 4 + param_2),
           fVar1 < fVar3 != (fVar1 == fVar3) && (fVar3 < *pfVar7)))) &&
         (fVar2 < ((*(float *)(iVar4 + param_2) - pfVar7[-1]) * (fVar3 - *pfVar7)) /
                  (*pfVar9 - *pfVar7) + pfVar7[-1])) {
        bVar10 = bVar10 == false;
      }
      if (pfVar7[4] < fVar3 == (pfVar7[4] == fVar3)) {
        if (*pfVar7 < fVar3 != (*pfVar7 == fVar3)) goto LAB_0046053d;
      }
      else {
        if (*pfVar7 <= fVar3) {
LAB_0046053d:
          if (pfVar7[4] <= fVar3) goto LAB_0046057c;
        }
        if (fVar2 < ((fVar3 - pfVar7[4]) * (pfVar7[-1] - pfVar7[3])) / (*pfVar7 - pfVar7[4]) +
                    pfVar7[3]) {
          bVar10 = bVar10 == false;
        }
      }
LAB_0046057c:
      if ((((pfVar7[8] < fVar3 != (pfVar7[8] == fVar3)) && (fVar3 < pfVar7[4])) ||
          ((pfVar7[4] < fVar3 != (pfVar7[4] == fVar3) && (fVar3 < pfVar7[8])))) &&
         (fVar2 < ((fVar3 - pfVar7[8]) * (pfVar7[3] - pfVar7[7])) / (pfVar7[4] - pfVar7[8]) +
                  pfVar7[7])) {
        bVar10 = bVar10 == false;
      }
      if ((((pfVar7[0xc] < fVar3 != (pfVar7[0xc] == fVar3)) && (fVar3 < pfVar7[8])) ||
          ((pfVar7[8] < fVar3 != (pfVar7[8] == fVar3) && (fVar3 < pfVar7[0xc])))) &&
         (fVar2 < ((fVar3 - pfVar7[0xc]) * (pfVar7[7] - pfVar7[0xb])) / (pfVar7[8] - pfVar7[0xc]) +
                  pfVar7[0xb])) {
        bVar10 = bVar10 == false;
      }
      iVar5 = iVar8 + 3;
      iVar4 = (0x2c - param_2) + (int)pfVar7;
      iVar8 = iVar8 + 4;
      pfVar7 = pfVar7 + 0x10;
    } while (iVar8 < param_3 + -3);
  }
  if (iVar8 < param_3) {
    iVar4 = iVar5 << 4;
    iVar5 = iVar8 * 0x10;
    pfVar7 = (float *)(iVar5 + 4 + param_2);
    param_3 = param_3 - iVar8;
    do {
      uVar6 = (ushort)((uint)iVar5 >> 0x10);
      if (*pfVar7 < fVar3 == (*pfVar7 == fVar3)) {
LAB_004606ae:
        fVar1 = *(float *)(iVar4 + 4 + param_2);
        pfVar9 = (float *)(iVar4 + 4 + param_2);
        iVar5 = CONCAT22(uVar6,(ushort)(fVar1 < fVar3) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                               (ushort)(fVar1 == fVar3) << 0xe);
        if (fVar1 < fVar3 != (fVar1 == fVar3)) {
          fVar1 = *pfVar7;
          iVar5 = CONCAT22(uVar6,(ushort)(fVar3 < fVar1) << 8 |
                                 (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar3 == fVar1) << 0xe);
          if (fVar3 < fVar1) goto LAB_004606ce;
        }
      }
      else {
        pfVar9 = (float *)(iVar4 + 4 + param_2);
        iVar5 = (uint)uVar6 << 0x10;
        if (*pfVar9 <= fVar3) goto LAB_004606ae;
LAB_004606ce:
        fVar1 = ((fVar3 - *pfVar7) * (*(float *)(iVar4 + param_2) - pfVar7[-1])) /
                (*pfVar9 - *pfVar7) + pfVar7[-1];
        iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),
                         (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                         (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
          iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),bVar10);
          bVar10 = bVar10 == false;
        }
      }
      iVar4 = (-4 - param_2) + (int)pfVar7;
      pfVar7 = pfVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),bVar10);
}

