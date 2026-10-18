/* speed.exe 005ed4c0 FUN_005ed4c0; analysis pseudocode, not buildable source.
 * calls 005e24e0 FUN_005e24e0
 */

void FUN_005ed4c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      uVar1 = *puVar4;
      puVar2 = param_1;
      if (uVar1 < *param_1) {
joined_r0x005ed50c:
        if ((puVar2 != puVar4) && (puVar4 != puVar5)) {
          FUN_005e24e0(puVar2,puVar4,puVar5,0,0);
        }
      }
      else {
        puVar3 = puVar5 + -2;
        if (uVar1 < puVar5[-2]) {
          do {
            puVar2 = puVar3;
            puVar3 = puVar2 + -1;
          } while (uVar1 < *puVar3);
          goto joined_r0x005ed50c;
        }
      }
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar4 != param_2);
  }
  return;
}

