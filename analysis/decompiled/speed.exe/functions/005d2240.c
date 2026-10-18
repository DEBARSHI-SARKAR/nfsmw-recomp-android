/* speed.exe 005d2240 FUN_005d2240; analysis pseudocode, not buildable source.
 * calls 005c7f30 FUN_005c7f30
 * calls 005cf2e0 FUN_005cf2e0
 * calls 005d2240 FUN_005d2240
 */

uint * __thiscall FUN_005d2240(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = param_2;
  uVar4 = *param_2;
  if ((param_2[1] & 1) == 0) {
    param_2 = (uint *)0xffffffff;
  }
  else {
    param_2 = (uint *)(uVar4 & 0xffff);
  }
  puVar1 = *(uint **)(param_1 + 0xc);
  iVar5 = -1;
  uVar3 = *(uint *)(param_1 + 4) >> 1 & 1;
  puVar7 = puVar1;
  if (uVar3 != 0) {
    puVar7 = (uint *)((int)puVar1 * 0x10 + param_1);
  }
  if (puVar7 <= puVar6) {
    puVar7 = puVar1;
    if (uVar3 != 0) {
      puVar7 = (uint *)((int)puVar1 * 0x10 + param_1);
    }
    if (puVar6 < puVar7 + (*(uint *)(param_1 + 4) >> 5) * 4) {
      if (uVar3 != 0) {
        puVar1 = (uint *)((int)puVar1 * 0x10 + param_1);
      }
      iVar5 = (int)puVar6 - (int)puVar1 >> 4;
    }
  }
  puVar1 = (uint *)FUN_005c7f30();
  if (puVar1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else {
    if (param_2 != (uint *)0xffffffff) {
      uVar4 = uVar4 & 0xffff0000 | (uint)param_2;
    }
    *puVar1 = uVar4;
    puVar1[1] = param_2 != (uint *)0xffffffff | 0x1c;
    puVar1[2] = 0;
    puVar1[3] = 0;
    param_2 = puVar1;
  }
  if (-1 < iVar5) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      iVar2 = iVar2 * 0x10 + param_1;
    }
    puVar6 = (uint *)(iVar5 * 0x10 + iVar2);
  }
  puVar1 = (uint *)puVar6[3];
  if ((puVar6[1] & 2) != 0) {
    puVar1 = puVar6 + (int)puVar1 * 4;
  }
  while( true ) {
    puVar7 = (uint *)puVar6[3];
    if ((puVar6[1] & 2) != 0) {
      puVar7 = puVar6 + (int)puVar7 * 4;
    }
    if (puVar1 == puVar7 + (puVar6[1] >> 5) * 4) break;
    FUN_005d2240(puVar1);
    puVar1 = puVar1 + 4;
  }
  puVar1 = (uint *)puVar6[3];
  if ((puVar6[1] & 2) != 0) {
    puVar1 = puVar6 + (int)puVar1 * 4;
  }
  puVar1 = puVar1 + (puVar6[1] >> 5) * 4;
  while( true ) {
    puVar7 = (uint *)puVar6[3];
    if ((puVar6[1] & 2) != 0) {
      puVar7 = puVar6 + (int)puVar7 * 4;
    }
    if (puVar1 == puVar7 + ((puVar6[1] >> 5) + puVar6[2]) * 4) break;
    FUN_005cf2e0(puVar1);
    puVar1 = puVar1 + 4;
  }
  return param_2;
}

