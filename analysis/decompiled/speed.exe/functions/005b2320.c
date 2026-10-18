/* speed.exe 005b2320 FUN_005b2320; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_005b2320(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar4 = (int *)(iVar2 + 8);
  if (*piVar4 != 0x53707954) {
    while (piVar4 != (int *)(*(int *)(iVar2 + 4) + 8 + iVar2)) {
      piVar4 = (int *)((int)piVar4 + piVar4[1] + 8);
      if (*piVar4 == 0x53707954) {
        uVar3 = piVar4[1];
        *(int **)(param_1 + 0x34) = piVar4 + 2;
        *(uint *)(param_1 + 0x30) = uVar3 >> 3;
        return CONCAT31((int3)((uint)(piVar4 + 2) >> 8),1);
      }
    }
    if (*piVar4 != 0x53707954) goto LAB_005b2373;
  }
  puVar1 = (uint *)(piVar4 + 1);
  piVar4 = piVar4 + 2;
  *(uint *)(param_1 + 0x30) = *puVar1 >> 3;
  *(int **)(param_1 + 0x34) = piVar4;
LAB_005b2373:
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

