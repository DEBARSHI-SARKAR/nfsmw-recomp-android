/* speed.exe 007ffaa6 FUN_007ffaa6; analysis pseudocode, not buildable source.
 */

void FUN_007ffaa6(uint param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *local_8;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x44);
  param_1 = 0;
  puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x78) + param_2);
  uVar7 = (uint)(param_3[1] - *piVar1) >> 1;
  uVar9 = (uint)(*param_3 - *(int *)(iVar2 + 0x40)) >> 1;
  puVar6 = (undefined4 *)(*param_3 * uVar7 + param_3[6] + uVar9);
  if (*(int *)(iVar2 + 0x44) != 0) {
    do {
      uVar5 = *(uint *)(iVar2 + 0x40);
      puVar8 = puVar3;
      puVar10 = puVar6;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar6 = (undefined4 *)((int)puVar6 + *param_3);
      puVar3 = (undefined4 *)((int)puVar3 + *(int *)(iVar2 + 0x98));
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(iVar2 + 0x44));
  }
  local_8 = (undefined4 *)(*(int *)(iVar2 + 0x7c) + param_2);
  param_1 = 0;
  uVar7 = uVar7 / 2;
  uVar9 = uVar9 / 2;
  puVar3 = (undefined4 *)(param_3[3] * uVar7 + param_3[7] + uVar9);
  if ((*(uint *)(iVar2 + 0x44) & 0xfffffffe) != 0) {
    do {
      uVar5 = *(uint *)(iVar2 + 0x40);
      puVar6 = local_8;
      puVar8 = puVar3;
      for (uVar4 = uVar5 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar5 >> 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_3[3]);
      local_8 = (undefined4 *)((int)local_8 + *(int *)(iVar2 + 0x9c));
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(iVar2 + 0x44) >> 1);
  }
  puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x80) + param_2);
  puVar3 = (undefined4 *)(param_3[3] * uVar7 + param_3[8] + uVar9);
  param_1 = 0;
  if ((*(uint *)(iVar2 + 0x44) & 0xfffffffe) != 0) {
    do {
      uVar7 = *(uint *)(iVar2 + 0x40);
      puVar8 = puVar6;
      puVar10 = puVar3;
      for (uVar9 = uVar7 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar7 >> 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_3[3]);
      puVar6 = (undefined4 *)((int)puVar6 + *(int *)(iVar2 + 0x9c));
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(iVar2 + 0x44) >> 1);
  }
  return;
}

