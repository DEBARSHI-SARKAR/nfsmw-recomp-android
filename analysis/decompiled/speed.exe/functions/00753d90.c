/* speed.exe 00753d90 FUN_00753d90; analysis pseudocode, not buildable source.
 * calls 0074b760 FUN_0074b760
 * calls 0074b5c0 FUN_0074b5c0
 * calls 007c4b80 FUN_007c4b80
 * calls 0073d7d0 FUN_0073d7d0
 */

/* WARNING: Removing unreachable block (ram,0x00753feb) */
/* WARNING: Removing unreachable block (ram,0x00753fd5) */
/* WARNING: Removing unreachable block (ram,0x00754001) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00753d90(float *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float local_30;
  float local_14;
  
  iVar14 = *(int *)(param_2 + 4) + -1;
  iVar15 = iVar14 * 0x30;
  if (*(int *)(&DAT_0090586c + iVar15) == 0) {
    return 0;
  }
  uVar13 = *(undefined4 *)(*(int *)(param_2 + 0x40) + 0x40);
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x40) + 0x44);
  FUN_0074b760(uVar13,uVar1,0x42480000);
  fVar3 = _DAT_00890968;
  if (((*(int *)(&DAT_0090586c + iVar15) != 0) && (*(int *)(&DAT_00905878 + iVar15) != 0)) &&
     (pfVar8 = (float *)(**(int **)(*(int *)(&DAT_0090586c + iVar15) + 0x10) +
                        *(int *)(&DAT_00905878 + iVar15)), pfVar8 != (float *)0x0)) {
    fVar3 = *pfVar8;
  }
  fVar4 = _DAT_00890968;
  if (((*(int *)(&DAT_0090586c + iVar15) != 0) && (*(int *)(&DAT_00905878 + iVar15) != 0)) &&
     (pfVar8 = (float *)(*(int *)(*(int *)(*(int *)(&DAT_0090586c + iVar15) + 0x10) + 4) +
                        *(int *)(&DAT_00905878 + iVar15)), pfVar8 != (float *)0x0)) {
    fVar4 = *pfVar8;
  }
  fVar5 = _DAT_00890968;
  if (((*(int *)(&DAT_0090586c + iVar15) != 0) && (*(int *)(&DAT_00905878 + iVar15) != 0)) &&
     (pfVar8 = (float *)(*(int *)(*(int *)(*(int *)(&DAT_0090586c + iVar15) + 0x10) + 0x14) +
                        *(int *)(&DAT_00905878 + iVar15)), pfVar8 != (float *)0x0)) {
    fVar5 = *pfVar8;
  }
  fVar6 = _DAT_00890968;
  if (((*(int *)(&DAT_0090586c + iVar15) != 0) && (*(int *)(&DAT_00905878 + iVar15) != 0)) &&
     (pfVar8 = (float *)(*(int *)(*(int *)(*(int *)(&DAT_0090586c + iVar15) + 0x10) + 0x18) +
                        *(int *)(&DAT_00905878 + iVar15)), pfVar8 != (float *)0x0)) {
    fVar6 = *pfVar8;
  }
  fVar7 = _DAT_00890968;
  if (((*(int *)(&DAT_0090586c + iVar15) != 0) && (*(int *)(&DAT_00905878 + iVar15) != 0)) &&
     (pfVar8 = (float *)(*(int *)(*(int *)(*(int *)(&DAT_0090586c + iVar15) + 0x10) + 0x1c) +
                        *(int *)(&DAT_00905878 + iVar15)), pfVar8 != (float *)0x0)) {
    fVar7 = *pfVar8;
  }
  *param_1 = fVar5;
  param_1[1] = fVar6;
  param_1[2] = fVar7;
  param_1[3] = fVar4;
  param_1[4] = fVar3;
  uVar9 = FUN_007c4b80();
  uVar10 = FUN_007c4b80();
  uVar11 = FUN_007c4b80();
  param_1[5] = (float)(((uVar9 | 0xffff8000) << 8 | uVar10) << 8 | uVar11);
  if (DAT_009b0a70 != 0) {
    *param_1 = DAT_00903190;
    param_1[1] = DAT_00903194;
    param_1[2] = DAT_00903198;
    param_1[3] = DAT_009031a0;
    param_1[4] = DAT_0090319c;
    uVar10 = (DAT_009031ac << 8 | DAT_009031a8) << 8 | DAT_009031a4;
    uVar9 = DAT_009031a4 & 0xff;
    param_1[3] = DAT_009031a0;
    param_1[5] = (float)(((uVar10 >> 0x10 & 0xff | 0xffff8000) << 8 | uVar10 >> 8 & 0xff) << 8 |
                        uVar9);
  }
  iVar2 = *(int *)(param_2 + 0x68);
  local_30 = _DAT_00890968;
  if (iVar2 != 0) {
    local_30 = *(float *)(iVar2 + 0x28c);
  }
  if (local_30 == _DAT_00890968) {
    local_30 = _DAT_00890968;
    if (iVar2 != 0) {
      local_30 = *(float *)(iVar2 + 0x290);
    }
    local_30 = local_30 * _DAT_00894c30;
  }
  if (_DAT_00890968 < local_30) {
    iVar14 = iVar14 * 0x1c;
    local_14 = 50.0;
    if (*(int *)(&DAT_0090592c + iVar14) != 0) {
      if (*(int *)(&DAT_0090592c + iVar14) == 0) {
        *(undefined4 *)(&DAT_00905938 + iVar14) = 0;
      }
      else {
        uVar12 = FUN_0074b5c0(uVar13,uVar1);
        *(undefined4 *)(&DAT_00905938 + iVar14) = uVar12;
      }
      fVar16 = (float10)FUN_0073d7d0(0);
      local_14 = (float)fVar16;
    }
    if (*(int *)(&DAT_009058cc + iVar15) != 0) {
      fVar3 = _DAT_0089096c - local_30;
      FUN_0074b760(uVar13,uVar1,local_14);
      fVar16 = (float10)FUN_0073d7d0(0);
      fVar17 = (float10)FUN_0073d7d0(1);
      FUN_0073d7d0(2);
      FUN_0073d7d0(3);
      FUN_0073d7d0(4);
      fVar18 = (float10)FUN_0073d7d0(6);
      fVar19 = (float10)FUN_0073d7d0(7);
      fVar20 = (float10)FUN_0073d7d0(5);
      *param_1 = (float)((float10)fVar3 * (float10)*param_1 + fVar20 * (float10)local_30);
      param_1[1] = local_30 * (float)fVar18 + fVar3 * param_1[1];
      param_1[2] = local_30 * (float)fVar19 + fVar3 * param_1[2];
      param_1[3] = local_30 * (float)fVar17 + fVar3 * param_1[3];
      param_1[4] = local_30 * (float)fVar16 + fVar3 * param_1[4];
      uVar9 = FUN_007c4b80();
      uVar10 = FUN_007c4b80();
      uVar11 = FUN_007c4b80();
      iVar14 = *(int *)(param_2 + 0x68);
      if (iVar14 != 0) {
        uVar13 = FUN_007c4b80();
        *(undefined4 *)(iVar14 + 0x34a8) = uVar13;
        uVar13 = FUN_007c4b80();
        *(undefined4 *)(iVar14 + 0x34ac) = uVar13;
        uVar13 = FUN_007c4b80();
        *(undefined4 *)(iVar14 + 0x34b0) = uVar13;
      }
      param_1[5] = (float)(((uVar11 | 0xffff8000) << 8 | uVar10) << 8 | uVar9);
    }
  }
  return 1;
}

