/* speed.exe 00746440 FUN_00746440; analysis pseudocode, not buildable source.
 * calls 00744c00 FUN_00744c00
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00746440(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  float *pfVar9;
  float10 fVar10;
  float local_14;
  float local_10;
  
  fVar3 = _DAT_008f2260 * _DAT_008b2f7c;
  if (((DAT_009885c8 == 0) && (cVar8 = FUN_00744c00(), cVar8 == '\0')) &&
     ((*(uint *)(param_1 + 0x3cc) < *(uint *)(param_1 + 0x3c8) ||
      ((*(uint *)(param_1 + 0x3cc) == 0 || (fVar3 < *(float *)(param_1 + 0x3d0))))))) {
    *(undefined4 *)(param_1 + 0x370) = DAT_008a2fac;
    *(undefined4 *)(param_1 + 0x374) = DAT_008a2fb0;
    return;
  }
  pfVar1 = *(float **)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x1c);
  pfVar9 = (float *)(iVar2 + 0xb8);
  local_14 = (*pfVar1 * *(float *)(param_1 + 0x340) +
             *(float *)(param_1 + 0x344) * pfVar1[1] + *(float *)(param_1 + 0x348) * pfVar1[2]) *
             _DAT_008b4bc0;
  local_10 = (*(float *)(param_1 + 0x330) * *pfVar1 +
             *(float *)(param_1 + 0x334) * pfVar1[1] + *(float *)(param_1 + 0x338) * pfVar1[2]) *
             _DAT_008b4bc0;
  if (_DAT_00890968 <= local_10) {
    pfVar9 = (float *)(iVar2 + 0xac);
  }
  fVar6 = *(float *)((int)param_3 + 0x88) * *pfVar9 * _DAT_008aae90;
  fVar4 = param_2 * pfVar9[2] * _DAT_008aae90;
  fVar7 = *(float *)((int)param_3 + 0x84) * *(float *)(iVar2 + 0xa0) * _DAT_008aae90;
  fVar3 = param_2 * *(float *)(iVar2 + 0xa8) * _DAT_008aae90;
  fVar5 = local_14;
  if (local_14 < _DAT_00890968) {
    fVar5 = -local_14;
  }
  if (fVar5 < _DAT_00895074) {
    local_14 = 0.0;
  }
  fVar5 = local_10;
  if (local_10 < _DAT_00890968) {
    fVar5 = -local_10;
  }
  if (fVar5 < _DAT_00895074) {
    local_10 = 0.0;
  }
  fVar10 = (float10)FUN_00401ae0(local_14,-*(float *)(iVar2 + 0xa4),*(undefined4 *)(iVar2 + 0xa4));
  fVar10 = (fVar10 - (float10)_DAT_008933d4) * (float10)fVar7;
  param_2 = (float)(fVar10 + fVar10);
  fVar10 = (float10)FUN_00401ae0(local_10 * _DAT_008b4bc4,-pfVar9[1],pfVar9[1]);
  pfVar9 = *(float **)(param_1 + 0x38);
  fVar10 = (fVar10 - (float10)_DAT_008933d4) * (float10)fVar6;
  param_3 = (float)(fVar10 + fVar10);
  if (SQRT(pfVar9[2] * pfVar9[2] + pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9) < _DAT_0089096c) {
    param_2 = 0.0;
    param_3 = 0.0;
  }
  if (param_2 <= *(float *)(param_1 + 0x370)) {
    if (*(float *)(param_1 + 0x370) <= param_2) goto LAB_007466c6;
    fVar3 = *(float *)(param_1 + 0x370) - fVar3;
    *(float *)(param_1 + 0x370) = fVar3;
    if (fVar3 <= param_2) goto LAB_007466ba;
  }
  else {
    fVar3 = fVar3 + *(float *)(param_1 + 0x370);
    *(float *)(param_1 + 0x370) = fVar3;
    if (param_2 <= fVar3) {
LAB_007466ba:
      fVar3 = param_2;
    }
  }
  *(float *)(param_1 + 0x370) = fVar3;
LAB_007466c6:
  if (param_3 <= *(float *)(param_1 + 0x374)) {
    if (*(float *)(param_1 + 0x374) <= param_3) {
      return;
    }
    fVar4 = *(float *)(param_1 + 0x374) - fVar4;
    *(float *)(param_1 + 0x374) = fVar4;
    if (fVar4 <= param_3) {
      fVar4 = param_3;
    }
  }
  else {
    fVar4 = fVar4 + *(float *)(param_1 + 0x374);
    *(float *)(param_1 + 0x374) = fVar4;
    if (param_3 <= fVar4) {
      *(float *)(param_1 + 0x374) = param_3;
      return;
    }
  }
  *(float *)(param_1 + 0x374) = fVar4;
  return;
}

