/* speed.exe 0073b360 FUN_0073b360; analysis pseudocode, not buildable source.
 * calls 006bedd0 FUN_006bedd0
 * calls 006bed80 FUN_006bed80
 * calls 006bedb0 FUN_006bedb0
 * calls 006cb650 FUN_006cb650
 * calls 006cb640 FUN_006cb640
 * calls 006bedc0 FUN_006bedc0
 */

undefined4 FUN_0073b360(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)FUN_006bed80(1);
  iVar3 = 1;
  if (*(char *)(param_2 + 0x4a) == ' ') {
    iVar3 = 4;
  }
  uVar4 = iVar3 * *(short *)(param_2 + 0x46) * (int)*(short *)(param_2 + 0x44);
  puVar6 = *(undefined4 **)(param_1 + 0xc);
  puVar7 = puVar1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  if (*(char *)(param_2 + 0x4a) == '\b') {
    puVar2 = (undefined4 *)FUN_006bedc0(1);
    FUN_006cb650(puVar2);
    FUN_006cb650(*(undefined4 *)(param_1 + 0x10));
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    puVar7 = puVar2;
    for (uVar5 = *(uint *)(param_1 + 0x1c) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_006cb640(*(undefined4 *)(param_1 + 0x10));
    FUN_006cb640(puVar2);
    FUN_006bedd0(puVar2);
  }
  FUN_006bedb0(puVar1);
  return 1;
}

