/* speed.exe 0070d4b0 FUN_0070d4b0; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 00708ae0 FUN_00708ae0
 * calls 004baa30 FUN_004baa30
 */

void __fastcall FUN_0070d4b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  FUN_00464080(DAT_00901bc8);
  piVar3 = (int *)(param_1 + 0x1c);
  uVar4 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar1 = *piVar3;
    do {
      if (*(int *)(iVar1 + 8) != iVar1) break;
      uVar4 = uVar4 + 1;
      iVar1 = iVar1 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  }
  do {
    do {
      if ((*(uint *)(param_1 + 0x20) <= uVar4) ||
         (iVar1 = uVar4 * 0x10, *(int *)(*piVar3 + 8 + iVar1) == *piVar3 + iVar1)) {
        FUN_00464080(DAT_00901bc8);
        DAT_009922a8 = DAT_009922a8 + 1;
        return;
      }
      uVar2 = *(uint *)(*piVar3 + iVar1 + 8);
      uVar2 = (uVar2 == *piVar3 + iVar1) - 1 & uVar2;
      if (((*(char *)(uVar2 + 0x18) == '\0') && (*(char *)(uVar2 + 4) != '\0')) &&
         (*(char *)(uVar2 + 0x19) != '\0')) {
        FUN_004baa30(uVar2);
        FUN_00708ae0(uVar4);
      }
      uVar4 = uVar4 + 1;
    } while (*(uint *)(param_1 + 0x20) <= uVar4);
    iVar1 = uVar4 * 0x10 + *piVar3;
    do {
      if (*(int *)(iVar1 + 8) != iVar1) break;
      uVar4 = uVar4 + 1;
      iVar1 = iVar1 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  } while( true );
}

