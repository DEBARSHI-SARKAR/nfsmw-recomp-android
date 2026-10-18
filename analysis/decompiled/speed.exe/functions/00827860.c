/* speed.exe 00827860 FUN_00827860; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 __fastcall
FUN_00827860(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,float *param_5,
            int *param_6,uint *param_7,int param_8,uint param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar5 = fRam0090c8dc;
  fVar4 = fRam0090c8d8;
  fVar2 = fRam0090c8d4;
  fVar3 = _DAT_0090c8d0;
  uVar6 = *param_7;
  iVar12 = *param_6;
  for (; 7 < (int)param_3; param_3 = param_3 - 8) {
    DAT_0090c910._0_4_ = uVar6 >> 1;
    iVar1 = iVar12 * 4;
    _DAT_0090c8e0 = *(float *)(param_4 + iVar12 * 4);
    iVar9 = iVar12 + param_8 + (uint)CARRY4((uint)DAT_0090c910 * 2,param_9);
    DAT_0090c910._4_4_ = (uint)DAT_0090c910 * 2 + param_9 >> 1;
    _DAT_0090c8e4 = *(float *)(param_4 + iVar9 * 4);
    iVar10 = iVar9 + param_8 + (uint)CARRY4(DAT_0090c910._4_4_ * 2,param_9);
    DAT_0090c918._0_4_ = DAT_0090c910._4_4_ * 2 + param_9 >> 1;
    _DAT_0090c8e8 = *(float *)(param_4 + iVar10 * 4);
    iVar11 = iVar10 + param_8 + (uint)CARRY4((uint)DAT_0090c918 * 2,param_9);
    DAT_0090c918._4_4_ = (uint)DAT_0090c918 * 2 + param_9 >> 1;
    _DAT_0090c8ec = *(float *)(param_4 + iVar11 * 4);
    iVar12 = iVar11 + param_8 + (uint)CARRY4(DAT_0090c918._4_4_ * 2,param_9);
    DAT_0090c920._0_4_ = DAT_0090c918._4_4_ * 2 + param_9 >> 1;
    _DAT_0090c900 = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_0090c8f0 = *(float *)(param_4 + iVar12 * 4);
    iVar12 = iVar12 + param_8 + (uint)CARRY4((uint)DAT_0090c920 * 2,param_9);
    DAT_0090c920._4_4_ = (uint)DAT_0090c920 * 2 + param_9 >> 1;
    _DAT_0090c904 = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_0090c8f4 = *(float *)(param_4 + iVar12 * 4);
    iVar12 = iVar12 + param_8 + (uint)CARRY4(DAT_0090c920._4_4_ * 2,param_9);
    DAT_0090c928._0_4_ = DAT_0090c920._4_4_ * 2 + param_9 >> 1;
    _DAT_0090c908 = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_0090c8f8 = *(float *)(param_4 + iVar12 * 4);
    iVar12 = iVar12 + param_8 + (uint)CARRY4((uint)DAT_0090c928 * 2,param_9);
    DAT_0090c928._4_4_ = (uint)DAT_0090c928 * 2 + param_9 >> 1;
    _DAT_0090c90c = *(float *)(param_4 + 4 + iVar12 * 4);
    _DAT_0090c8fc = *(float *)(param_4 + iVar12 * 4);
    uVar6 = DAT_0090c928._4_4_ * 2 + param_9;
    iVar12 = iVar12 + param_8 + (uint)CARRY4(DAT_0090c928._4_4_ * 2,param_9);
    fVar13 = (*(float *)(param_4 + 4 + iVar9 * 4) - _DAT_0090c8e4) *
             (float)DAT_0090c910._4_4_ * fVar2 + _DAT_0090c8e4;
    fVar14 = (*(float *)(param_4 + 4 + iVar10 * 4) - _DAT_0090c8e8) *
             (float)(uint)DAT_0090c918 * fVar4 + _DAT_0090c8e8;
    fVar15 = (*(float *)(param_4 + 4 + iVar11 * 4) - _DAT_0090c8ec) *
             (float)DAT_0090c918._4_4_ * fVar5 + _DAT_0090c8ec;
    fVar16 = (_DAT_0090c900 - _DAT_0090c8f0) * (float)(uint)DAT_0090c920 * fVar3 + _DAT_0090c8f0;
    fVar17 = (_DAT_0090c904 - _DAT_0090c8f4) * (float)DAT_0090c920._4_4_ * fVar2 + _DAT_0090c8f4;
    fVar18 = (_DAT_0090c908 - _DAT_0090c8f8) * (float)(uint)DAT_0090c928 * fVar4 + _DAT_0090c8f8;
    fVar19 = (_DAT_0090c90c - _DAT_0090c8fc) * (float)DAT_0090c928._4_4_ * fVar5 + _DAT_0090c8fc;
    *param_5 = (*(float *)(param_4 + 4 + iVar1) - _DAT_0090c8e0) * (float)(uint)DAT_0090c910 * fVar3
               + _DAT_0090c8e0;
    param_5[1] = fVar13;
    param_5[2] = fVar14;
    param_5[3] = fVar15;
    param_5[4] = fVar16;
    param_5[5] = fVar17;
    param_5[6] = fVar18;
    param_5[7] = fVar19;
    param_5 = param_5 + 8;
  }
  for (; (param_3 & 7) != 0; param_3 = param_3 - 1) {
    uVar7 = uVar6 >> 1;
    iVar1 = iVar12 * 4;
    fVar2 = *(float *)(param_4 + iVar12 * 4);
    uVar8 = uVar7 * 2;
    uVar6 = uVar8 + param_9;
    iVar12 = iVar12 + param_8 + (uint)CARRY4(uVar8,param_9);
    *param_5 = fVar2 + (*(float *)(param_4 + 4 + iVar1) - fVar2) * (float)uVar7 * fVar3;
    param_5 = param_5 + 1;
  }
  *param_7 = uVar6;
  *param_6 = iVar12;
  return CONCAT44(param_2,in_EAX);
}

