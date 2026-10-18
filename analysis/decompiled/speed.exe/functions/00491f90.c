/* speed.exe 00491f90 FUN_00491f90; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00491360 FUN_00491360
 */

void __thiscall FUN_00491f90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0x40;
    uVar1 = (*(code *)PTR_FUN_008ee4d0)(0x100,"DynamicLoader::AddPatchAddress");
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  else if (iVar4 <= *(int *)(param_1 + 0x20)) {
    puVar2 = (undefined4 *)(*(code *)PTR_FUN_008ee4d0)(iVar4 << 3,"DynamicLoader::AddPatchAddress");
    puVar5 = *(undefined4 **)(param_1 + 0x28);
    puVar6 = puVar2;
    for (uVar3 = *(uint *)(param_1 + 0x24) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    (*(code *)PTR_FUN_008ee4d4)(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20) * 4) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

