/* speed.exe 006c7f50 FUN_006c7f50; analysis pseudocode, not buildable source.
 */

void FUN_006c7f50(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_414;
  undefined1 local_410 [64];
  undefined4 local_3d0 [243];
  
  pbVar1 = (byte *)(param_2 + 0x1f);
  puVar3 = local_3d0;
  local_414 = 4;
  do {
    puVar4 = (undefined4 *)((uint)pbVar1[-1] * 0x40 + param_1);
    puVar5 = puVar3 + -0x10;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)*pbVar1 * 0x40 + param_1);
    puVar5 = puVar3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[1] * 0x40 + param_1);
    puVar5 = puVar3 + 0x10;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[2] * 0x40 + param_1);
    puVar5 = puVar3 + 0x20;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    pbVar1 = pbVar1 + 4;
    puVar3 = puVar3 + 0x40;
    local_414 = local_414 + -1;
  } while (local_414 != 0);
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xa0))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x164),
             local_410,0x10);
  return;
}

