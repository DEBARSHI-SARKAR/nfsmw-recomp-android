/* speed.exe 006e2560 FUN_006e2560; analysis pseudocode, not buildable source.
 * calls 006ced90 FUN_006ced90
 */

void FUN_006e2560(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 2, puVar6 != param_2)) {
    puVar5 = param_1 + 4;
    do {
      uVar1 = puVar6[1];
      uVar2 = *puVar6;
      if ((param_1[1] < uVar1) || ((puVar3 = param_1, param_1[1] <= uVar1 && (*param_1 <= uVar2))))
      {
        puVar4 = puVar5 + -4;
        if ((uVar1 <= puVar5[-3]) && ((uVar1 < puVar5[-3] || (uVar2 < *puVar4)))) {
          do {
            do {
              puVar3 = puVar4;
              puVar4 = puVar3 + -2;
            } while (uVar1 < puVar3[-1]);
          } while ((uVar1 == puVar3[-1]) && (uVar2 < *puVar4));
          goto joined_r0x006e25c4;
        }
      }
      else {
joined_r0x006e25c4:
        if ((puVar3 != puVar6) && (puVar6 != puVar5)) {
          FUN_006ced90(puVar3,puVar6,puVar5,0,0);
        }
      }
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar6 != param_2);
  }
  return;
}

