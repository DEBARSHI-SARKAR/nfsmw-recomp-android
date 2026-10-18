/* speed.exe 004e17f0 FUN_004e17f0; analysis pseudocode, not buildable source.
 * calls 0081deee FUN_0081deee
 * calls 004e14c0 FUN_004e14c0
 * calls 004e1410 FUN_004e1410
 * calls 004e0ff0 FUN_004e0ff0
 * calls 0081bcd9 FUN_0081bcd9
 * calls 004e1020 FUN_004e1020
 * calls 0081bccb FUN_0081bccb
 * calls 004e15e0 FUN_004e15e0
 * calls 004e1740 FUN_004e1740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e17f0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  short local_248;
  float local_244;
  int local_238;
  undefined1 local_224 [4];
  uint local_220;
  int local_218;
  short local_200 [256];
  
  if (*(int *)(param_1 + 0x28) != 0) {
    fVar13 = (float10)FUN_004e15e0(*(undefined4 *)(param_1 + 0x30));
    *(float *)(param_1 + 0x40) = (float)fVar13;
  }
  fVar2 = (float)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) /
          (float)*(int *)(param_1 + 0x38);
  local_238 = 0;
  if ((*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x28) != 0)) {
    fVar13 = (float10)FUN_004e15e0(*(undefined4 *)(param_1 + 0x2c));
    iVar9 = *(int *)(param_1 + 0x14);
    fVar14 = (float10)FUN_004e14c0((float)fVar13);
    fVar15 = (float10)FUN_004e14c0(*(undefined4 *)(param_1 + 0x40));
    fVar3 = *(float *)(param_1 + 0x40) - (float)fVar13;
    fVar1 = (float)((float10)fVar2 / fVar15 - (float10)(float)((float10)iVar9 / fVar14));
    fVar4 = (float)*(int *)(param_1 + 0x3c) / (float)*(int *)(param_1 + 0x14);
    fVar5 = fVar4 * fVar1 + fVar3;
    fVar6 = fVar1 + fVar3;
    if (((int)(fVar5 - (float)(int)ROUND(fVar5)) >> 0x1f) + (int)ROUND(fVar5) ==
        ((int)(fVar6 - (float)(int)ROUND(fVar6)) >> 0x1f) + (int)ROUND(fVar6)) {
      iVar9 = (int)ROUND(ABS(fVar1));
      if (ABS(fVar5) <= (float)(iVar9 - ((int)((float)iVar9 - ABS(fVar1)) >> 0x1f)))
      goto LAB_004e19e0;
      if (_DAT_00890968 <= fVar5) {
        local_238 = FUN_004e1020(fVar5);
      }
      else {
        local_238 = FUN_004e0ff0(fVar5);
      }
    }
    else if (fVar6 <= fVar5) {
      local_238 = ((int)(fVar5 - (float)(int)ROUND(fVar5)) >> 0x1f) + (int)ROUND(fVar5);
      fVar4 = ((float)local_238 - fVar3) / fVar1;
    }
    else {
      local_238 = (int)ROUND(fVar5) - ((int)((float)(int)ROUND(fVar5) - fVar5) >> 0x1f);
      fVar4 = ((float)local_238 - fVar3) / fVar1;
    }
    if (local_238 != 0) goto LAB_004e19e6;
  }
LAB_004e19e0:
  fVar4 = _DAT_0089096c;
LAB_004e19e6:
  uVar11 = (uint)ROUND((float)*(int *)(param_1 + 0x14) * fVar4);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_004e1740(*(undefined4 *)(param_1 + 0x2c),uVar11,param_2);
  }
  iVar10 = *(int *)(param_1 + 0x2c) + uVar11;
  iVar9 = *(int *)(param_1 + 0x3c) - uVar11;
  *(int *)(param_1 + 0x2c) = iVar10;
  *(int *)(param_1 + 0x3c) = iVar9;
  if (iVar9 < 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (local_238 != 0) {
    psVar8 = (short *)(param_2 + uVar11 * 2);
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_004e1740(iVar10,*(undefined4 *)(param_1 + 0x18),psVar8);
      fVar13 = (float10)FUN_004e15e0(*(undefined4 *)(param_1 + 0x2c));
      uVar7 = FUN_004e1410((float)((float10)local_238 + fVar13));
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      FUN_004e1740(uVar7,*(undefined4 *)(param_1 + 0x18),local_200);
    }
    iVar9 = 0;
    fVar1 = _DAT_0089096c / (float)*(int *)(param_1 + 0x18);
    local_244 = 0.0;
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar10 = (int)local_200 - (int)psVar8;
      do {
        local_248 = (short)(int)ROUND((float)((int)*(short *)(iVar10 + (int)psVar8) - (int)*psVar8)
                                      * local_244 + (float)(int)*psVar8);
        local_244 = fVar1 + local_244;
        *psVar8 = local_248;
        iVar9 = iVar9 + 1;
        psVar8 = psVar8 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x18));
    }
    iVar9 = *(int *)(param_1 + 0x18);
    uVar11 = iVar9 + uVar11;
    iVar10 = *(int *)(param_1 + 0x2c) + iVar9;
    iVar12 = *(int *)(param_1 + 0x14) - uVar11;
    *(int *)(param_1 + 0x2c) = iVar10;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x10) - iVar9;
    if (0 < iVar12) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_004e1740(iVar10,iVar12,param_2 + uVar11 * 2);
      }
      uVar11 = *(uint *)(param_1 + 0x14);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar12;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar12;
    }
  }
  *(int *)(param_1 + 0x30) = (int)ROUND((float)*(int *)(param_1 + 0x30) + fVar2);
  if (1 < *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  local_220 = local_220 ^ (local_220 ^ uVar11) & 0x7fffffff;
  local_218 = param_2;
  FUN_0081bccb();
  FUN_0081deee(*(undefined4 *)(param_1 + 0x1c),local_224);
  FUN_0081bcd9();
  return;
}

