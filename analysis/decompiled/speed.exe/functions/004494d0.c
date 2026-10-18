/* speed.exe 004494d0 FUN_004494d0; analysis pseudocode, not buildable source.
 * calls 0045dac0 FUN_0045dac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004494d0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  float10 fVar13;
  undefined4 local_24;
  undefined4 local_c;
  undefined4 local_4;
  
  uVar2 = *(uint *)(param_1 + 0x34);
  fVar5 = param_2 * *(float *)(param_1 + 0x60) * _DAT_0089309c;
  fVar3 = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x60) * _DAT_0089309c;
  fVar6 = *(float *)(param_1 + 0x6c) * _DAT_0089309c;
  fVar4 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x60) * _DAT_0089309c;
  fVar7 = *(float *)(param_1 + 0x70) * _DAT_0089309c;
  if ((uVar2 & 0x40) == 0) {
    local_4 = *(float *)(param_1 + 100);
    local_c = 0.0;
    local_24 = *(float *)(param_1 + 100);
  }
  else {
    local_4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40);
    local_c = *(float *)(param_1 + 0x40);
    local_24 = *(float *)(param_1 + 0x44);
  }
  uVar12 = uVar2 >> 4;
  bVar10 = (byte)(uVar2 >> 3) & 1;
  bVar11 = (byte)uVar12 & 1;
  if ((uVar2 >> 3 & 1) == 0) {
    if ((uVar12 & 1) == 0) {
      uVar12 = uVar2 | 8;
      bVar10 = 1;
      goto LAB_0044959b;
    }
  }
  else if ((uVar12 & 1) != 0) {
    uVar12 = uVar2 & 0xffffffef;
    bVar11 = 0;
LAB_0044959b:
    *(uint *)(param_1 + 0x34) = uVar12;
  }
  if (((char)*(uint *)(param_1 + 0x34) < '\0') && (fVar3 < fVar6)) {
    bVar9 = true;
    if (*(float *)(param_1 + 0x68) < local_24) goto LAB_004495d0;
  }
  bVar9 = false;
LAB_004495d0:
  if ((((*(uint *)(param_1 + 0x34) & 0x100) == 0) || (fVar7 <= fVar4)) ||
     (bVar8 = true, local_24 <= *(float *)(param_1 + 0x68))) {
    bVar8 = false;
  }
  fVar1 = *(float *)(param_1 + 0x68);
  fVar13 = (float10)fVar1;
  if (!bVar9) {
    if (bVar8) {
      fVar4 = fVar4 + fVar5;
      if (fVar7 < fVar4) {
        fVar13 = (float10)FUN_0045dac0(fVar4,fVar7);
        fVar13 = fVar13 + (float10)fVar1;
      }
      *(float *)(param_1 + 0x18) = (fVar4 / *(float *)(param_1 + 0x60)) * _DAT_008934e0;
      *(float *)(param_1 + 0x68) = (float)fVar13;
      return 0;
    }
    if (bVar10 == 0) {
      if (bVar11 != 0) {
        if (*(int *)(param_1 + 8) == 0) {
          fVar13 = fVar13 + (float10)fVar5;
          if ((float10)local_24 < fVar13) {
            *(undefined4 *)(param_1 + 8) = 1;
            fVar13 = (float10)local_24 - (fVar13 - (float10)local_24);
          }
        }
        else if ((*(int *)(param_1 + 8) == 1) &&
                (fVar13 = fVar13 - (float10)fVar5, fVar13 < (float10)local_c)) {
          *(float *)(param_1 + 0x68) = local_c;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          return 0;
        }
      }
    }
    else {
      fVar13 = fVar13 + (float10)fVar5;
      if ((float10)local_24 < fVar13) {
        if ((uVar2 >> 5 & 1) == 0) {
          *(float *)(param_1 + 0x68) = local_24;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(float *)(param_1 + 0x68) = (float)(fVar13 - (float10)local_4);
        return 0;
      }
    }
    *(float *)(param_1 + 0x68) = (float)fVar13;
    return 0;
  }
  fVar3 = fVar3 + fVar5;
  if (fVar6 < fVar3) {
    fVar13 = (float10)FUN_0045dac0(fVar3,fVar6);
    fVar13 = fVar13 + (float10)fVar1;
  }
  *(float *)(param_1 + 0x14) = (fVar3 / *(float *)(param_1 + 0x60)) * _DAT_008934e0;
  *(float *)(param_1 + 0x68) = (float)fVar13;
  return 0;
}

