/* speed.exe 004e9e70 FUN_004e9e70; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9e70(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar8 = *(int *)*param_1;
  uVar1 = *(uint *)(iVar8 + 0xc);
  uVar2 = *(uint *)(iVar8 + 0x14);
  fVar5 = (float)(uVar1 & 0xfff) * _DAT_0089906c;
  uVar10 = *(uint *)(iVar8 + 4) & 0xffff;
  fVar6 = (float)(uVar2 & 0xfff) * _DAT_0089906c;
  if ((*(uint *)(iVar8 + 4) & 0x8000) != 0) {
    uVar10 = uVar10 | 0xffff0000;
  }
  pfVar3 = (float *)param_1[1];
  if (fVar5 <= *pfVar3) {
    if (*(int *)pfVar3[4] != 0) {
      if ((*(int *)pfVar3[4] == 1) && (pfVar3[1] != _DAT_00890968)) {
        *(undefined4 *)(param_1[1] + 8) = 1;
        *(undefined4 *)param_1[1] = 0;
        *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(param_1[1] + 0x18);
        *(undefined4 *)(param_1[1] + 0x1c) = 0x7fff;
        *(undefined4 *)(param_1[1] + 4) = 0;
        return;
      }
      *(undefined4 *)(param_1[1] + 8) = 0;
      *(undefined4 *)(param_1[1] + 0xc) = 0;
      *(undefined4 *)(param_1[1] + 4) = 0;
      *(float *)param_1[1] = fVar5;
      *(undefined4 *)(param_1[1] + 0x1c) = 0;
      goto LAB_004ea056;
    }
    if (pfVar3[1] == _DAT_00890968) {
      ((undefined4 *)param_1[1])[1] = *(undefined4 *)param_1[1];
    }
    if (fVar6 < *(float *)param_1[1] - ((float *)param_1[1])[1]) {
      *(undefined4 *)(param_1[1] + 8) = 0;
      *(undefined4 *)(param_1[1] + 0xc) = 0;
      *(undefined4 *)param_1[1] = 0;
      *(undefined4 *)(param_1[1] + 4) = 0;
      *(undefined4 *)(param_1[1] + 0x1c) = 0x7fff;
      return;
    }
    uVar7 = FUN_007c4b80();
    iVar8 = FUN_004e42a0((int)uVar2 >> 0xc & 0xf,uVar7,0);
    if ((int)uVar10 < 0) {
      *(int *)(param_1[1] + 0x1c) = iVar8;
      goto LAB_004ea056;
    }
  }
  else {
    if (*(int *)pfVar3[4] == 0) {
      pfVar3[2] = 1.4013e-45;
      *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(param_1[1] + 0x18);
      *(float *)param_1[1] = fVar5;
      return;
    }
    uVar7 = FUN_007c4b80();
    iVar8 = FUN_004e42a0((int)uVar1 >> 0xc & 0xf,uVar7,0);
    if ((int)uVar10 < 0) {
      *(int *)(param_1[1] + 0x1c) = iVar8;
      goto LAB_004ea056;
    }
  }
  *(int *)(param_1[1] + 0x1c) = 0x7fff - iVar8;
LAB_004ea056:
  iVar8 = param_1[1];
  if (*(int *)(iVar8 + 8) == 0) {
    uVar7 = FUN_007c4b80();
    *(undefined4 *)(iVar8 + 0x18) = uVar7;
    return;
  }
  if (**(int **)(iVar8 + 0x10) == 0) {
    uVar7 = FUN_007c4b80();
    *(undefined4 *)(iVar8 + 0x18) = uVar7;
    return;
  }
  iVar4 = *(int *)(iVar8 + 0xc);
  iVar9 = FUN_007c4b80();
  *(int *)(iVar8 + 0x18) = iVar9 + iVar4;
  return;
}

