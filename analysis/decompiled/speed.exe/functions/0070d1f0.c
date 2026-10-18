/* speed.exe 0070d1f0 FUN_0070d1f0; analysis pseudocode, not buildable source.
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00708ae0 FUN_00708ae0
 * calls 0045a430 FUN_0045a430
 * calls 004baa30 FUN_004baa30
 */

void __thiscall FUN_0070d1f0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (DAT_00992295 != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    uVar1 = FUN_004cb270(*(undefined4 *)(param_2 + 0x10));
    FUN_004b8880(uVar1,uVar6,uVar7);
    FUN_0045a430();
  }
  piVar4 = (int *)(param_1 + 0x1c);
  uVar5 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar2 = *piVar4;
    do {
      if (*(int *)(iVar2 + 8) != iVar2) break;
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar5 < *(uint *)(param_1 + 0x20));
  }
  do {
    do {
      if (*(uint *)(param_1 + 0x20) <= uVar5) {
        return;
      }
      iVar2 = uVar5 * 0x10;
      if (*(int *)(*piVar4 + 8 + iVar2) == *piVar4 + iVar2) {
        return;
      }
      uVar3 = *(uint *)(*piVar4 + iVar2 + 8);
      uVar3 = (uVar3 == *piVar4 + iVar2) - 1 & uVar3;
      if ((uVar3 == param_2) && (*(char *)(uVar3 + 0x18) == '\0')) {
        FUN_004baa30(uVar3);
        FUN_00708ae0(uVar5);
        if (DAT_00992295 != '\0') {
          uVar7 = 0;
          uVar6 = 0;
          uVar1 = FUN_004cb270(*(undefined4 *)(param_2 + 0x10));
          FUN_004b8880(uVar1,uVar6,uVar7);
          FUN_0045a430();
        }
        return;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(param_1 + 0x20) <= uVar5);
    iVar2 = uVar5 * 0x10 + *piVar4;
    do {
      if (*(int *)(iVar2 + 8) != iVar2) break;
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar5 < *(uint *)(param_1 + 0x20));
  } while( true );
}

