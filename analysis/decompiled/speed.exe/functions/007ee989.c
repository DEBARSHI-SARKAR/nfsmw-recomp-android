/* speed.exe 007ee989 FUN_007ee989; analysis pseudocode, not buildable source.
 * calls 007ed884 FUN_007ed884
 */

void __thiscall FUN_007ee989(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  uVar6 = (**(code **)(**(int **)(param_2 + 0x80) + 0x1c))
                    (*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x24),0,*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x80)
                     ,*(undefined4 *)(iVar2 + 8));
  *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x18) = uVar6;
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar3 = (**(code **)(**(int **)(param_2 + 0x80) + 0x34))();
  if ((uVar3 != 0) && (uVar3 < uVar5)) {
    uVar5 = uVar3;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  uVar4 = (**(code **)(**(int **)(param_2 + 0x80) + 0x14))
                    (*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),*(undefined4 *)(param_1 + 0x30),
                     uVar5,*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x80),*(undefined4 *)(iVar2 + 8))
  ;
  puVar1 = (uint *)(param_1 + 0x28);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - uVar4;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (uint)(uVar3 < uVar4);
  puVar1 = (uint *)(param_1 + 0x20);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar3,uVar4);
  puVar1 = (uint *)(param_1 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar3,uVar4);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uVar4;
  if ((*(int *)(param_1 + 0x2c) < 0) ||
     (((*(int *)(param_1 + 0x2c) < 1 && (*(int *)(param_1 + 0x28) == 0)) || (uVar4 != uVar5)))) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  else {
    FUN_007ed884();
  }
  return;
}

