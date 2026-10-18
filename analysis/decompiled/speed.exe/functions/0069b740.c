/* speed.exe 0069b740 FUN_0069b740; analysis pseudocode, not buildable source.
 * calls 005e8b20 FUN_005e8b20
 * calls 00401d10 FUN_00401d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0069b740(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_2 + 0x48) + 4))();
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 1) {
    if (0 < DAT_00905008) {
      return 1;
    }
    if (*(char *)(DAT_0091cf90 + 0x143) == '\0') {
      return 0;
    }
    uVar3 = (**(code **)(*(int *)(param_1 + 0x48) + 4))();
    iVar2 = FUN_005e8b20(uVar3);
    if (((iVar2 != 0) && (iVar4 = FUN_005e8b20(piVar1), iVar4 != 0)) &&
       (fVar5 = (float10)FUN_00401d10((*(float *)(iVar2 + 0x24) * _DAT_00890dc4 +
                                      (float)*(int *)(iVar2 + 0x28)) -
                                      (*(float *)(iVar4 + 0x24) * _DAT_00890dc4 +
                                      (float)*(int *)(iVar4 + 0x28))),
       (float10)_DAT_008933d4 < fVar5)) {
      return 0;
    }
  }
  if ((*(char *)(param_1 + 0x170) != '\0') &&
     (((*(byte *)(**(int **)(param_1 + 0x78) + 0x1d) & 1) == 0 ||
      ((*(byte *)(**(int **)(param_2 + 0x78) + 0x1d) & 1) == 0)))) {
    return 1;
  }
  return 0;
}

