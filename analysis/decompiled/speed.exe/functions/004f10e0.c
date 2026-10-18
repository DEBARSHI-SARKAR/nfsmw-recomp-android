/* speed.exe 004f10e0 FUN_004f10e0; analysis pseudocode, not buildable source.
 * calls 004ea620 FUN_004ea620
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004f10e0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x44) + 4))();
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x7fff < uVar1) {
      uVar1 = 0x7fff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 8) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ea620(*(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xffff);
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x4000 < iVar2) {
      iVar2 = 0x4000;
    }
    *(int *)(*(int *)(param_1 + 0x28) + 0xc) = iVar2;
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x10) = uVar1;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4) >> 0x10 & 0x7fff;
    }
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (25000 < uVar1) {
      uVar1 = 25000;
    }
    *(uint *)(*(int *)(param_1 + 0x28) + 0x18) = uVar1;
    if (**(int **)(param_1 + 0x28) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x28) + 1);
    }
  }
  return;
}

