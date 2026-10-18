/* speed.exe 004cbb90 FUN_004cbb90; analysis pseudocode, not buildable source.
 * calls 004c1b80 FUN_004c1b80
 */

void FUN_004cbb90(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x004cbba4:
    puVar4 = puVar4 + 2;
    if (puVar4 != param_2) {
      uVar2 = *puVar4;
      puVar5 = param_1;
      if (*param_1 <= uVar2) goto LAB_004cbbc1;
      goto joined_r0x004cbbde;
    }
  }
  return;
LAB_004cbbc1:
  puVar3 = puVar4;
  if (uVar2 < puVar4[-2]) {
    do {
      puVar5 = puVar3 + -2;
      puVar1 = puVar3 + -4;
      puVar3 = puVar5;
    } while (uVar2 < *puVar1);
joined_r0x004cbbde:
    if ((puVar5 != puVar4) && (puVar4 != puVar4 + 2)) {
      FUN_004c1b80(puVar5,puVar4,puVar4 + 2,0,0);
    }
  }
  goto joined_r0x004cbba4;
}

