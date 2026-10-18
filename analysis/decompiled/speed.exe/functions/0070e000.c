/* speed.exe 0070e000 FUN_0070e000; analysis pseudocode, not buildable source.
 * calls 00707200 FUN_00707200
 */

void FUN_0070e000(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x0070e014:
    puVar4 = puVar4 + 1;
    if (puVar4 != param_2) {
      uVar2 = *puVar4;
      puVar5 = param_1;
      if (*param_1 <= uVar2) goto LAB_0070e031;
      goto joined_r0x0070e04e;
    }
  }
  return;
LAB_0070e031:
  puVar3 = puVar4;
  if (uVar2 < puVar4[-1]) {
    do {
      puVar5 = puVar3 + -1;
      puVar1 = puVar3 + -2;
      puVar3 = puVar5;
    } while (uVar2 < *puVar1);
joined_r0x0070e04e:
    if ((puVar5 != puVar4) && (puVar4 != puVar4 + 1)) {
      FUN_00707200(puVar5,puVar4,puVar4 + 1,0,0);
    }
  }
  goto joined_r0x0070e014;
}

