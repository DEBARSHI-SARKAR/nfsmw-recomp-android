/* speed.exe 0082c1d0 FUN_0082c1d0; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0082c1d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)(DAT_009c2964 + 0x100);
  puVar6 = (undefined4 *)(DAT_009c2964 + 0x1100);
  puVar5 = (undefined4 *)(DAT_009c2964 + 0xc4);
  iVar3 = 4;
  do {
    puVar1 = (undefined4 *)puVar5[-1];
    if ((puVar2 <= puVar1) && (puVar1 < puVar6)) {
      puVar2 = puVar2 + (uint)*(byte *)((int)puVar1 + 0xf) * 3 + 5;
    }
    puVar1 = (undefined4 *)*puVar5;
    if ((puVar2 <= puVar1) && (puVar1 < puVar6)) {
      puVar2 = puVar2 + (uint)*(byte *)((int)puVar1 + 0xf) * 3 + 5;
    }
    puVar1 = (undefined4 *)puVar5[1];
    if ((puVar2 <= puVar1) && (puVar1 < puVar6)) {
      puVar2 = puVar2 + (uint)*(byte *)((int)puVar1 + 0xf) * 3 + 5;
    }
    puVar1 = (undefined4 *)puVar5[2];
    if ((puVar2 <= puVar1) && (puVar1 < puVar6)) {
      puVar2 = puVar2 + (uint)*(byte *)((int)puVar1 + 0xf) * 3 + 5;
    }
    puVar5 = puVar5 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (puVar2 + (uint)*(byte *)((int)param_1 + 0xf) * 3 + 5 < puVar6) {
    uVar4 = (uint)*(byte *)((int)param_1 + 0xf) * 0xc + 0x14 >> 2;
    puVar6 = puVar2;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar2[4] = puVar2[4] ^ (*(int *)(DAT_009c2964 + 0x14) << 0x12 ^ puVar2[4]) & 0x1c0000U;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

