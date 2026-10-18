/* speed.exe 005b86e0 FUN_005b86e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b86e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x88) = 0;
  iVar3 = *(int *)(param_2 + 100);
  *(undefined4 *)(param_2 + 0x8c) = 0;
  uVar6 = uVar2;
  for (; uVar7 = uVar2, iVar3 != 0; iVar3 = iVar3 + -1) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      iVar8 = (*(int *)(param_2 + 0x8c) * uVar6 + *(int *)(param_2 + 0x88)) * 0x30 +
              *(int *)(param_2 + 0x90);
      iVar4 = *(int *)(iVar8 + 0x14);
      if (iVar4 == -1) {
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)(iVar8 + 0x10) = 0;
        *(undefined4 *)(iVar8 + 0x14) = 0xffffffff;
      }
      else {
        iVar1 = **(int **)(param_1 + 8) + iVar4 * 0x18;
        uVar5 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar8 + 0x10) = uVar5;
        *(int *)(iVar8 + 0x14) = iVar4;
      }
      uVar6 = *(uint *)(param_2 + 0x60);
      uVar9 = *(int *)(param_2 + 0x88) + 1;
      *(uint *)(param_2 + 0x88) = uVar9;
      if (uVar6 <= uVar9) {
        uVar9 = *(int *)(param_2 + 0x8c) + 1;
        *(undefined4 *)(param_2 + 0x88) = 0;
        *(uint *)(param_2 + 0x8c) = uVar9;
        if (*(uint *)(param_2 + 100) <= uVar9) {
          *(undefined4 *)(param_2 + 0x8c) = 0;
        }
      }
    }
  }
  return;
}

