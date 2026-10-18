/* speed.exe 0058fd10 FUN_0058fd10; analysis pseudocode, not buildable source.
 * calls 0057f920 FUN_0057f920
 * calls 0056e180 FUN_0056e180
 * calls 0057f7b0 FUN_0057f7b0
 * calls 0057ffb0 FUN_0057ffb0
 */

/* WARNING: Removing unreachable block (ram,0x0058fe0c) */

void __thiscall FUN_0058fd10(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar1 = (undefined4 *)((int)param_2 + param_3);
  puVar9 = param_2;
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  puVar9 = param_2 + 4;
  if (puVar9 <= puVar1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2 = puVar9;
  }
  puVar2 = (undefined4 *)FUN_0057f7b0(param_2,puVar1);
  if (puVar2 + 1 <= puVar1) {
    *puVar2 = *(undefined4 *)(DAT_0091cf90 + 8);
    puVar2 = puVar2 + 1;
  }
  puVar3 = puVar2;
  if (puVar2 + 8 <= puVar1) {
    puVar7 = param_1;
    puVar10 = puVar2;
    for (iVar6 = 8; puVar3 = puVar2 + 8, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  puVar2 = puVar3;
  if (puVar3 + 0x3c <= puVar1) {
    puVar7 = param_1 + 0xc9;
    puVar10 = puVar3;
    for (iVar6 = 0x3c; puVar2 = puVar3 + 0x3c, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  puVar3 = puVar2;
  if (puVar2 + 0x21 <= puVar1) {
    puVar7 = param_1 + 9;
    puVar10 = puVar2;
    for (iVar6 = 0x21; puVar3 = puVar2 + 0x21, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  puVar2 = param_1 + 0x105;
  puVar7 = puVar3;
  for (iVar6 = 0x2332; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar2 = puVar3 + 0x2332;
  if ((undefined4 *)((int)puVar3 + 0x8cc9) <= puVar1) {
    *(undefined1 *)(puVar3 + 0x2332) = *(undefined1 *)(param_1 + 0x2437);
    puVar2 = (undefined4 *)((int)puVar3 + 0x8cc9);
  }
  puVar3 = puVar2;
  if (puVar2 + 0x2f6 <= puVar1) {
    puVar7 = param_1 + 0x2438;
    puVar10 = puVar2;
    for (iVar6 = 0x2f6; puVar3 = puVar2 + 0x2f6, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  iVar8 = 0;
  puVar2 = puVar3 + 1;
  iVar6 = DAT_0091cf90;
  do {
    if (puVar2 <= puVar1) {
      *puVar3 = *(undefined4 *)(iVar8 + iVar6 + 0x2c);
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      iVar6 = DAT_0091cf90;
    }
    iVar8 = iVar8 + 0x18;
  } while (iVar8 < 0x108);
  uVar4 = FUN_0057ffb0(puVar3);
  uVar4 = FUN_0056e180(uVar4,puVar1);
  FUN_0057f920(puVar9,uVar4,param_3 - 0x20,puVar1);
  return;
}

