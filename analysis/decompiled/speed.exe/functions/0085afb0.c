/* speed.exe 0085afb0 FUN_0085afb0; analysis pseudocode, not buildable source.
 */

void FUN_0085afb0(int param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_148;
  uint local_144;
  uint local_140 [80];
  
  iVar5 = 0;
  puVar1 = (undefined1 *)(in_EAX + 2);
  do {
    local_140[iVar5] = CONCAT31(CONCAT21(CONCAT11(puVar1[-2],puVar1[-1]),*puVar1),puVar1[1]);
    iVar5 = iVar5 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar5 != 0x10);
  puVar6 = local_140 + 2;
  iVar5 = 0x40;
  do {
    uVar2 = puVar6[0xb] ^ puVar6[6] ^ puVar6[-2] ^ *puVar6;
    puVar6[0xe] = uVar2 >> 0x1f | uVar2 * 2;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_148 = 0;
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar8 = *(uint *)(param_1 + 0x14);
  local_144 = *(uint *)(param_1 + 0x18);
  do {
    uVar10 = uVar8;
    uVar8 = uVar7;
    uVar4 = uVar2;
    puVar6 = local_140 + local_148;
    uVar7 = uVar3 << 0x1e | uVar3 >> 2;
    local_148 = local_148 + 1;
    uVar2 = (~uVar3 & uVar10 | uVar8 & uVar3) + (uVar4 >> 0x1b | uVar4 << 5) + *puVar6 + 0x5a827999
            + local_144;
    uVar3 = uVar4;
    local_144 = uVar10;
  } while (local_148 != 0x14);
  iVar5 = 0x14;
  do {
    uVar10 = uVar8;
    uVar8 = uVar7;
    uVar3 = uVar2;
    puVar6 = local_140 + iVar5;
    uVar7 = uVar4 << 0x1e | uVar4 >> 2;
    iVar5 = iVar5 + 1;
    uVar2 = (uVar3 >> 0x1b | uVar3 << 5) + (uVar10 ^ uVar8 ^ uVar4) + *puVar6 + 0x6ed9eba1 +
            local_144;
    uVar4 = uVar3;
    local_144 = uVar10;
  } while (iVar5 != 0x28);
  local_148 = 0x28;
  do {
    uVar10 = uVar8;
    uVar8 = uVar7;
    uVar4 = uVar2;
    uVar2 = ((uVar8 | uVar3) & uVar10 | uVar8 & uVar3) + (uVar4 >> 0x1b | uVar4 << 5) +
            local_140[local_148] + -0x70e44324 + local_144;
    uVar7 = uVar3 << 0x1e | uVar3 >> 2;
    local_148 = local_148 + 1;
    uVar3 = uVar4;
    local_144 = uVar10;
  } while (local_148 != 0x3c);
  local_148 = 0x3c;
  do {
    uVar9 = uVar8;
    uVar8 = uVar7;
    uVar3 = uVar2;
    uVar2 = (uVar3 >> 0x1b | uVar3 << 5) + (uVar9 ^ uVar8 ^ uVar4) + local_140[local_148] +
            -0x359d3e2a + uVar10;
    uVar7 = uVar4 << 0x1e | uVar4 >> 2;
    local_148 = local_148 + 1;
    uVar4 = uVar3;
    uVar10 = uVar9;
  } while (local_148 != 0x50);
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar7;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar8;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar3;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar9;
  return;
}

