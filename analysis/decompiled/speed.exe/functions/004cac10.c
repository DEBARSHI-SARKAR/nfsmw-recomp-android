/* speed.exe 004cac10 FUN_004cac10; analysis pseudocode, not buildable source.
 * calls 008311aa FUN_008311aa
 * calls 0083179c FUN_0083179c
 * calls 004cab80 FUN_004cab80
 */

void __thiscall FUN_004cac10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14) * *(int *)(param_2 + 4) >> 0xf;
  local_4 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar3 = *(ushort *)(*(int *)(param_1 + 4) + 8) + 0x10000 + *(int *)(param_2 + 0xc) & 0x8000ffff;
    if (((int)uVar3 < 0) && (uVar3 = (uVar3 - 1 | 0xffff0000) + 1, (int)uVar3 < 0)) {
      uVar3 = 0;
    }
    else if (0x10000 < (int)uVar3) {
      uVar3 = 0x10000;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + 0x14) = uVar3;
    if (iVar4 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar4;
      if (0x7fff < iVar4) {
        iVar1 = 0x7fff;
      }
    }
    *(int *)(*(int *)(param_1 + 0xc) + 0xc) = iVar1;
    if (iVar2 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar2;
      if (0x2000 < iVar2) {
        iVar1 = 0x2000;
      }
    }
    *(int *)(*(int *)(param_1 + 0xc) + 0x10) = iVar1;
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *(int *)(*(int *)(param_1 + 0xc) + 0x20) = iVar1;
    if (**(int **)(param_1 + 0xc) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0xc) + 1);
    }
    local_4 = 0;
    if ((**(int **)(param_1 + 0xc) == 0) || (FUN_008311aa(&local_4), local_4 < 2)) {
      FUN_004cab80();
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = *(ushort *)(*(int *)(param_1 + 4) + 8) + 0x10000 + *(int *)(param_2 + 0xc) & 0x8000ffff;
    if (((int)uVar3 < 0) && (uVar3 = (uVar3 - 1 | 0xffff0000) + 1, (int)uVar3 < 0)) {
      uVar3 = 0;
    }
    else if (0x10000 < (int)uVar3) {
      uVar3 = 0x10000;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0x14) = uVar3;
    if (iVar4 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar4;
      if (0x7fff < iVar4) {
        iVar1 = 0x7fff;
      }
    }
    *(int *)(*(int *)(param_1 + 8) + 0xc) = iVar1;
    if (iVar2 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar2;
      if (0x2000 < iVar2) {
        iVar1 = 0x2000;
      }
    }
    *(int *)(*(int *)(param_1 + 8) + 0x10) = iVar1;
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *(int *)(*(int *)(param_1 + 8) + 0x20) = iVar1;
    if (**(int **)(param_1 + 8) != 0) {
      FUN_0083179c(*(int **)(param_1 + 8) + 1);
    }
    local_4 = 0;
    if ((**(int **)(param_1 + 8) == 0) || (FUN_008311aa(&local_4), local_4 < 2)) {
      FUN_004cab80();
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = *(ushort *)(*(int *)(param_1 + 4) + 8) + 0x10000 + *(int *)(param_2 + 0xc) & 0x8000ffff;
    if (((int)uVar3 < 0) && (uVar3 = (uVar3 - 1 | 0xffff0000) + 1, (int)uVar3 < 0)) {
      uVar3 = 0;
    }
    else if (0x10000 < (int)uVar3) {
      uVar3 = 0x10000;
    }
    *(uint *)(*(int *)(param_1 + 0x10) + 0x14) = uVar3;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    *(int *)(*(int *)(param_1 + 0x10) + 0xc) = iVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x2000 < iVar2) {
      iVar2 = 0x2000;
    }
    *(int *)(*(int *)(param_1 + 0x10) + 0x10) = iVar2;
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *(int *)(*(int *)(param_1 + 0x10) + 0x20) = iVar2;
    if (**(int **)(param_1 + 0x10) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x10) + 1);
    }
    param_2 = 0;
    if ((**(int **)(param_1 + 0x10) != 0) && (FUN_008311aa(&param_2), 1 < param_2)) {
      return;
    }
    FUN_004cab80();
  }
  return;
}

