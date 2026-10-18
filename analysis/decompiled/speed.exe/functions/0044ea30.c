/* speed.exe 0044ea30 FUN_0044ea30; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0044ea30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)(param_1 + 0x14);
  for (puVar2 = *(undefined4 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = (undefined4 *)puVar2[1]
      ) {
    piVar3 = (int *)puVar2[2];
    (**(code **)(*piVar3 + 8))();
    (**(code **)*piVar3)(1);
  }
  puVar2 = (undefined4 *)*puVar1;
  while (puVar2 != puVar1) {
    piVar3 = *(int **)(param_1 + 0x18);
    iVar4 = *piVar3;
    piVar5 = (int *)piVar3[1];
    *piVar5 = iVar4;
    *(int **)(iVar4 + 4) = piVar5;
    FUN_00466440(piVar3);
    puVar2 = (undefined4 *)*puVar1;
  }
  return;
}

