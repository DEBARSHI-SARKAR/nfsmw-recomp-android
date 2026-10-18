/* speed.exe 0070d3e0 FUN_0070d3e0; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 00708ae0 FUN_00708ae0
 * calls 004baa30 FUN_004baa30
 */

void __fastcall FUN_0070d3e0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  FUN_00464080(DAT_00901bc8);
  piVar4 = (int *)(param_1 + 0x1c);
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar2 = *piVar4;
    do {
      if (*(int *)(iVar2 + 8) != iVar2) break;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  do {
    do {
      if ((*(uint *)(param_1 + 0x20) <= uVar1) ||
         (iVar2 = uVar1 * 0x10, *(int *)(*piVar4 + 8 + iVar2) == *piVar4 + iVar2)) {
        FUN_00464080(DAT_00901bc8);
        DAT_009922a0 = DAT_009922a0 + 1;
        return;
      }
      uVar3 = *(uint *)(*piVar4 + iVar2 + 8);
      uVar3 = (uVar3 == *piVar4 + iVar2) - 1 & uVar3;
      if ((((*(char *)(uVar3 + 0x18) == '\0') && (*(char *)(uVar3 + 4) != '\0')) &&
          (*(char *)(uVar3 + 0x19) != '\0')) && (*(int *)(uVar3 + 8) < 2)) {
        FUN_004baa30(uVar3);
        FUN_00708ae0(uVar1);
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0x20) <= uVar1);
    iVar2 = uVar1 * 0x10 + *piVar4;
    do {
      if (*(int *)(iVar2 + 8) != iVar2) break;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  } while( true );
}

