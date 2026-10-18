/* speed.exe 005cec10 FUN_005cec10; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005cec10(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar1 = *(uint **)(param_1 + 0xc);
  iVar2 = 0;
  uVar5 = *(uint *)(param_1 + 4) >> 1 & 1;
  puVar6 = puVar1;
  if (uVar5 != 0) {
    puVar6 = (uint *)((int)puVar1 * 0x10 + param_1);
  }
  while( true ) {
    puVar3 = puVar1;
    if (uVar5 != 0) {
      puVar3 = (uint *)((int)puVar1 * 0x10 + param_1);
    }
    if (puVar6 == puVar3 + (*(uint *)(param_1 + 4) >> 5) * 4) break;
    uVar4 = *puVar6;
    if ((puVar6[1] & 1) != 0) {
      uVar4 = uVar4 & 0xffff2020 | 0x2020;
    }
    if (uVar4 == param_2) {
      iVar2 = iVar2 + 1;
    }
    puVar6 = puVar6 + 4;
  }
  return iVar2;
}

