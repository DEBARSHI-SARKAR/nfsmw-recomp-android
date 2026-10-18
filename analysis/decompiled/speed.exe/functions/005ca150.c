/* speed.exe 005ca150 FUN_005ca150; analysis pseudocode, not buildable source.
 * calls 005c9d90 FUN_005c9d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ca150(uint param_1,float *param_2,float *param_3,float param_4)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  ushort uVar8;
  undefined2 uVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar6;
  uint3 uVar7;
  uint uVar10;
  float *pfVar11;
  undefined4 extraout_EDX;
  float *extraout_EDX_00;
  uint uVar12;
  int *piVar13;
  float10 fVar14;
  float local_8;
  float local_4;
  
  uVar9 = (undefined2)((uint)in_EAX >> 0x10);
  param_4 = param_4 * param_4;
  uVar12 = 0;
  uVar10 = 0;
  local_8 = _DAT_00890968;
  local_4 = 1e+09;
  pfVar11 = param_2;
  fVar3 = _DAT_00890968;
  if (param_1 != 0) {
    do {
      fVar4 = *pfVar11 - *param_3;
      fVar5 = pfVar11[2] - param_3[2];
      fVar3 = fVar4 + fVar3;
      local_8 = fVar5 + local_8;
      fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
      uVar8 = (ushort)((uint)in_EAX >> 0x10);
      in_EAX = (uint)uVar8 << 0x10;
      if ((fVar4 < local_4) &&
         (in_EAX = CONCAT22(uVar8,(ushort)(fVar4 < param_4) << 8 |
                                  (ushort)(NAN(fVar4) || NAN(param_4)) << 10 |
                                  (ushort)(fVar4 == param_4) << 0xe), uVar12 = uVar10,
         local_4 = fVar4, fVar4 < param_4)) goto LAB_005ca1e7;
      uVar9 = (undefined2)((uint)in_EAX >> 0x10);
      uVar10 = uVar10 + 1;
      pfVar11 = pfVar11 + 4;
    } while (uVar10 < param_1);
  }
  fVar3 = fVar3 * (float)(&PTR_DAT_008a3148)[param_1] * fVar3 * (float)(&PTR_DAT_008a3148)[param_1]
          + local_8 * (float)(&PTR_DAT_008a3148)[param_1] *
            local_8 * (float)(&PTR_DAT_008a3148)[param_1];
  if (fVar3 >= param_4 && (fVar3 == param_4) == 0) {
    return CONCAT22(uVar9,(ushort)(fVar3 < param_4) << 8 |
                          (ushort)(NAN(fVar3) || NAN(param_4)) << 10 |
                          (ushort)(fVar3 == param_4) << 0xe);
  }
  iVar1 = *(int *)(&DAT_008a3130 + param_1 * 4);
  iVar6 = uVar12 * 4;
  fVar14 = (float10)FUN_005c9d90(param_3,param_2 + iVar6,param_2 + *(int *)(iVar1 + uVar12 * 4) * 4)
  ;
  fVar2 = (float10)param_4;
  in_EAX = CONCAT22(extraout_var,
                    (ushort)(fVar14 < fVar2) << 8 | (ushort)(NAN(fVar14) || NAN(fVar2)) << 10 |
                    (ushort)(fVar14 == fVar2) << 0xe);
  if (fVar14 >= fVar2) {
    if (uVar12 == 0) {
      uVar12 = param_1;
    }
    fVar14 = (float10)FUN_005c9d90(extraout_EDX,param_2 + (uVar12 - 1) * 4,param_2 + iVar6);
    fVar2 = (float10)param_4;
    iVar6 = CONCAT31((int3)(CONCAT22(extraout_var_00,
                                     (ushort)(fVar14 < fVar2) << 8 |
                                     (ushort)(NAN(fVar14) || NAN(fVar2)) << 10 |
                                     (ushort)(fVar14 == fVar2) << 0xe) >> 8),1);
    if (fVar14 >= fVar2) {
      uVar12 = 0;
      if (3 < (int)param_1) {
        piVar13 = (int *)(iVar1 + 8);
        pfVar11 = param_2 + 10;
        do {
          if ((char)iVar6 == '\0') {
            return iVar6;
          }
          fVar3 = (param_2[piVar13[-2] * 4] - *extraout_EDX_00) * (pfVar11[-8] - extraout_EDX_00[2])
                  - ((param_2 + piVar13[-2] * 4)[2] - extraout_EDX_00[2]) *
                    (pfVar11[-10] - *extraout_EDX_00);
          if (fVar3 < _DAT_00890968 || (fVar3 == _DAT_00890968) != 0) {
            return CONCAT22((short)((uint)(param_2 + piVar13[-2] * 4) >> 0x10),
                            (ushort)(fVar3 < _DAT_00890968) << 8 |
                            (ushort)(NAN(fVar3) || NAN(_DAT_00890968)) << 10 |
                            (ushort)(fVar3 == _DAT_00890968) << 0xe);
          }
          fVar3 = (param_2[piVar13[-1] * 4] - *extraout_EDX_00) * (pfVar11[-4] - extraout_EDX_00[2])
                  - ((param_2 + piVar13[-1] * 4)[2] - extraout_EDX_00[2]) *
                    (pfVar11[-6] - *extraout_EDX_00);
          if (fVar3 < _DAT_00890968 || (fVar3 == _DAT_00890968) != 0) {
            return CONCAT22((short)((uint)(param_2 + piVar13[-1] * 4) >> 0x10),
                            (ushort)(fVar3 < _DAT_00890968) << 8 |
                            (ushort)(NAN(fVar3) || NAN(_DAT_00890968)) << 10 |
                            (ushort)(fVar3 == _DAT_00890968) << 0xe);
          }
          fVar3 = (*pfVar11 - extraout_EDX_00[2]) * (param_2[*piVar13 * 4] - *extraout_EDX_00) -
                  ((param_2 + *piVar13 * 4)[2] - extraout_EDX_00[2]) *
                  (pfVar11[-2] - *extraout_EDX_00);
          if (fVar3 < _DAT_00890968 || (fVar3 == _DAT_00890968) != 0) {
            return CONCAT22((short)((uint)(param_2 + *piVar13 * 4) >> 0x10),
                            (ushort)(fVar3 < _DAT_00890968) << 8 |
                            (ushort)(NAN(fVar3) || NAN(_DAT_00890968)) << 10 |
                            (ushort)(fVar3 == _DAT_00890968) << 0xe);
          }
          fVar3 = (param_2[piVar13[1] * 4] - *extraout_EDX_00) * (pfVar11[4] - extraout_EDX_00[2]) -
                  ((param_2 + piVar13[1] * 4)[2] - extraout_EDX_00[2]) *
                  (pfVar11[2] - *extraout_EDX_00);
          uVar7 = (uint3)(CONCAT22((short)((uint)(param_2 + piVar13[1] * 4) >> 0x10),
                                   (ushort)(fVar3 < _DAT_00890968) << 8 |
                                   (ushort)(NAN(fVar3) || NAN(_DAT_00890968)) << 10 |
                                   (ushort)(fVar3 == _DAT_00890968) << 0xe) >> 8);
          if (fVar3 < _DAT_00890968 || (fVar3 == _DAT_00890968) != 0) {
            iVar6 = (uint)uVar7 << 8;
          }
          else {
            iVar6 = CONCAT31(uVar7,1);
          }
          uVar12 = uVar12 + 4;
          piVar13 = piVar13 + 4;
          pfVar11 = pfVar11 + 0x10;
        } while (uVar12 < param_1 - 3);
      }
      if (uVar12 < param_1) {
        pfVar11 = param_2 + uVar12 * 4;
        do {
          if ((char)iVar6 == '\0') {
            return iVar6;
          }
          iVar6 = *(int *)(iVar1 + uVar12 * 4);
          fVar3 = (param_2[iVar6 * 4] - *extraout_EDX_00) * (pfVar11[2] - extraout_EDX_00[2]) -
                  (*pfVar11 - *extraout_EDX_00) * ((param_2 + iVar6 * 4)[2] - extraout_EDX_00[2]);
          uVar7 = (uint3)(CONCAT22((short)((uint)(param_2 + iVar6 * 4) >> 0x10),
                                   (ushort)(fVar3 < _DAT_00890968) << 8 |
                                   (ushort)(NAN(fVar3) || NAN(_DAT_00890968)) << 10 |
                                   (ushort)(fVar3 == _DAT_00890968) << 0xe) >> 8);
          if (fVar3 < _DAT_00890968 || (fVar3 == _DAT_00890968) != 0) {
            iVar6 = (uint)uVar7 << 8;
          }
          else {
            iVar6 = CONCAT31(uVar7,1);
          }
          uVar12 = uVar12 + 1;
          pfVar11 = pfVar11 + 4;
        } while (uVar12 < param_1);
      }
    }
    return iVar6;
  }
LAB_005ca1e7:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

