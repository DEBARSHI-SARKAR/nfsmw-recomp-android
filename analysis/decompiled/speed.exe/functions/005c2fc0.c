/* speed.exe 005c2fc0 FUN_005c2fc0; analysis pseudocode, not buildable source.
 * calls 005b2810 FUN_005b2810
 * calls 005c1dc0 FUN_005c1dc0
 * calls 005bf230 FUN_005bf230
 * calls 005b5350 FUN_005b5350
 */

void __thiscall FUN_005c2fc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_005b2810(*(undefined4 *)(param_2 + 0x2c));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_005bf230(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = 0;
    do {
      FUN_005c1dc0(*(int *)(param_2 + 0x20) + iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x38;
    } while (uVar2 < *(uint *)(param_1 + 0x1c));
  }
  FUN_005b5350(*(undefined4 *)(param_2 + 0x24));
  puVar3 = *(undefined4 **)(param_2 + 0x28);
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  for (uVar2 = *(int *)(param_1 + 0x24) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}

