/* speed.exe 007244f0 FUN_007244f0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_007244f0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  ushort uVar5;
  int iVar4;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  bool local_d;
  
  fVar2 = in_EAX[1];
  fVar3 = *in_EAX;
  iVar8 = 0;
  local_d = false;
  iVar4 = param_1 + -1;
  if (3 < param_1) {
    iVar7 = iVar4 * 8;
    pfVar6 = (float *)(param_2 + 4);
    do {
      if ((((*pfVar6 < fVar2 != (*pfVar6 == fVar2)) &&
           (pfVar9 = (float *)(iVar7 + 4 + param_2), fVar2 < *pfVar9)) ||
          ((fVar1 = *(float *)(iVar7 + 4 + param_2), pfVar9 = (float *)(iVar7 + 4 + param_2),
           fVar1 < fVar2 != (fVar1 == fVar2) && (fVar2 < *pfVar6)))) &&
         (fVar3 < ((*(float *)(iVar7 + param_2) - pfVar6[-1]) * (fVar2 - *pfVar6)) /
                  (*pfVar9 - *pfVar6) + pfVar6[-1])) {
        local_d = local_d == false;
      }
      if (pfVar6[2] < fVar2 == (pfVar6[2] == fVar2)) {
        if (*pfVar6 < fVar2 != (*pfVar6 == fVar2)) goto LAB_007245c9;
      }
      else {
        if (*pfVar6 <= fVar2) {
LAB_007245c9:
          if (pfVar6[2] <= fVar2) goto LAB_00724608;
        }
        if (fVar3 < ((fVar2 - pfVar6[2]) * (pfVar6[-1] - pfVar6[1])) / (*pfVar6 - pfVar6[2]) +
                    pfVar6[1]) {
          local_d = local_d == false;
        }
      }
LAB_00724608:
      if ((((pfVar6[4] < fVar2 != (pfVar6[4] == fVar2)) && (fVar2 < pfVar6[2])) ||
          ((pfVar6[2] < fVar2 != (pfVar6[2] == fVar2) && (fVar2 < pfVar6[4])))) &&
         (fVar3 < ((fVar2 - pfVar6[4]) * (pfVar6[1] - pfVar6[3])) / (pfVar6[2] - pfVar6[4]) +
                  pfVar6[3])) {
        local_d = local_d == false;
      }
      if ((((pfVar6[6] < fVar2 != (pfVar6[6] == fVar2)) && (fVar2 < pfVar6[4])) ||
          ((pfVar6[4] < fVar2 != (pfVar6[4] == fVar2) && (fVar2 < pfVar6[6])))) &&
         (fVar3 < ((fVar2 - pfVar6[6]) * (pfVar6[3] - pfVar6[5])) / (pfVar6[4] - pfVar6[6]) +
                  pfVar6[5])) {
        local_d = local_d == false;
      }
      iVar4 = iVar8 + 3;
      iVar7 = (0x14 - param_2) + (int)pfVar6;
      iVar8 = iVar8 + 4;
      pfVar6 = pfVar6 + 8;
    } while (iVar8 < param_1 + -3);
  }
  if (iVar8 < param_1) {
    iVar7 = iVar4 * 8;
    pfVar6 = (float *)(param_2 + 4 + iVar8 * 8);
    param_1 = param_1 - iVar8;
    do {
      uVar5 = (ushort)((uint)iVar4 >> 0x10);
      if (*pfVar6 < fVar2 == (*pfVar6 == fVar2)) {
LAB_00724730:
        fVar1 = *(float *)(iVar7 + 4 + param_2);
        pfVar9 = (float *)(iVar7 + 4 + param_2);
        iVar4 = CONCAT22(uVar5,(ushort)(fVar1 < fVar2) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                               (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 < fVar2 != (fVar1 == fVar2)) {
          fVar1 = *pfVar6;
          iVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe);
          if (fVar2 < fVar1) goto LAB_00724750;
        }
      }
      else {
        pfVar9 = (float *)(iVar7 + 4 + param_2);
        iVar4 = (uint)uVar5 << 0x10;
        if (*pfVar9 <= fVar2) goto LAB_00724730;
LAB_00724750:
        fVar1 = ((fVar2 - *pfVar6) * (*(float *)(iVar7 + param_2) - pfVar6[-1])) /
                (*pfVar9 - *pfVar6) + pfVar6[-1];
        iVar4 = CONCAT22((short)((uint)iVar4 >> 0x10),
                         (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                         (ushort)(fVar1 == fVar3) << 0xe);
        if (fVar1 < fVar3 == 0 && (fVar1 == fVar3) == 0) {
          local_d = local_d == false;
          iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),local_d);
        }
      }
      iVar7 = (-4 - param_2) + (int)pfVar6;
      pfVar6 = pfVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),local_d);
}

