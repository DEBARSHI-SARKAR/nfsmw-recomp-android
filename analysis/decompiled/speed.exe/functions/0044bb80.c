/* speed.exe 0044bb80 FUN_0044bb80; analysis pseudocode, not buildable source.
 * calls 0045dac0 FUN_0045dac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044bb80(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  float10 fVar16;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_8;
  
  uVar11 = *(uint *)(param_1 + 0x34);
  fVar4 = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x5c);
  fVar5 = fVar4 * param_2 * _DAT_0089309c;
  fVar2 = fVar4 * *(float *)(param_1 + 0x14) * _DAT_0089309c;
  fVar6 = *(float *)(param_1 + 0x68) * _DAT_0089309c;
  fVar3 = fVar4 * *(float *)(param_1 + 0x18) * _DAT_0089309c;
  fVar7 = *(float *)(param_1 + 0x6c) * _DAT_0089309c;
  if ((uVar11 & 0x40) == 0) {
    local_8 = *(float *)(param_1 + 0x60);
    local_14 = 0.0;
    local_28 = *(float *)(param_1 + 0x60);
  }
  else {
    local_8 = (float)*(int *)(param_1 + 0x3c) * *(float *)(param_1 + 0x40) *
              *(float *)(param_1 + 0x5c) -
              (float)*(int *)(param_1 + 0x38) * *(float *)(param_1 + 0x40) *
              *(float *)(param_1 + 0x5c);
    local_14 = (float)*(int *)(param_1 + 0x38) * *(float *)(param_1 + 0x40) *
               *(float *)(param_1 + 0x5c);
    local_28 = (float)*(int *)(param_1 + 0x3c) * *(float *)(param_1 + 0x40) *
               *(float *)(param_1 + 0x5c);
  }
  uVar13 = uVar11 >> 0xb;
  bVar15 = (byte)(uVar11 >> 3) & 1;
  if ((uVar11 & 0x20) == 0) {
LAB_0044bc5f:
    bVar10 = false;
  }
  else {
    bVar10 = true;
    if ((uVar13 & 1) != 0) goto LAB_0044bc5f;
  }
  uVar14 = uVar11 >> 4;
  bVar12 = (byte)uVar14 & 1;
  if ((uVar11 >> 3 & 1) == 0) {
    if ((uVar14 & 1) != 0) goto LAB_0044bc87;
    uVar11 = uVar11 | 8;
    bVar15 = 1;
  }
  else {
    if ((uVar14 & 1) == 0) goto LAB_0044bc87;
    uVar11 = uVar11 & 0xffffffef;
    bVar12 = 0;
  }
  *(uint *)(param_1 + 0x34) = uVar11;
LAB_0044bc87:
  if (((-1 < (char)*(uint *)(param_1 + 0x34)) || (fVar6 <= fVar2)) ||
     (bVar9 = true, local_28 <= *(float *)(param_1 + 100))) {
    bVar9 = false;
  }
  if ((((*(uint *)(param_1 + 0x34) & 0x100) == 0) || (fVar7 <= fVar3)) ||
     (local_28 <= *(float *)(param_1 + 100))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  fVar1 = *(float *)(param_1 + 100);
  fVar16 = (float10)fVar1;
  if (*(int *)(param_1 + 0x10) != 1) {
    return 0;
  }
  if (bVar9) {
    fVar2 = fVar2 + fVar5;
    if (fVar6 < fVar2) {
      fVar16 = (float10)FUN_0045dac0(fVar2,fVar6);
      fVar16 = fVar16 + (float10)fVar1;
    }
    *(float *)(param_1 + 0x14) = (fVar2 / fVar4) * _DAT_008934e0;
    *(float *)(param_1 + 100) = (float)fVar16;
    return 0;
  }
  if (!bVar8) {
    if (bVar15 == 0) {
      if (bVar12 != 0) {
        if (*(int *)(param_1 + 8) == 0) {
          fVar16 = fVar16 + (float10)fVar5;
          if ((float10)local_28 < fVar16) {
            if ((uVar13 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x10) = 2;
            }
            *(undefined4 *)(param_1 + 8) = 1;
            fVar16 = (float10)local_28 - (fVar16 - (float10)local_28);
          }
        }
        else if ((*(int *)(param_1 + 8) == 1) &&
                (fVar16 = fVar16 - (float10)fVar5, fVar16 < (float10)local_14)) {
          if ((uVar13 & 1) != 0) {
            *(undefined4 *)(param_1 + 0x10) = 2;
          }
          *(float *)(param_1 + 100) = local_14;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          return 0;
        }
      }
    }
    else if ((*(uint *)(param_1 + 0x34) & 0x1000) == 0) {
      fVar16 = fVar16 + (float10)fVar5;
      if ((float10)local_28 < fVar16) {
        if (!bVar10) {
          *(float *)(param_1 + 100) = local_28;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(float *)(param_1 + 100) = (float)(fVar16 - (float10)local_8);
        return 0;
      }
    }
    else {
      fVar16 = fVar16 - (float10)fVar5;
      if (fVar16 < (float10)local_14) {
        if (!bVar10) {
          *(float *)(param_1 + 100) = local_14;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(float *)(param_1 + 100) = (float)(fVar16 + (float10)local_8);
        return 0;
      }
    }
    *(float *)(param_1 + 100) = (float)fVar16;
    return 0;
  }
  fVar3 = fVar3 + fVar5;
  if (fVar7 < fVar3) {
    fVar16 = (float10)FUN_0045dac0(fVar3,fVar7);
    fVar16 = fVar16 + (float10)fVar1;
  }
  *(float *)(param_1 + 0x18) = (fVar3 / fVar4) * _DAT_008934e0;
  *(float *)(param_1 + 100) = (float)fVar16;
  return 0;
}

