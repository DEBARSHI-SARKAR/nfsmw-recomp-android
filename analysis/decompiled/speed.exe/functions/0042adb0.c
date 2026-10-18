/* speed.exe 0042adb0 FUN_0042adb0; analysis pseudocode, not buildable source.
 * calls 00423860 FUN_00423860
 * calls 0042ac90 FUN_0042ac90
 * calls 00408810 FUN_00408810
 * calls 00768200 FUN_00768200
 * calls 00423510 FUN_00423510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042adb0(int param_1,float param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 auStack_3c [15];
  
  FUN_0042ac90(param_2);
  if (DAT_0092d884 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*DAT_0092d87c;
  }
  uVar2 = (**(code **)(*piVar3 + 4))();
  (**(code **)(*(int *)(param_1 + 0x4c) + 100))(uVar2);
  FUN_00423860(uVar2);
  *(float *)(param_1 + 0xb0) = param_2 + *(float *)(param_1 + 0xb0);
  if (*(char *)(*(int *)(param_1 + 0xa0) + 0x2c) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    cVar1 = FUN_00408810(uVar2,*(int *)(param_1 + 0xa0) + 0x10);
    *(char *)(param_1 + 0xa6) = '\x01' - (cVar1 != '\0');
  }
  FUN_00423510(param_2);
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 8))(param_2);
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  iVar4 = (**(code **)(*piVar3 + 0x20))();
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x4c))();
  puVar7 = auStack_3c;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  fVar8 = (float10)FUN_00768200(iVar4);
  if (fVar8 != (float10)_DAT_00890968) {
    (**(code **)(*(int *)(param_1 + 0x7a4) + 0x38))
              ((float)((float10)_DAT_0089096c -
                      ((float10)*(float *)(iVar4 + 4) - (fVar8 + (float10)_DAT_00890da4)) *
                      (float10)_DAT_008916cc));
    return;
  }
  return;
}

