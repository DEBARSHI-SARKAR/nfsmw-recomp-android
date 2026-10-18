/* speed.exe 007eebc5 FUN_007eebc5; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007eebc5(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if ((*(int *)(param_1 + 0x20) != *(int *)(iVar4 + 0x18)) ||
     (*(int *)(param_1 + 0x24) != *(int *)(iVar4 + 0x1c))) {
    uVar7 = (**(code **)(**(int **)(param_2 + 0x80) + 0x1c))
                      (*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),*(int *)(param_1 + 0x20),
                       *(int *)(param_1 + 0x24),0,0,0);
    *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x18) = uVar7;
  }
  uVar6 = (**(code **)(**(int **)(param_2 + 0x80) + 0x18))
                    (*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),*(undefined4 *)(param_1 + 0x30),
                     *(undefined4 *)(param_1 + 0x28),0,0);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  uVar5 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  puVar1 = (uint *)(iVar4 + 0x18);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  piVar2 = (int *)(iVar4 + 0x1c);
  *piVar2 = *piVar2 + *(int *)(param_1 + 0x2c) + (uint)CARRY4(uVar3,uVar5);
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}

