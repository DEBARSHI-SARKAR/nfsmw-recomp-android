/* speed.exe 005cef70 FUN_005cef70; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005cef70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  uVar5 = *(uint *)(param_1 + 4) >> 1 & 1;
  iVar7 = iVar1;
  if (uVar5 != 0) {
    iVar7 = iVar1 * 0x10 + param_1;
  }
  uVar3 = *(uint *)(param_1 + 4) >> 5;
  puVar6 = (uint *)(uVar3 * 0x10 + iVar7);
  while( true ) {
    iVar7 = iVar1;
    if (uVar5 != 0) {
      iVar7 = iVar1 * 0x10 + param_1;
    }
    if (puVar6 == (uint *)(iVar7 + (*(int *)(param_1 + 8) + uVar3) * 0x10)) break;
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

