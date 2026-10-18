/* speed.exe 007ff8cc FUN_007ff8cc; analysis pseudocode, not buildable source.
 * calls 007ff6f0 FUN_007ff6f0
 */

int FUN_007ff8cc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar1 = param_1;
  iVar8 = *(int *)(param_1 + 0x70);
  uVar4 = *(uint *)(param_1 + 0x58);
  uVar2 = (iVar8 * *(int *)(param_1 + 0x5c) + -1 + uVar4) / uVar4;
  uVar7 = *(uint *)(param_1 + 0x60);
  iVar9 = *(int *)(param_1 + 0x74);
  uVar3 = (iVar9 * *(int *)(param_1 + 100) + -1 + uVar7) / uVar7;
  if (*(int *)(param_1 + 0x5c) == 3) {
    uVar4 = (int)(((int)(uVar2 + 2) / 3) * uVar4 * 3) / 3;
  }
  else {
    uVar4 = (int)(((int)(uVar2 + 7) / 8) * uVar4 * 8) / *(int *)(param_1 + 0x5c);
  }
  if (*(int *)(param_1 + 100) == 3) {
    iVar5 = (int)(((int)(uVar3 + 2) / 3) * uVar7 * 3) / 3;
  }
  else {
    iVar5 = (int)(((int)(uVar3 + 7) / 8) * uVar7 * 8) / *(int *)(param_1 + 100);
  }
  iVar6 = FUN_007ff6f0(param_1,*(int *)(param_1 + 0x78) + param_2,
                       *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0xb4) * 2,uVar2,uVar3,
                       *(int *)(param_3 + 0x18) + param_4,*(undefined4 *)(param_3 + 8),iVar8,iVar9);
  param_1 = 0;
  iVar11 = iVar9;
  if (0 < iVar5) {
    do {
      puVar10 = (undefined4 *)
                (*(int *)(param_3 + 8) * param_1 + *(int *)(param_3 + 0x18) + iVar8 + param_4);
      for (uVar7 = uVar4 - iVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      param_1 = param_1 + 1;
      for (uVar7 = uVar4 - iVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = 0;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    } while (param_1 < iVar5);
  }
  while (param_1 = iVar11, param_1 < iVar5) {
    puVar10 = (undefined4 *)(*(int *)(param_3 + 8) * param_1 + *(int *)(param_3 + 0x18) + param_4);
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar4 & 3; iVar11 = param_1 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar11 = (int)(uVar2 + 1) >> 1;
    iVar5 = (int)(uVar3 + 1) >> 1;
    iVar8 = iVar8 + 1 >> 1;
    iVar9 = iVar9 + 1 >> 1;
    FUN_007ff6f0(iVar1,*(int *)(iVar1 + 0x7c) + param_2,
                 (*(uint *)(iVar1 + 0x40) >> 1) + *(int *)(iVar1 + 0xb4),iVar11,iVar5,
                 *(int *)(param_3 + 0x1c) + param_5,*(undefined4 *)(param_3 + 0x14),iVar8,iVar9);
    FUN_007ff6f0(iVar1,*(int *)(iVar1 + 0x80) + param_2,
                 (*(uint *)(iVar1 + 0x40) >> 1) + *(int *)(iVar1 + 0xb4),iVar11,iVar5,
                 *(int *)(param_3 + 0x20) + param_5,*(undefined4 *)(param_3 + 0x14),iVar8,iVar9);
  }
  return iVar6;
}

