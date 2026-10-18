/* speed.exe 0082c560 FUN_0082c560; analysis pseudocode, not buildable source.
 * calls 0082c340 FUN_0082c340
 * calls 0082c2b0 FUN_0082c2b0
 */

void FUN_0082c560(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  
  puVar3 = *(undefined4 **)(DAT_009c2964 + 0xc0 + param_1 * 4);
  local_8 = (undefined4 *)(DAT_009c2964 + 0x100);
  puVar1 = (undefined4 *)(DAT_009c2964 + 0x1100);
  bVar2 = *(byte *)((int)puVar3 + 0xf);
  if ((local_8 <= puVar3) && (puVar3 < puVar1)) {
    puVar5 = puVar3 + (uint)bVar2 * 3 + 5;
    puVar6 = puVar3;
    for (uVar4 = (uint)((int)puVar1 - (int)puVar3) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = (int)puVar1 - (int)puVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar4 = 0xc0;
    do {
      puVar5 = *(undefined4 **)(uVar4 + DAT_009c2964);
      if ((puVar3 < puVar5) && (puVar5 < puVar1)) {
        puVar6 = (undefined4 *)((int)puVar5 - ((uint)bVar2 * 0xc + 0x14));
        FUN_0082c340(puVar5,puVar6);
        if (local_8 <= puVar6) {
          local_8 = puVar6 + (uint)*(byte *)((int)puVar6 + 0xf) * 3 + 5;
        }
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x101);
    FUN_0082c2b0(puVar3);
    return;
  }
  if ((DAT_009c296c != (code *)0x0) && ((int)((puVar3[4] & 0xfffc0000) << 0xb) < 0)) {
    (*DAT_009c296c)(puVar3,param_2);
  }
  FUN_0082c2b0(puVar3);
  return;
}

