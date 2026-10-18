/* speed.exe 004d0a60 FUN_004d0a60; analysis pseudocode, not buildable source.
 * calls 004cfac0 FUN_004cfac0
 * calls 00661c70 FUN_00661c70
 * calls 0081a980 FUN_0081a980
 * calls 004655f0 FUN_004655f0
 * calls 004d0610 FUN_004d0610
 */

void __thiscall FUN_004d0a60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if ((-1 < param_2) && (param_2 < 0x30)) {
    while ((*(int *)(param_1 + 0xfc) != 0 ||
           (((*(int *)(param_1 + 0x108) != 0 || (*(char *)(param_1 + 0x10d) != '\0')) ||
            (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0) + -1))))) {
      FUN_00661c70();
      FUN_004d0610(0x3dcccccd);
    }
    *(undefined4 **)(param_1 + 0x100) = &DAT_00912858 + param_2 * 0x1a;
    if ((&DAT_00912891)[param_2 * 0x68] != '\0') {
      (&DAT_00912890)[param_2 * 0x68] = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x39) = 0;
      if ((**(int **)(param_1 + 0x100) < 5) &&
         (iVar1 = (*(int **)(param_1 + 0x100))[0xd], iVar1 != -1)) {
        FUN_0081a980(iVar1);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 0x2c);
      if (iVar1 != 0) {
        FUN_004655f0(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 0x28);
      if (iVar1 != 0) {
        FUN_004655f0(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x28) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 0x24);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x20) = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 8);
        iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 0x24);
        uVar5 = *(uint *)(iVar1 + 0x10);
        puVar6 = *(undefined4 **)(iVar1 + 0xc);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x24) = 0;
      }
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x100);
        iVar2 = *(int *)(iVar1 + 0x40);
        if ((iVar2 == 0) || (*(int *)(iVar1 + 0x44) - iVar2 >> 2 == 0)) break;
        iVar3 = *(int *)(*(int *)(iVar1 + 0x44) + -4);
        if ((iVar2 != 0) && (*(int *)(iVar1 + 0x44) - iVar2 >> 2 != 0)) {
          *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -4;
        }
        if (iVar3 != 0) {
          FUN_004655f0(iVar3);
        }
      }
      FUN_004cfac0(param_2);
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
  }
  return;
}

