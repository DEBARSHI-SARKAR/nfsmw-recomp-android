/* speed.exe 004f0840 FUN_004f0840; analysis pseudocode, not buildable source.
 * calls 004d76d0 FUN_004d76d0
 * calls 007c4b80 FUN_007c4b80
 * calls 004d76a0 FUN_004d76a0
 * calls 004d75f0 FUN_004d75f0
 * calls 004d77c0 FUN_004d77c0
 * calls 004d7640 FUN_004d7640
 * calls 004ea620 FUN_004ea620
 * calls 004d7670 FUN_004d7670
 * calls 004d7760 FUN_004d7760
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004f0840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x28) == 0)) ||
     (*(char *)(*(int *)(iVar1 + 0x28) + 0x94) != '\x01')) {
    if (*(int *)(param_1 + 0x58) == 0) {
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x28) = 0;
  }
  else {
    uVar2 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    iVar3 = FUN_007c4b80();
    *(int *)(param_1 + 0x40) = iVar3;
    if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
       (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(uint **)(param_1 + 0x10) & 0xffff;
    }
    if (100 < iVar3) {
      *(undefined4 *)(param_1 + 0x40) = 100;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x68);
    if ((0x4000 < uVar4) && (uVar4 < 0xc000)) {
      *(int *)(param_1 + 0x40) = -*(int *)(param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      return;
    }
    FUN_004d7670(uVar4);
    FUN_004d76d0(*(undefined4 *)(param_1 + 0x40));
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
    }
    FUN_004d7640(uVar4);
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
    }
    FUN_004d7760(uVar4);
    FUN_004d76a0(*(undefined4 *)(param_1 + 0x3c));
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004ea620(*(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xffff);
    }
    FUN_004d75f0(uVar2);
    FUN_004d77c0(*(undefined4 *)(param_1 + 0x54));
  }
  if (**(int **)(param_1 + 0x58) != 0) {
    FUN_0083179c(*(int **)(param_1 + 0x58) + 1);
  }
  return;
}

