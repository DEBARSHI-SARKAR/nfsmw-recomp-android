/* speed.exe 004735e0 FUN_004735e0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 0040e440 FUN_0040e440
 * calls 00471370 FUN_00471370
 * calls 00460bf0 FUN_00460bf0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_004735e0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *unaff_ESI;
  float10 fVar7;
  
  if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
  if (iVar2 == 0) {
    if (iVar5 == 0) goto LAB_00473629;
  }
  else if ((iVar5 != 0) && (*(int *)(iVar2 + 4) == *(int *)(iVar5 + 4))) goto LAB_00473629;
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
LAB_00473629:
  if ((*(int *)(param_1 + 0x44) == 0) &&
     (piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x3c) + 4))(), piVar3 != (int *)0x0)) {
    uVar4 = (**(code **)(*piVar3 + 0x70))();
    FUN_007869c0(uVar4);
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar5 = FUN_005d59f0(&LAB_004040e0);
      *(int *)(param_1 + 0x44) = iVar5;
      if (iVar5 != 0) {
        (**(code **)(*(int *)(param_1 + 0x18) + 4))(*(undefined4 *)(param_1 + 0x44));
        iVar5 = (**(code **)(**(int **)(param_1 + 0x44) + 0x48))();
        puVar6 = *(undefined1 **)(*(int *)(iVar5 + 8) + 0x1c);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00890978;
        }
        uVar4 = FUN_00460bf0(puVar6);
        FUN_00471370(uVar4);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x94) = *(undefined4 *)(param_1 + 0x2c);
        cVar1 = FUN_0040e440(&stack0xfffffff8);
        if (cVar1 != '\0') {
          fVar7 = (float10)(**(code **)(*unaff_ESI + 0x1c))();
          *(float *)(*(int *)(param_1 + 0x28) + 0x14) = (float)fVar7;
        }
      }
    }
  }
  return;
}

