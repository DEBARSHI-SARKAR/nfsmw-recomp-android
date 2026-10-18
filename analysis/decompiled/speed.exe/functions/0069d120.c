/* speed.exe 0069d120 FUN_0069d120; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 00410180 FUN_00410180
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0069d120(float param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  float10 fVar9;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(byte *)(param_2 + 0xc4) & 1) != 0) {
    return 0;
  }
  local_34 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)((int)param_1 + 0x34) + 0x54))();
  if (*(float *)(param_2 + 0xbc) < _DAT_008933d4) {
    piVar1 = (int *)((int)param_1 + 0x4c);
    iVar4 = (**(code **)(*(int *)((int)param_1 + 0x4c) + 0x4c))();
    iVar5 = (**(code **)(*piVar1 + 8))();
    param_1 = local_34;
    if ((((iVar4 == iVar5) &&
         (_DAT_00890968 < *(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x5c))) &&
        (*(float *)(param_2 + 0x4c) == _DAT_00890968)) &&
       ((fVar9 = (float10)FUN_00410180(param_2 + 0x60), param_1 = local_34,
        fVar9 < (float10)_DAT_008910f0 &&
        (cVar2 = (**(code **)(**(int **)((int)local_34 + 0x54) + 0x40))(), cVar2 == '\0')))) {
      if (_DAT_008aabe0 <= *(float *)(param_2 + 0xbc)) {
        (**(code **)(**(int **)((int)param_1 + 0x54) + 0x14))
                  (_DAT_0089096c - *(float *)(param_2 + 0xbc));
      }
      else {
        (**(code **)(**(int **)((int)param_1 + 0x54) + 0x14))(0x3f800000);
      }
      uVar8 = 0;
      iVar4 = (**(code **)(*piVar1 + 8))();
      if (iVar4 != 0) {
        do {
          (**(code **)(*piVar1 + 0x54))(uVar8,0);
          uVar8 = uVar8 + 1;
          uVar6 = (**(code **)(*piVar1 + 8))();
        } while (uVar8 < uVar6);
      }
      return 1;
    }
  }
  if (((*(float *)(param_2 + 0xbc) < _DAT_0089096c) &&
      (fVar9 = (float10)FUN_005c5e80(*(float *)(param_2 + 0x68) * *(float *)(param_2 + 0x68) +
                                     *(float *)(param_2 + 100) * *(float *)(param_2 + 100) +
                                     *(float *)(param_2 + 0x60) * *(float *)(param_2 + 0x60)),
      fVar9 < (float10)_DAT_008910f0)) &&
     (*(float *)(param_2 + 0x4c) < _DAT_00890968 != (*(float *)(param_2 + 0x4c) == _DAT_00890968)))
  {
    fStack_18 = *(float *)(param_2 + 0x40);
    uStack_14 = *(undefined4 *)(param_2 + 0x44);
    uStack_10 = *(undefined4 *)(param_2 + 0x48);
    uStack_c = *(undefined4 *)(param_2 + 0x90);
    uStack_8 = *(undefined4 *)(param_2 + 0x94);
    uStack_4 = *(undefined4 *)(param_2 + 0x98);
    puVar7 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x54) + 0x8c))();
    uStack_24 = *puVar7;
    uStack_20 = puVar7[1];
    uStack_1c = puVar7[2];
    puVar7 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x54) + 0x90))();
    uStack_30 = *puVar7;
    uStack_2c = puVar7[1];
    fStack_28 = (float)puVar7[2];
    (**(code **)(*piVar3 + 0xa4))(&uStack_24,0);
    (**(code **)(*piVar3 + 0xa4))(&stack0xffffffc8,0);
    fStack_28 = fStack_28 * *(float *)(param_2 + 0xbc);
    fStack_18 = fStack_18 * *(float *)(param_2 + 0xbc);
    local_34 = -(local_34 * (_DAT_0089096c - *(float *)(param_2 + 0xbc)));
    FUN_00401670(&fStack_28,param_2,&fStack_28);
    FUN_00401670(&uStack_1c,param_2,&uStack_1c);
    FUN_00401670(&stack0xffffffc0,param_2,&stack0xffffffc0);
    FUN_00401670(&local_34,param_2,&local_34);
    (**(code **)(*piVar3 + 0x84))(&local_34,&stack0xffffffc0);
    (**(code **)(*piVar3 + 0x60))(&uStack_30);
    (**(code **)(*piVar3 + 100))(&fStack_28);
    return 2;
  }
  return 0;
}

