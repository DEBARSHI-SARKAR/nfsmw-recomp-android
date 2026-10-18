/* speed.exe 0070e250 FUN_0070e250; analysis pseudocode, not buildable source.
 * calls 00707500 FUN_00707500
 */

void FUN_0070e250(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x0070e264:
    puVar4 = puVar4 + 1;
    if (puVar4 != param_2) {
      uVar2 = *puVar4;
      puVar5 = param_1;
      if (*param_1 <= uVar2) goto LAB_0070e281;
      goto joined_r0x0070e29e;
    }
  }
  return;
LAB_0070e281:
  puVar3 = puVar4;
  if (uVar2 < puVar4[-1]) {
    do {
      puVar5 = puVar3 + -1;
      puVar1 = puVar3 + -2;
      puVar3 = puVar5;
    } while (uVar2 < *puVar1);
joined_r0x0070e29e:
    if ((puVar5 != puVar4) && (puVar4 != puVar4 + 1)) {
      FUN_00707500(puVar5,puVar4,puVar4 + 1,0,0);
    }
  }
  goto joined_r0x0070e264;
}

