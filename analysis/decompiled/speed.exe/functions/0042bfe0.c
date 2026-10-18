/* speed.exe 0042bfe0 FUN_0042bfe0; analysis pseudocode, not buildable source.
 * calls 0040b0d0 FUN_0040b0d0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bfe0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar8 = DAT_0090d99c;
  fVar1 = DAT_0090d640;
  if (DAT_009b3878 != '\0') {
    _DAT_009b38cc = _DAT_009b38cc + 1;
    uVar7 = DAT_009b3874;
    if ((int)(DAT_0090d99c + 0x14) <= (int)DAT_009b3874) {
      uVar7 = DAT_0090d99c + 0x14;
    }
    FUN_0040b0d0(&local_24);
    if (((DAT_0092d884 == 0) || (piVar4 = (int *)*DAT_0092d87c, piVar4 == (int *)0x0)) ||
       (iVar3 = (**(code **)(*piVar4 + 4))(), uVar8 = DAT_0090d99c, iVar3 == 0)) {
      pfVar5 = (float *)&DAT_008a2fb4;
    }
    else {
      piVar4 = (int *)(**(code **)(*piVar4 + 4))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
      pfVar5 = (float *)(**(code **)(*piVar4 + 0x24))();
      uVar8 = DAT_0090d99c;
    }
    local_24 = *pfVar5 + local_24;
    local_1c = local_1c + pfVar5[2];
    if ((int)uVar8 < (int)uVar7) {
      iVar3 = uVar8 * 0x16;
      do {
        if (((*(byte *)(iVar3 + 10 + DAT_009b38c0) & 3) == 0) &&
           (_DAT_00890bf8 <= (float)*(ushort *)(iVar3 + 4 + DAT_009b38c0) * _DAT_008eb34c)) {
          pfVar5 = (float *)((uint)*(ushort *)(iVar3 + DAT_009b38c0) * 0x20 + DAT_009b38bc);
          fStack_18 = *pfVar5;
          fStack_14 = pfVar5[1];
          fStack_10 = pfVar5[2];
          pfVar5 = (float *)((uint)*(ushort *)(iVar3 + 2 + DAT_009b38c0) * 0x20 + DAT_009b38bc);
          local_c = *pfVar5;
          local_8 = pfVar5[1];
          local_4 = pfVar5[2];
          fVar9 = (float10)FUN_005c5e80((local_24 - fStack_18) * (local_24 - fStack_18) +
                                        (local_20 - fStack_14) * (local_20 - fStack_14) +
                                        (local_1c - fStack_10) * (local_1c - fStack_10));
          fVar10 = (float10)FUN_005c5e80((local_24 - local_c) * (local_24 - local_c) +
                                         (local_20 - local_8) * (local_20 - local_8) +
                                         (local_1c - local_4) * (local_1c - local_4));
          iVar2 = DAT_0090d644;
          fVar11 = (float10)fVar1 + (float10)_DAT_00890dd0;
          if (((float10)(float)fVar9 <= fVar11) || (fVar10 <= fVar11)) {
            (&DAT_0090d520)[DAT_0090d998] = uVar8;
            DAT_0090d998 = DAT_0090d998 + 1;
            if (iVar2 <= DAT_0090d998) {
              DAT_0090d644 = DAT_0090d998;
            }
            if (0x31 < DAT_0090d998) {
              DAT_0090d998 = 0;
            }
          }
        }
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + 0x16;
      } while ((int)uVar8 < (int)uVar7);
    }
    DAT_0090d99c = ((int)DAT_009b3874 <= (int)uVar7) - 1 & uVar7;
    uVar8 = DAT_0090d994;
    uVar7 = 0x32;
    if ((int)(DAT_0090d994 + 5) < 0x33) {
      uVar7 = DAT_0090d994 + 5;
    }
    for (; (int)uVar8 < (int)uVar7; uVar8 = uVar8 + 1) {
      if (-1 < (int)(&DAT_0090d520)[uVar8]) {
        puVar6 = (ushort *)((&DAT_0090d520)[uVar8] * 0x16 + DAT_009b38c0);
        pfVar5 = (float *)((uint)*puVar6 * 0x20 + DAT_009b38bc);
        local_c = *pfVar5;
        local_8 = pfVar5[1];
        local_4 = pfVar5[2];
        pfVar5 = (float *)((uint)puVar6[1] * 0x20 + DAT_009b38bc);
        fStack_18 = *pfVar5;
        fStack_14 = pfVar5[1];
        fStack_10 = pfVar5[2];
        fVar9 = (float10)FUN_005c5e80((local_24 - local_c) * (local_24 - local_c) +
                                      (local_20 - local_8) * (local_20 - local_8) +
                                      (local_1c - local_4) * (local_1c - local_4));
        fVar10 = (float10)FUN_005c5e80((local_24 - fStack_18) * (local_24 - fStack_18) +
                                       (local_20 - fStack_14) * (local_20 - fStack_14) +
                                       (local_1c - fStack_10) * (local_1c - fStack_10));
        fVar11 = (float10)fVar1 + (float10)_DAT_00890dd0;
        if ((fVar11 < (float10)(float)fVar9) && (fVar11 < fVar10)) {
          (&DAT_0090d520)[uVar8] = 0xffffffff;
        }
      }
    }
    DAT_0090d994 = (0x31 < (int)uVar7) - 1 & uVar7;
  }
  return;
}

