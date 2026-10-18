/* speed.exe 005d2500 FUN_005d2500; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 005cf2e0 FUN_005cf2e0
 * calls 005d2240 FUN_005d2240
 */

uint * FUN_005d2500(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = _malloc(0x10);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    if ((param_1[1] & 1) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *param_1 & 0xffff;
    }
    uVar2 = *param_1;
    if ((param_1[1] & 1) != 0) {
      uVar2 = uVar2 & 0xffff2020 | 0x2020;
    }
    if (uVar5 != 0xffffffff) {
      uVar2 = uVar2 & 0xffff0000 | uVar5;
    }
    *puVar1 = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = uVar5 != 0xffffffff | 0x1c;
  }
  puVar3 = (uint *)param_1[3];
  if ((param_1[1] & 2) != 0) {
    puVar3 = param_1 + (int)puVar3 * 4;
  }
  while( true ) {
    puVar4 = (uint *)param_1[3];
    if ((param_1[1] & 2) != 0) {
      puVar4 = param_1 + (int)puVar4 * 4;
    }
    if (puVar3 == puVar4 + (param_1[1] >> 5) * 4) break;
    FUN_005d2240(puVar3);
    puVar3 = puVar3 + 4;
  }
  puVar3 = (uint *)param_1[3];
  if ((param_1[1] & 2) != 0) {
    puVar3 = param_1 + (int)puVar3 * 4;
  }
  puVar3 = puVar3 + (param_1[1] >> 5) * 4;
  while( true ) {
    puVar4 = (uint *)param_1[3];
    if ((param_1[1] & 2) != 0) {
      puVar4 = param_1 + (int)puVar4 * 4;
    }
    if (puVar3 == puVar4 + ((param_1[1] >> 5) + param_1[2]) * 4) break;
    FUN_005cf2e0(puVar3);
    puVar3 = puVar3 + 4;
  }
  return puVar1;
}

