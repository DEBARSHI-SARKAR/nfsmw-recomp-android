/* speed.exe 008274f0 FUN_008274f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008274f0(uint param_1,int param_2,float *param_3,int *param_4,uint *param_5,int param_6,
            uint param_7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStack_28;
  
  DAT_0090c8b0 = &iStack_28;
  uVar3 = *param_5;
  iVar4 = *param_4;
  for (; 3 < (int)param_1; param_1 = param_1 - 4) {
    DAT_0090c860._0_4_ = uVar3 >> 1;
    _DAT_0090c820 = *(float *)(param_2 + -4 + iVar4 * 4);
    _DAT_0090c830 = *(float *)(param_2 + iVar4 * 4);
    _DAT_0090c840 = *(float *)(param_2 + 4 + iVar4 * 4);
    _DAT_0090c850 = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((uint)DAT_0090c860 * 2,param_7);
    DAT_0090c860._4_4_ = (uint)DAT_0090c860 * 2 + param_7 >> 1;
    _DAT_0090c824 = *(float *)(param_2 + -4 + iVar4 * 4);
    _DAT_0090c834 = *(float *)(param_2 + iVar4 * 4);
    _DAT_0090c844 = *(float *)(param_2 + 4 + iVar4 * 4);
    _DAT_0090c854 = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4(DAT_0090c860._4_4_ * 2,param_7);
    DAT_0090c868._0_4_ = DAT_0090c860._4_4_ * 2 + param_7 >> 1;
    _DAT_0090c828 = *(float *)(param_2 + -4 + iVar4 * 4);
    _DAT_0090c838 = *(float *)(param_2 + iVar4 * 4);
    _DAT_0090c848 = *(float *)(param_2 + 4 + iVar4 * 4);
    _DAT_0090c858 = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((uint)DAT_0090c868 * 2,param_7);
    DAT_0090c868._4_4_ = (uint)DAT_0090c868 * 2 + param_7 >> 1;
    _DAT_0090c82c = *(float *)(param_2 + -4 + iVar4 * 4);
    _DAT_0090c83c = *(float *)(param_2 + iVar4 * 4);
    uVar3 = DAT_0090c868._4_4_ * 2 + param_7;
    _DAT_0090c84c = *(float *)(param_2 + 4 + iVar4 * 4);
    _DAT_0090c85c = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4(DAT_0090c868._4_4_ * 2,param_7);
    fVar17 = (float)(uint)DAT_0090c860 * _DAT_0090c810;
    fVar19 = (float)DAT_0090c860._4_4_ * fRam0090c814;
    fVar21 = (float)(uint)DAT_0090c868 * fRam0090c818;
    fVar23 = (float)DAT_0090c868._4_4_ * fRam0090c81c;
    fVar8 = fRam0090c884 * _DAT_0090c844 + _DAT_0090c824;
    fVar9 = fRam0090c888 * _DAT_0090c848 + _DAT_0090c828;
    fVar10 = fRam0090c88c * _DAT_0090c84c + _DAT_0090c82c;
    fVar11 = (fRam0090c8a4 * _DAT_0090c834 + _DAT_0090c854) * fRam0090c874;
    fVar13 = (fRam0090c8a8 * _DAT_0090c838 + _DAT_0090c858) * fRam0090c878;
    fVar15 = (fRam0090c8ac * _DAT_0090c83c + _DAT_0090c85c) * fRam0090c87c;
    fVar12 = (_DAT_0090c844 - _DAT_0090c824) * fRam0090c874;
    fVar14 = (_DAT_0090c848 - _DAT_0090c828) * fRam0090c878;
    fVar16 = (_DAT_0090c84c - _DAT_0090c82c) * fRam0090c87c;
    fVar18 = fVar17 * fVar17;
    fVar20 = fVar19 * fVar19;
    fVar22 = fVar21 * fVar21;
    fVar24 = fVar23 * fVar23;
    fVar5 = _DAT_0090c834 +
            (((_DAT_0090c834 - _DAT_0090c844) * fRam0090c894 - _DAT_0090c824) + _DAT_0090c854) *
            fRam0090c874 * fVar20 * fVar20;
    fVar6 = _DAT_0090c838 +
            (((_DAT_0090c838 - _DAT_0090c848) * fRam0090c898 - _DAT_0090c828) + _DAT_0090c858) *
            fRam0090c878 * fVar22 * fVar22;
    fVar7 = _DAT_0090c83c +
            (((_DAT_0090c83c - _DAT_0090c84c) * fRam0090c89c - _DAT_0090c82c) + _DAT_0090c85c) *
            fRam0090c87c * fVar24 * fVar24;
    *param_3 = _DAT_0090c830 +
               (((_DAT_0090c830 - _DAT_0090c840) * _DAT_0090c890 - _DAT_0090c820) + _DAT_0090c850) *
               _DAT_0090c870 * fVar18 * fVar18 +
               (_DAT_0090c840 - _DAT_0090c820) * _DAT_0090c870 * fVar17 +
               ((DAT_0090c880 * _DAT_0090c840 + _DAT_0090c820) -
               (DAT_0090c8a0 * _DAT_0090c830 + _DAT_0090c850) * _DAT_0090c870) * fVar18;
    param_3[1] = fVar5 + fVar12 * fVar19 + (fVar8 - fVar11) * fVar20;
    param_3[2] = fVar6 + fVar14 * fVar21 + (fVar9 - fVar13) * fVar22;
    param_3[3] = fVar7 + fVar16 * fVar23 + (fVar10 - fVar15) * fVar24;
    param_3 = param_3 + 4;
  }
  for (; piVar2 = DAT_0090c8b0, (param_1 & 3) != 0; param_1 = param_1 - 1) {
    DAT_0090c860._0_4_ = uVar3 >> 1;
    fVar5 = *(float *)(param_2 + -4 + iVar4 * 4);
    fVar6 = *(float *)(param_2 + iVar4 * 4);
    uVar3 = (uint)DAT_0090c860 * 2 + param_7;
    fVar7 = *(float *)(param_2 + 4 + iVar4 * 4);
    fVar8 = *(float *)(param_2 + 8 + iVar4 * 4);
    iVar4 = iVar4 + param_6 + (uint)CARRY4((uint)DAT_0090c860 * 2,param_7);
    fVar9 = (float)(uint)DAT_0090c860 * _DAT_0090c810;
    fVar10 = fVar9 * fVar9;
    *param_3 = fVar6 + (((fVar6 - fVar7) * _DAT_0090c890 - fVar5) + fVar8) * _DAT_0090c870 *
                       fVar10 * fVar10 +
               (fVar7 - fVar5) * _DAT_0090c870 * fVar9 +
               ((DAT_0090c880 * fVar7 + fVar5) - (DAT_0090c8a0 * fVar6 + fVar8) * _DAT_0090c870) *
               fVar10;
    param_3 = param_3 + 1;
  }
  piVar1 = *(int **)(*DAT_0090c8b0 + 0x14);
  **(uint **)(*DAT_0090c8b0 + 0x18) = uVar3;
  *piVar1 = iVar4;
  return CONCAT44(piVar2[6],piVar2[8]);
}

