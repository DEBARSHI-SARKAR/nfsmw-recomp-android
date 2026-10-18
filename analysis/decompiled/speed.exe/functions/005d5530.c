/* speed.exe 005d5530 FUN_005d5530; analysis pseudocode, not buildable source.
 * calls 005d1ab0 FUN_005d1ab0
 */

void FUN_005d5530(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x005d5544:
    puVar4 = puVar4 + 2;
    if (puVar4 != param_2) {
      uVar2 = *puVar4;
      puVar5 = param_1;
      if (*param_1 <= uVar2) goto LAB_005d5561;
      goto joined_r0x005d557e;
    }
  }
  return;
LAB_005d5561:
  puVar3 = puVar4;
  if (uVar2 < puVar4[-2]) {
    do {
      puVar5 = puVar3 + -2;
      puVar1 = puVar3 + -4;
      puVar3 = puVar5;
    } while (uVar2 < *puVar1);
joined_r0x005d557e:
    if ((puVar5 != puVar4) && (puVar4 != puVar4 + 2)) {
      FUN_005d1ab0(puVar5,puVar4,puVar4 + 2,0,0);
    }
  }
  goto joined_r0x005d5544;
}

