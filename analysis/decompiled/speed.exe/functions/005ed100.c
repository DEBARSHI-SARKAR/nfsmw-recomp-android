/* speed.exe 005ed100 FUN_005ed100; analysis pseudocode, not buildable source.
 * calls 005e2380 FUN_005e2380
 */

void FUN_005ed100(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 2, puVar4 != param_2)) {
    puVar5 = param_1 + 4;
    do {
      uVar1 = *puVar4;
      puVar2 = param_1;
      if (uVar1 < *param_1) {
joined_r0x005ed14c:
        if ((puVar2 != puVar4) && (puVar4 != puVar5)) {
          FUN_005e2380(puVar2,puVar4,puVar5,0,0);
        }
      }
      else {
        puVar3 = puVar5 + -4;
        if (uVar1 < puVar5[-4]) {
          do {
            puVar2 = puVar3;
            puVar3 = puVar2 + -2;
          } while (uVar1 < *puVar3);
          goto joined_r0x005ed14c;
        }
      }
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar4 != param_2);
  }
  return;
}

