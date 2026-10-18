/* speed.exe 00692140 FUN_00692140; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00692140(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_8;
  float fStack_4;
  
  local_8 = 0.0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x160) + 0x70)) {
    piVar1 = *(int **)(param_1 + 0x114);
    fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(1);
    local_8 = (float)fVar3;
    fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(0);
    fVar4 = (fVar3 + (float10)fStack_4) * (float10)_DAT_008933d4;
    fVar3 = (float10)_DAT_00890968;
    if (param_2 == '\0') {
      fVar5 = fVar4;
      if (fVar4 < fVar3) {
        fVar5 = -fVar4;
      }
      if ((float10)_DAT_00890968 < fVar5) {
        local_8 = (float)fVar4;
      }
    }
    else {
      if (iVar2 != 0) {
        if (fVar4 <= fVar3) {
          fVar4 = (float10)_DAT_00890968;
        }
      }
      else if (fVar4 >= fVar3) {
        local_8 = _DAT_00890968;
        goto LAB_006921fa;
      }
      local_8 = (float)fVar4;
    }
  }
LAB_006921fa:
  if (*(float *)(*(int *)(param_1 + 0x160) + 0x70) < _DAT_0089096c) {
    piVar1 = *(int **)(param_1 + 0x114);
    fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(3);
    local_8 = (float)fVar3;
    fVar3 = (float10)(**(code **)(*piVar1 + 0x50))(2);
    fVar3 = (fVar3 + (float10)fStack_4) * (float10)_DAT_008933d4;
    if (param_2 != '\0') {
      if (iVar2 != 0) {
        if ((float10)local_8 < fVar3) {
          return fVar3;
        }
        return (float10)local_8;
      }
      if (fVar3 < (float10)local_8) {
        return fVar3;
      }
      return (float10)local_8;
    }
    fVar4 = fVar3;
    if (fVar3 < (float10)_DAT_00890968) {
      fVar4 = -fVar3;
    }
    fVar5 = (float10)local_8;
    if (local_8 < _DAT_00890968) {
      fVar5 = -fVar5;
    }
    if (fVar5 < fVar4) {
      return fVar3;
    }
  }
  return (float10)local_8;
}

