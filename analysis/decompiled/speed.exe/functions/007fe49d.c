/* speed.exe 007fe49d FUN_007fe49d; analysis pseudocode, not buildable source.
 */

void FUN_007fe49d(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_20;
  uint local_1c;
  undefined4 *local_10;
  undefined1 *local_8;
  
  iVar4 = (int)param_1;
  uVar9 = *(uint *)((int)param_1 + 0xb4);
  uVar3 = *(uint *)((int)param_1 + 0x98);
  piVar1 = (int *)((int)param_1 + 0x94);
  puVar5 = (undefined1 *)(*(int *)((int)param_1 + 0x78) + (int)param_2);
  local_8 = puVar5 + *(int *)((int)param_1 + 0x90) * 8 + -1;
  param_1 = (undefined4 *)(puVar5 + -uVar9);
  local_1c = *piVar1 << 3;
  local_10 = (undefined4 *)(local_8 + 1);
  if (0 < (int)local_1c) {
    do {
      uVar2 = *puVar5;
      puVar6 = param_1;
      for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar6 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar6 = puVar6 + 1;
      }
      for (uVar7 = uVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar6 = uVar2;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      uVar2 = *local_8;
      puVar6 = local_10;
      for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar6 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar6 = puVar6 + 1;
      }
      for (uVar7 = uVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar6 = uVar2;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      local_8 = local_8 + uVar3;
      param_1 = (undefined4 *)((int)param_1 + uVar3);
      local_10 = (undefined4 *)((int)local_10 + uVar3);
      puVar5 = puVar5 + uVar3;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puVar10 = (undefined4 *)(uVar3 * uVar9 + (int)param_2);
  puVar6 = (undefined4 *)((*(int *)(iVar4 + 0x94) * 8 + -1) * uVar3 + (int)puVar10);
  param_1 = param_2;
  if (0 < (int)uVar9) {
    local_1c = uVar9;
    do {
      puVar11 = puVar10;
      puVar12 = param_1;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      puVar11 = puVar6;
      puVar12 = (undefined4 *)((int)param_1 + (int)((int)puVar6 + (uVar3 - (int)param_2)));
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + uVar3);
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  uVar3 = *(uint *)(iVar4 + 0x9c);
  local_20 = *(int *)(iVar4 + 0x94) << 2;
  puVar5 = (undefined1 *)(*(int *)(iVar4 + 0x7c) + (int)param_2);
  local_8 = puVar5 + *(int *)(iVar4 + 0x90) * 4 + -1;
  uVar7 = uVar9 >> 1;
  puVar6 = (undefined4 *)(puVar5 + -uVar7);
  local_10 = (undefined4 *)(local_8 + 1);
  local_1c = local_20;
  if (0 < local_20) {
    do {
      uVar2 = *puVar5;
      puVar10 = puVar6;
      for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = uVar2;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      uVar2 = *local_8;
      puVar10 = local_10;
      for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = uVar2;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_8 = local_8 + uVar3;
      local_10 = (undefined4 *)((int)local_10 + uVar3);
      puVar5 = puVar5 + uVar3;
      puVar6 = (undefined4 *)((int)puVar6 + uVar3);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puVar10 = (undefined4 *)((*(int *)(iVar4 + 0x7c) - uVar7) + (int)param_2);
  puVar6 = (undefined4 *)((*(int *)(iVar4 + 0x94) * 4 + -1) * uVar3 + (int)puVar10);
  puVar11 = (undefined4 *)((int)puVar10 - uVar7 * uVar3);
  if (uVar7 != 0) {
    param_1 = puVar11;
    local_1c = uVar7;
    do {
      puVar12 = puVar10;
      puVar13 = param_1;
      for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      puVar12 = puVar6;
      puVar13 = (undefined4 *)((undefined1 *)((int)puVar6 + (uVar3 - (int)puVar11)) + (int)param_1);
      for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      local_1c = local_1c - 1;
      for (uVar8 = uVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + uVar3);
    } while (local_1c != 0);
  }
  puVar5 = (undefined1 *)(*(int *)(iVar4 + 0x80) + (int)param_2);
  local_8 = puVar5 + *(int *)(iVar4 + 0x90) * 4 + -1;
  puVar6 = (undefined4 *)(puVar5 + -uVar7);
  local_10 = (undefined4 *)(local_8 + 1);
  if (0 < local_20) {
    do {
      uVar2 = *puVar5;
      puVar10 = puVar6;
      for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = uVar2;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      uVar2 = *local_8;
      puVar10 = local_10;
      for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = uVar2;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_8 = local_8 + uVar3;
      local_10 = (undefined4 *)((int)local_10 + uVar3);
      puVar5 = puVar5 + uVar3;
      puVar6 = (undefined4 *)((int)puVar6 + uVar3);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  puVar11 = (undefined4 *)((int)param_2 + (*(int *)(iVar4 + 0x80) - uVar7));
  puVar10 = (undefined4 *)((*(int *)(iVar4 + 0x94) * 4 + -1) * uVar3 + (int)puVar11);
  puVar6 = (undefined4 *)((int)puVar11 - uVar7 * uVar3);
  if (uVar7 != 0) {
    param_1 = puVar6;
    param_2 = (undefined4 *)uVar7;
    do {
      puVar12 = puVar11;
      puVar13 = param_1;
      for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      puVar12 = puVar10;
      puVar13 = (undefined4 *)((undefined1 *)((int)puVar10 + (uVar3 - (int)puVar6)) + (int)param_1);
      for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      param_2 = (undefined4 *)((int)param_2 - 1);
      for (uVar9 = uVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + uVar3);
    } while (param_2 != (undefined4 *)0x0);
  }
  return;
}

