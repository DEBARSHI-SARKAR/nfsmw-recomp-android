/* speed.exe 00612e80 FUN_00612e80; analysis pseudocode, not buildable source.
 * calls 00611190 FUN_00611190
 * calls 005dd400 FUN_005dd400
 * calls 005e7440 FUN_005e7440
 * calls 005e1970 FUN_005e1970
 * calls 0060c630 FUN_0060c630
 * calls 005e1700 FUN_005e1700
 * calls 005e7670 FUN_005e7670
 * calls 005f6ba0 FUN_005f6ba0
 * calls 00650350 FUN_00650350
 */

void __fastcall FUN_00612e80(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_18;
  int local_10;
  
  if (*(int *)(param_1 + 0x74) < 1) {
    FUN_005e7670(0xffffffff);
    while (local_18 != 0) {
      FUN_005f6ba0(1);
      FUN_005e1970();
    }
    FUN_005e7440(0xffffffff);
    while (local_10 != 0) {
      FUN_005dd400();
      FUN_005e1700();
    }
    FUN_00611190();
    puVar4 = (undefined4 *)(param_1 + 0x10);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    FUN_0060c630(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4));
    *(int *)(*(int *)(param_1 + 0x54) + 4) = *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(*(int *)(param_1 + 0x54) + 8) = *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x70) != '\0') {
      FUN_00650350(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x6c);
      *(undefined1 *)(param_1 + 0x71) = 0;
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x6c);
    puVar4 = *(undefined4 **)(param_1 + 0x68);
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  return;
}

