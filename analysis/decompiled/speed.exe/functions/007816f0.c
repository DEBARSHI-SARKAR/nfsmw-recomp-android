/* speed.exe 007816f0 FUN_007816f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d0370 FUN_005d0370
 * calls 0077d470 FUN_0077d470
 * calls 004655f0 FUN_004655f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007816f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_009b38a8 != 0) {
    iVar3 = 0;
    iVar2 = DAT_009b38a8;
    if (0 < *(int *)(DAT_009b38a8 + 0x1c) * *(int *)(DAT_009b38a8 + 0x18)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar2 + 0x20) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          if (iVar2 != 0) {
            FUN_0077d470();
            FUN_005d0370(iVar2,0xc,0);
          }
          *piVar1 = 0;
          *(undefined4 *)(*(int *)(DAT_009b38a8 + 0x20) + iVar3 * 4) = 0;
          iVar2 = DAT_009b38a8;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x1c) * *(int *)(iVar2 + 0x18));
    }
    FUN_004655f0(*(undefined4 *)(iVar2 + 0x20));
    thunk_FUN_007c7250(iVar2);
    DAT_009b38a8 = 0;
  }
  _DAT_009b38ac = 0;
  return;
}

