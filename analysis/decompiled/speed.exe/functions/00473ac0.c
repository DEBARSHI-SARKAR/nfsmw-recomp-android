/* speed.exe 00473ac0 FUN_00473ac0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 00471370 FUN_00471370
 * calls 00460bf0 FUN_00460bf0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00473ac0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 4))();
  if (iVar1 == 0) {
    if (iVar4 == 0) goto LAB_00473b08;
  }
  else if ((iVar4 != 0) && (*(int *)(iVar1 + 4) == *(int *)(iVar4 + 4))) goto LAB_00473b08;
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_00473b08:
  if ((*(int *)(param_1 + 0x40) == 0) &&
     (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x38) + 4))(), piVar2 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar2 + 0x70))();
    FUN_007869c0(uVar3);
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar4 = FUN_005d59f0(&LAB_004040e0);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar4 != 0) {
        (**(code **)(*(int *)(param_1 + 0x18) + 4))(*(undefined4 *)(param_1 + 0x40));
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
        puVar5 = *(undefined1 **)(*(int *)(iVar4 + 8) + 0x1c);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_00890978;
        }
        uVar3 = FUN_00460bf0(puVar5);
        FUN_00471370(uVar3);
        *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x94) = *(undefined4 *)(param_1 + 0x28);
      }
    }
  }
  return;
}

