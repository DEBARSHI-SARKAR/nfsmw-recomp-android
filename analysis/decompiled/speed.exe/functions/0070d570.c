/* speed.exe 0070d570 FUN_0070d570; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 00708ae0 FUN_00708ae0
 * calls 004baa30 FUN_004baa30
 */

void __fastcall FUN_0070d570(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  FUN_00464080(DAT_00901bc8);
  piVar7 = (int *)(param_1 + 0x1c);
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    iVar5 = *piVar7;
    do {
      if (*(int *)(iVar5 + 8) != iVar5) break;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  do {
    if ((*(uint *)(param_1 + 0x20) <= uVar3) ||
       (iVar5 = uVar3 * 0x10, *(int *)(*piVar7 + 8 + iVar5) == *piVar7 + iVar5)) {
      FUN_00464080(DAT_00901bc8);
      DAT_009922a4 = DAT_009922a4 + 1;
      return;
    }
    uVar6 = *(uint *)(*piVar7 + iVar5 + 8);
    uVar6 = (uVar6 == *piVar7 + iVar5) - 1 & uVar6;
    if (((*(char *)(uVar6 + 0x18) == '\0') && (*(char *)(uVar6 + 4) != '\0')) &&
       (*(char *)(uVar6 + 0x19) != '\0')) {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 4);
      piVar4 = (int *)*piVar1;
      bVar2 = true;
      if (piVar4 != piVar1) {
        do {
          if ((piVar4[2] == *(int *)(uVar6 + 0xc)) || (*(int *)(uVar6 + 0xc) == 0xffff)) {
            bVar2 = false;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != piVar1);
        if (!bVar2) goto LAB_0070d62e;
      }
      FUN_004baa30(uVar6);
      FUN_00708ae0(uVar3);
    }
LAB_0070d62e:
    uVar3 = uVar3 + 1;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      iVar5 = uVar3 * 0x10 + *piVar7;
      do {
        if (*(int *)(iVar5 + 8) != iVar5) break;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar3 < *(uint *)(param_1 + 0x20));
    }
  } while( true );
}

