/* speed.exe 0042b550 FUN_0042b550; analysis pseudocode, not buildable source.
 * calls 00423860 FUN_00423860
 * calls 00409e60 FUN_00409e60
 * calls 005d59f0 FUN_005d59f0
 * calls 0042b410 FUN_0042b410
 * calls 004190c0 FUN_004190c0
 * calls 005cc240 FUN_005cc240
 * calls 0041b7b0 FUN_0041b7b0
 */

void __thiscall FUN_0042b550(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  iVar3 = *(int *)(param_1 + 0x94);
  if (param_2 == 0) {
    if (iVar3 == 0) goto LAB_0042b575;
  }
  else if ((iVar3 != 0) && (*(int *)(param_2 + 4) == *(int *)(iVar3 + 4))) {
LAB_0042b575:
    *(undefined4 *)(param_1 + 0x94) = 0;
    FUN_004190c0();
    return;
  }
  piVar7 = (int *)(param_1 + 0x10);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(char *)(iVar3 + 0x2c) != '\0') {
    iVar3 = (**(code **)(*piVar7 + 8))();
    if (*(int *)(iVar3 + 0x1c) == 0) {
      if (param_2 == 0) goto LAB_0042b5c2;
    }
    else if ((param_2 != 0) && (*(int *)(*(int *)(iVar3 + 0x1c) + 4) == *(int *)(param_2 + 4))) {
LAB_0042b5c2:
      if (DAT_0092d884 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)*DAT_0092d87c;
      }
      uVar6 = (**(code **)(*piVar7 + 4))();
      puVar9 = *(undefined4 **)(param_1 + 0x28);
      if (puVar9 != puVar9 + *(int *)(param_1 + 0x30)) {
        do {
          piVar7 = (int *)(**(code **)(*(int *)*puVar9 + 0xac))();
          uVar10 = uVar6;
          (**(code **)(*piVar7 + 100))(uVar6);
          FUN_00423860(uVar10);
          puVar9 = puVar9 + 1;
        } while (puVar9 != (undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30) * 4));
      }
      FUN_00409e60();
      FUN_004190c0();
      return;
    }
  }
  piVar4 = (int *)FUN_005d59f0(&LAB_004040e0);
  if (piVar4 != (int *)0x0) {
    iVar3 = FUN_005cc240("copcross");
    uVar6 = (**(code **)(*piVar4 + 0x4c))();
    iVar5 = FUN_005cc240(uVar6);
    cVar1 = (**(code **)(*piVar4 + 0x7c))();
    if (cVar1 == '\0') {
      if (iVar5 == iVar3) {
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
    }
    else {
      (**(code **)(*piVar7 + 0x9c))(piVar4);
      if (iVar5 == iVar3) {
        *(undefined4 *)(param_1 + 0x174) = 2;
      }
    }
    iVar3 = FUN_005d59f0(&LAB_00404060);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar7 + 0x140))(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x74);
    }
    puVar8 = *(undefined4 **)(param_1 + 0x28);
    puVar9 = puVar8 + *(int *)(param_1 + 0x30);
    for (; (puVar8 != puVar9 && ((int *)*puVar8 != piVar4)); puVar8 = puVar8 + 1) {
    }
    if (puVar8 != (undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30) * 4)) {
      cVar1 = (**(code **)(*piVar7 + 0x4c))(piVar4);
      if (cVar1 != '\0') {
        piVar7 = (int *)(param_1 + 0x19c);
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          FUN_0042b410();
        }
      }
      FUN_0041b7b0(puVar8,puVar8 + 1);
      piVar7 = (int *)FUN_005d59f0(&LAB_004038e0);
      if (piVar7 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar7 + 0x8c))();
        if (((cVar2 != '\0') && (cVar1 == '\0')) && (*(char *)(param_1 + 0xb8) != '\0')) {
          *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
        }
        (**(code **)(*piVar7 + 0x20))();
      }
      uVar6 = (**(code **)(*piVar4 + 0x4c))();
      iVar5 = FUN_005cc240(uVar6);
      piVar7 = *(int **)(param_1 + 0x9c);
      iVar3 = *piVar7;
      while (iVar3 != iVar5) {
        piVar4 = piVar7 + 2;
        piVar7 = piVar7 + 2;
        iVar3 = *piVar4;
      }
      piVar7[1] = piVar7[1] + -1;
    }
  }
  FUN_004190c0();
  return;
}

