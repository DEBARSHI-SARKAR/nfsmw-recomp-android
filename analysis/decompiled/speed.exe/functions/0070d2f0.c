/* speed.exe 0070d2f0 FUN_0070d2f0; analysis pseudocode, not buildable source.
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00708ae0 FUN_00708ae0
 * calls 0045a430 FUN_0045a430
 * calls 004baa30 FUN_004baa30
 */

void __fastcall FUN_0070d2f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)(param_1 + 0x1c);
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar4 = *piVar1;
    do {
      if (*(int *)(iVar4 + 8) != iVar4) break;
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  do {
    do {
      if ((*(uint *)(param_1 + 0x20) <= uVar2) ||
         (iVar4 = uVar2 * 0x10, *(int *)(*piVar1 + 8 + iVar4) == *piVar1 + iVar4)) {
        DAT_0099229c = DAT_0099229c + 1;
        return;
      }
      uVar5 = *(uint *)(*piVar1 + iVar4 + 8);
      uVar5 = (uVar5 == *piVar1 + iVar4) - 1 & uVar5;
      if (((*(char *)(uVar5 + 0x18) == '\0') && (*(char *)(uVar5 + 4) != '\0')) &&
         (*(char *)(uVar5 + 0x19) == '\0')) {
        if (DAT_00992298 != 0) {
          uVar7 = 0;
          uVar6 = 0;
          uVar3 = FUN_004cb270(*(undefined4 *)(uVar5 + 0x10));
          FUN_004b8880(uVar3,uVar6,uVar7);
          FUN_0045a430();
        }
        FUN_004baa30(uVar5);
        FUN_00708ae0(uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_1 + 0x20) <= uVar2);
    iVar4 = uVar2 * 0x10 + *piVar1;
    do {
      if (*(int *)(iVar4 + 8) != iVar4) break;
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  } while( true );
}

