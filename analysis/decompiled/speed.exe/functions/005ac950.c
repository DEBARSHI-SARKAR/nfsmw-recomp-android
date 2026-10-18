/* speed.exe 005ac950 FUN_005ac950; analysis pseudocode, not buildable source.
 * calls 005ac6f0 FUN_005ac6f0
 * calls 005f81d0 FUN_005f81d0
 * calls 005ac7d0 FUN_005ac7d0
 * calls 0058fc00 FUN_0058fc00
 * calls 0056d940 FUN_0056d940
 */

int __thiscall FUN_005ac950(undefined4 *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  if (DAT_0091e00c != 0) {
    FUN_005f81d0(iVar2 + param_2,0x4000);
  }
  iVar3 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar5 = (undefined4 *)(iVar2 + param_2 + 0x4000 + iVar3);
  puVar7 = puVar5 + 1;
  if (puVar7 <= param_3) {
    *param_1 = *puVar5;
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar4 = (undefined1 *)(iVar2 + (int)puVar7);
  puVar7 = (uint *)(puVar4 + 1);
  if (puVar7 <= param_3) {
    *(undefined1 *)(param_1 + 2) = *puVar4;
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar5 = (undefined4 *)(iVar2 + (int)puVar7);
  puVar7 = puVar5 + 1;
  if (puVar7 <= param_3) {
    param_1[3] = *puVar5;
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar6 = (undefined2 *)(iVar2 + (int)puVar7);
  puVar7 = (uint *)(puVar6 + 1);
  if (puVar7 <= param_3) {
    *(undefined2 *)(param_1 + 4) = *puVar6;
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar7 = (uint *)(iVar2 + (int)puVar7);
  puVar1 = puVar7 + 1;
  if (puVar1 <= param_3) {
    param_2 = *puVar7;
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar5 = (undefined4 *)(iVar2 + (int)puVar1);
  puVar7 = puVar5 + 0x96;
  param_1[1] = (param_1[1] | param_2) & 0xfffff7ff;
  if (puVar7 <= param_3) {
    puVar9 = (undefined4 *)((int)param_1 + 0x12);
    for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar6 = (undefined2 *)(iVar2 + (int)puVar7);
  puVar7 = (uint *)(puVar6 + 1);
  if (puVar7 <= param_3) {
    *(undefined2 *)((int)param_1 + 0x26a) = *puVar6;
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  puVar5 = (undefined4 *)(iVar2 + (int)puVar7);
  if (puVar5 + 4 <= param_3) {
    param_1[0x9b] = *puVar5;
    param_1[0x9c] = puVar5[1];
    param_1[0x9d] = puVar5[2];
    param_1[0x9e] = puVar5[3];
  }
  iVar2 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  iVar3 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  iVar2 = FUN_0058fc00(iVar2 + (int)(puVar5 + 4),param_3);
  iVar8 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  iVar2 = FUN_0056d940(iVar2 + iVar3,param_3);
  puVar5 = (undefined4 *)(iVar2 + iVar8);
  puVar9 = &DAT_0091d928;
  for (iVar3 = 0xbd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar3 = FUN_005ac7d0(0x6a02d7c6,0x6a02d7c6);
  FUN_005ac6f0(0x6a02d7c6,0xc80156ed);
  return iVar2 + iVar8 + iVar3 + 0x2f4;
}

