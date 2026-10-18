/* speed.exe 004ed340 FUN_004ed340; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 00454810 FUN_00454810
 * calls 0083179c FUN_0083179c
 */

/* WARNING: Removing unreachable block (ram,0x004ed463) */
/* WARNING: Removing unreachable block (ram,0x004ed492) */

void __fastcall FUN_004ed340(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
    }
    piVar2 = (int *)FUN_00454810(0xc1eddd78,0);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_006269b0(4);
    }
    iVar4 = (int)(*piVar2 * uVar1) >> 0xf;
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
    else if (0x10000 < uVar1) {
      uVar1 = 0x10000;
    }
    *(uint *)(*(int *)(param_1 + 0x2c) + 0x14) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24) = 0;
    iVar3 = FUN_007c4b80();
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (10000 < iVar3) {
      iVar3 = 10000;
    }
    *(int *)(*(int *)(param_1 + 0x2c) + 0xc) = iVar3;
    iVar3 = FUN_007c4b80();
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x400 < iVar3) {
      iVar3 = 0x400;
    }
    *(int *)(*(int *)(param_1 + 0x2c) + 0x20) = iVar3;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x8013 < iVar4) {
      iVar4 = 0x8013;
    }
    *(int *)(*(int *)(param_1 + 0x2c) + 0x10) = iVar4;
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + 0x68);
    if (1 < uVar1) {
      uVar1 = 1;
    }
    *(uint *)(*(int *)(param_1 + 0x2c) + 0x28) = uVar1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
    if ((iVar4 == 3) || (uVar1 = 0, iVar4 != 0)) {
      uVar1 = 1;
    }
    if (1 < uVar1) {
      uVar1 = 1;
    }
    *(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) = uVar1;
    if (**(int **)(param_1 + 0x2c) != 0) {
      FUN_0083179c(*(int **)(param_1 + 0x2c) + 1);
    }
  }
  return;
}

