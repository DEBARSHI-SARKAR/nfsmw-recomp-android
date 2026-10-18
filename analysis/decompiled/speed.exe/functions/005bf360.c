/* speed.exe 005bf360 FUN_005bf360; analysis pseudocode, not buildable source.
 * calls 005b9110 FUN_005b9110
 * calls 00652ad0 _malloc
 * calls 00652ac0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005b59c0 FUN_005b59c0
 */

undefined4 * FUN_005bf360(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_38 [14];
  
  puVar2 = _malloc(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR_FUN_008a2e14;
    puVar2[5] = &PTR_LAB_008a2c18;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[6] = 0;
  }
  FUN_005b59c0(param_1);
  FUN_005b9110("Color",6);
  FUN_005b9110("Pivot",4);
  FUN_005b9110("Position",4);
  FUN_005b9110("Rotation",5);
  FUN_005b9110(&DAT_008a2e54,4);
  iVar1 = puVar2[7];
  local_38[2] = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_38[0xc] = 0;
  local_38[0xb] = 0;
  local_38[10] = 0;
  local_38[0xd] = 0x3f800000;
  local_38[5] = 0x3f800000;
  local_38[4] = 0x3f800000;
  local_38[3] = 0x3f800000;
  local_38[9] = 0xff;
  local_38[8] = 0xff;
  local_38[7] = 0xff;
  local_38[6] = 0xff;
  thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar5 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar3;
    puVar6 = local_38 + 6;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  iVar1 = *(int *)(iVar1 + 4);
  thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar5 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar3;
    puVar6 = local_38;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  iVar1 = *(int *)(iVar1 + 4);
  thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar5 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar3;
    puVar6 = local_38;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  iVar1 = *(int *)(iVar1 + 4);
  thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar5 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar3;
    puVar6 = local_38 + 10;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  iVar1 = *(int *)(iVar1 + 4);
  thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar5 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar3;
    puVar6 = local_38 + 3;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return puVar2;
}

