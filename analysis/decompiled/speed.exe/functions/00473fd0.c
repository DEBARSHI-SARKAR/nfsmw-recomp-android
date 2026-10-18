/* speed.exe 00473fd0 FUN_00473fd0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 0040e440 FUN_0040e440
 * calls 005d59f0 FUN_005d59f0
 * calls 0040e4e0 FUN_0040e4e0
 */

void __fastcall FUN_00473fd0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_ESI;
  float10 fVar6;
  
  if (*(int **)(param_1 + 0x2d8) == (int *)0x0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x2e0);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2d8) + 4))();
  if (iVar2 == 0) {
    if (iVar5 == 0) goto LAB_00474032;
  }
  else if ((iVar5 != 0) && (*(int *)(iVar2 + 4) == *(int *)(iVar5 + 4))) goto LAB_00474032;
  if (*(int *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x2e0));
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  FUN_007869c0(0);
LAB_00474032:
  if ((*(int *)(param_1 + 0x2e0) == 0) &&
     (piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x2d8) + 4))(), piVar3 != (int *)0x0)) {
    uVar4 = (**(code **)(*piVar3 + 0x70))();
    FUN_007869c0(uVar4);
    if (*(int *)(param_1 + 0x2cc) != 0) {
      iVar5 = FUN_005d59f0(&LAB_004040e0);
      *(int *)(param_1 + 0x2e0) = iVar5;
      if (iVar5 != 0) {
        (**(code **)(*(int *)(param_1 + 0x18) + 4))(*(undefined4 *)(param_1 + 0x2e0));
        cVar1 = FUN_0040e440(&stack0xfffffff8);
        if (cVar1 != '\0') {
          fVar6 = (float10)(**(code **)(*unaff_ESI + 0x1c))();
          *(float *)(*(int *)(param_1 + 0x2c0) + 0x74) = (float)fVar6;
        }
        cVar1 = FUN_0040e4e0(&stack0xfffffff8);
        if (cVar1 != '\0') {
          iVar5 = (**(code **)(*unaff_ESI + 8))();
          *(bool *)(*(int *)(param_1 + 0x2c0) + 0x7c) = iVar5 != 0;
        }
      }
    }
  }
  return;
}

