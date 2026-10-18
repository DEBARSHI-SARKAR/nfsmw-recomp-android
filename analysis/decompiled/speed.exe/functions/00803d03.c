/* speed.exe 00803d03 FUN_00803d03; analysis pseudocode, not buildable source.
 * calls 00801d16 FUN_00801d16
 * calls 00803b27 FUN_00803b27
 */

void FUN_00803d03(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00801d16(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  puVar4 = puVar1;
  for (uVar2 = *(uint *)(param_1 + 0x8c) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_00803b27(param_1,*(int *)(param_1 + 0x98) << 1,0,*(undefined4 *)(param_1 + 0x90),
               *(uint *)(param_1 + 0x94) >> 1,*(int *)(param_1 + 0x78) + param_2,
               *(int *)(param_1 + 0x78) + param_3,DAT_009c67f0);
  *(int *)(param_1 + 0x28) =
       *(int *)(param_1 + 0x28) + (*(int *)(param_1 + 0x90) * *(uint *)(param_1 + 0x94) >> 1) * 4;
  iVar3 = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x98);
  FUN_00803b27(param_1,*(int *)(param_1 + 0x98) * 2,0,*(undefined4 *)(param_1 + 0x90),
               *(uint *)(param_1 + 0x94) >> 1,iVar3 + param_2,iVar3 + param_3,DAT_009c67f0);
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  FUN_00803b27(param_1,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x84),
               *(uint *)(param_1 + 0x90) >> 1,*(uint *)(param_1 + 0x94) >> 1,
               *(int *)(param_1 + 0x7c) + param_2,*(int *)(param_1 + 0x7c) + param_3,DAT_009c67e8);
  FUN_00803b27(param_1,*(undefined4 *)(param_1 + 0x9c),
               *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x84),*(uint *)(param_1 + 0x90) >> 1,
               *(uint *)(param_1 + 0x94) >> 1,*(int *)(param_1 + 0x80) + param_2,
               *(int *)(param_1 + 0x80) + param_3,DAT_009c67e8);
  return;
}

