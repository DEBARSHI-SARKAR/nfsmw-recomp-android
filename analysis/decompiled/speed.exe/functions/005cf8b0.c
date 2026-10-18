/* speed.exe 005cf8b0 FUN_005cf8b0; analysis pseudocode, not buildable source.
 * calls 005cf8b0 FUN_005cf8b0
 */

int __thiscall
FUN_005cf8b0(int param_1,undefined4 param_2,undefined1 *param_3,uint param_4,int param_5,
            undefined4 param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar10 = uVar11;
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    uVar10 = uVar11 * 0x10 + param_1;
  }
  uVar6 = (*(uint *)(param_1 + 4) >> 5) * 0x10 + uVar10;
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    uVar11 = uVar11 * 0x10 + param_1;
  }
  iVar4 = *(int *)(param_1 + 8);
  puVar2 = (uint *)((*(uint *)(param_1 + 4) >> 5) * 0x10 + uVar11);
  puVar8 = param_3;
  if (puVar2 < puVar2 + iVar4 * 4) {
    puVar3 = puVar2 + 1;
    do {
      uVar11 = *puVar3;
      if (((uVar11 >> 3 & 0x1f) == param_4) && (uVar11 >> 8 != 0)) {
        puVar7 = (undefined4 *)((uint)(puVar8 + (param_5 - 1U)) & ~(param_5 - 1U));
        if ((uVar11 & 2) == 0) {
          puVar9 = (undefined4 *)puVar3[2];
        }
        else {
          puVar9 = (undefined4 *)((int)puVar3 + (puVar3[2] - 4));
        }
        puVar12 = puVar7;
        for (uVar5 = uVar11 >> 10; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar11 = uVar11 >> 8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        uVar11 = *puVar3;
        puVar3[2] = (uint)((int)puVar7 + (4 - (int)puVar3));
        *puVar3 = uVar11 | 2;
        puVar8 = (undefined1 *)((int)puVar7 + (uVar11 >> 8));
      }
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 4;
    } while (puVar1 < puVar2 + iVar4 * 4);
  }
  for (; uVar10 < uVar6; uVar10 = uVar10 + 0x10) {
    iVar4 = FUN_005cf8b0(param_2,puVar8,param_4,param_5,param_6);
    puVar8 = puVar8 + iVar4;
  }
  return (int)puVar8 - (int)param_3;
}

