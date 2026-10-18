/* speed.exe 004edd90 FUN_004edd90; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004ea620 FUN_004ea620
 * calls 0083179c FUN_0083179c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004edd90(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iStack_c;
  
  (**(code **)(**(int **)(param_1 + 0x38) + 0x44))();
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 == (int *)0x0) {
      iStack_c = 0;
    }
    else {
      iStack_c = FUN_004ea620(piVar1[2] & 0xffff);
    }
    *(float *)(param_1 + 0x3c) = (float)iStack_c * _DAT_00897670;
    iVar3 = FUN_007c4b80();
    if (piVar1 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *piVar1 >> 0x10 & 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + 4) = uVar6;
    iVar5 = (((int)(*(int *)(*(int *)(param_1 + 0x38) + 0xd0) * uVar6) >> 0xf) * 0x7fff >> 0xf) +
            -0x7fff;
    if (iVar5 < -0x7fff) {
      iVar4 = -0x7fff;
    }
    else {
      iVar4 = iVar5;
      if (0 < iVar5) {
        iVar4 = 0;
      }
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x14) = iVar4;
    if (iVar5 < -0x7fff) {
      iVar5 = -0x7fff;
    }
    else if (0 < iVar5) {
      iVar5 = 0;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x18) = iVar5;
    iVar5 = FUN_007c4b80();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (10000 < iVar5) {
      iVar5 = 10000;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 8) = iVar5;
    if (iVar3 < -0x3fff) {
      iVar3 = -0x3fff;
    }
    else if (0x3fff < iVar3) {
      iVar3 = 0x3fff;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x44) = iVar3;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x4c))();
    iVar3 = FUN_007c4b80();
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x400 < iVar3) {
      iVar3 = 0x400;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x10) = iVar3;
    iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 300);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x400 < iVar3) {
      iVar3 = 0x400;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x48) = iVar3;
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    else if (0x10000 < uVar6) {
      uVar6 = 0x10000;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x40) = uVar6;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(*(int *)(param_1 + 0x10) + 8) >> 0x10 & 0x7fff;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x38) + 0x134);
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    else if (25000 < (int)uVar6) {
      uVar6 = 25000;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x58) = uVar6;
    if (**(int **)(param_1 + 0x28) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x28) + 1);
    }
  }
  return;
}

