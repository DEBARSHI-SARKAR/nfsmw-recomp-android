/* speed.exe 005bf710 FUN_005bf710; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 005b9110 FUN_005b9110
 * calls 00652ad0 _malloc
 * calls 00460dd0 FUN_00460dd0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005bf620 FUN_005bf620
 */

int FUN_005bf710(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_48;
  undefined4 local_44 [7];
  undefined1 local_28 [36];
  
  iVar2 = FUN_005bf620(param_1);
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0x3f800000;
  local_44[3] = 0x3f800000;
  local_48 = 1;
  do {
    FUN_004647c0(local_28,"Tex %d: Top Left",local_48);
    FUN_005b9110(local_28,3);
    iVar1 = *(int *)(iVar2 + 0x1c);
    while ((iVar1 != 0 && (iVar3 = FUN_00460dd0(*(undefined4 *)(iVar1 + 0xc),local_28), iVar3 != 0))
          ) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (*(size_t *)(iVar1 + 0x18) != 0) {
      puVar4 = _malloc(*(size_t *)(iVar1 + 0x18));
      uVar6 = *(uint *)(iVar1 + 0x18);
      *(undefined4 **)(iVar1 + 0x20) = puVar4;
      puVar7 = local_44;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    local_48 = local_48 + 1;
  } while (local_48 < 4);
  local_48 = 1;
  do {
    FUN_004647c0(local_28,"Tex %d: Bottom Right",local_48);
    FUN_005b9110(local_28,3);
    iVar1 = *(int *)(iVar2 + 0x1c);
    while ((iVar1 != 0 && (iVar3 = FUN_00460dd0(*(undefined4 *)(iVar1 + 0xc),local_28), iVar3 != 0))
          ) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (*(size_t *)(iVar1 + 0x18) != 0) {
      puVar4 = _malloc(*(size_t *)(iVar1 + 0x18));
      uVar6 = *(uint *)(iVar1 + 0x18);
      *(undefined4 **)(iVar1 + 0x20) = puVar4;
      puVar7 = local_44 + 2;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    local_48 = local_48 + 1;
  } while (local_48 < 4);
  FUN_004647c0(local_28,"Pivot Rot (Z)");
  FUN_005b9110(local_28,4);
  iVar1 = *(int *)(iVar2 + 0x1c);
  while ((iVar1 != 0 && (iVar3 = FUN_00460dd0(*(undefined4 *)(iVar1 + 0xc),local_28), iVar3 != 0)))
  {
    iVar1 = *(int *)(iVar1 + 4);
  }
  thunk_FUN_007c7250(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar4 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar6 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar4;
    puVar7 = local_44 + 4;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return iVar2;
}

