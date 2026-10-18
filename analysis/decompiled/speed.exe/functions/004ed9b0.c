/* speed.exe 004ed9b0 FUN_004ed9b0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004ea620 FUN_004ea620
 * calls 00454810 FUN_00454810
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004ed9b0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  if ((*(char *)(param_1 + 8) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8) >> 0x10 & 0x7fff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x7fff < uVar1) {
      uVar1 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 4) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc) >> 0x10 & 0x7fff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x7fff < uVar1) {
      uVar1 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 8) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0xc) & 0x7fff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x7fff < uVar1) {
      uVar1 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0xc) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10) >> 0x10 & 0x7fff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x7fff < uVar1) {
      uVar1 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x58) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ea620(*(uint *)(*(int *)(param_1 + 0x10) + 0x10) & 0xffff);
    }
    if (iVar2 < -0x4000) {
      iVar2 = -0x4000;
    }
    else if (0x4000 < iVar2) {
      iVar2 = 0x4000;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x18) = iVar2;
    if ((*(int **)(param_1 + 0x10) == (int *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(int **)(param_1 + 0x10) >> 0x10 & 0xffff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x10) = uVar1;
    puVar3 = (uint *)FUN_00454810(0xd377b339,0);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)FUN_006269b0(4);
    }
    puVar4 = (uint *)FUN_00454810(0xd377b339,0);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)FUN_006269b0(4);
    }
    uVar1 = *puVar4;
    if (*puVar4 <= *puVar3) {
      uVar1 = *puVar3;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (5 < (int)uVar1) {
      uVar1 = 5;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x30) = uVar1;
    iVar2 = FUN_007c4b80();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (1000 < iVar2) {
      iVar2 = 1000;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x20) = iVar2;
    iVar2 = FUN_007c4b80();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x3ff < iVar2) {
      iVar2 = 0x3ff;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x28) = iVar2;
    iVar2 = FUN_007c4b80();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x3ff < iVar2) {
      iVar2 = 0x3ff;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0x2c) = iVar2;
    if ((*(char *)(*(int *)(param_1 + 0x38) + 0xf1) == '\0') &&
       (*(char *)(*(int *)(param_1 + 0x38) + 0xf0) == '\0')) {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x34) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x38) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x3c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x40) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x44) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48) = 0;
    }
    else {
      iVar2 = FUN_007c4b80();
      if (iVar2 < -0x3ff) {
        iVar2 = -0x3ff;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x34) = iVar2;
      iVar2 = FUN_007c4b80();
      if (iVar2 < -0x3ff) {
        iVar2 = -0x3ff;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x38) = iVar2;
      iVar2 = FUN_007c4b80();
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x3c) = iVar2;
      iVar2 = FUN_007c4b80();
      if (iVar2 < -0x3ff) {
        iVar2 = -0x3ff;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x40) = iVar2;
      iVar2 = FUN_007c4b80();
      if (iVar2 < -0x3ff) {
        iVar2 = -0x3ff;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x44) = iVar2;
      iVar2 = FUN_007c4b80();
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x48) = iVar2;
    }
    if (**(int **)(param_1 + 0x28) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x28) + 1);
    }
  }
  return;
}

