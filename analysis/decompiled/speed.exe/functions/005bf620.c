/* speed.exe 005bf620 FUN_005bf620; analysis pseudocode, not buildable source.
 * calls 005b9110 FUN_005b9110
 * calls 00652ad0 _malloc
 * calls 005b2d10 FUN_005b2d10
 * calls 005bf360 FUN_005bf360
 * calls 00652b10 thunk_FUN_007c7250
 */

undefined4 FUN_005bf620(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_8 [2];
  
  uVar1 = FUN_005bf360(param_1);
  FUN_005b9110("Upper Left",3);
  FUN_005b9110("Lower Right",3);
  local_8[0] = 0;
  local_8[1] = 0;
  iVar2 = FUN_005b2d10("Upper Left");
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar5 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar3;
    puVar6 = local_8;
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
  iVar2 = *(int *)(iVar2 + 4);
  local_8[0] = 0x3f800000;
  local_8[1] = 0x3f800000;
  thunk_FUN_007c7250(*(undefined4 *)(iVar2 + 0x20));
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (*(size_t *)(iVar2 + 0x18) != 0) {
    puVar3 = _malloc(*(size_t *)(iVar2 + 0x18));
    uVar5 = *(uint *)(iVar2 + 0x18);
    *(undefined4 **)(iVar2 + 0x20) = puVar3;
    puVar6 = local_8;
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
  return uVar1;
}

