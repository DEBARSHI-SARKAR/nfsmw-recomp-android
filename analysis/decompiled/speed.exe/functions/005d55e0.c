/* speed.exe 005d55e0 FUN_005d55e0; analysis pseudocode, not buildable source.
 * calls 005d1c00 FUN_005d1c00
 */

void FUN_005d55e0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x005d55f4:
    puVar4 = puVar4 + 2;
    if (puVar4 != param_2) {
      uVar2 = *puVar4;
      puVar5 = param_1;
      if (*param_1 <= uVar2) goto LAB_005d5611;
      goto joined_r0x005d562e;
    }
  }
  return;
LAB_005d5611:
  puVar3 = puVar4;
  if (uVar2 < puVar4[-2]) {
    do {
      puVar5 = puVar3 + -2;
      puVar1 = puVar3 + -4;
      puVar3 = puVar5;
    } while (uVar2 < *puVar1);
joined_r0x005d562e:
    if ((puVar5 != puVar4) && (puVar4 != puVar4 + 2)) {
      FUN_005d1c00(puVar5,puVar4,puVar4 + 2,0,0);
    }
  }
  goto joined_r0x005d55f4;
}

