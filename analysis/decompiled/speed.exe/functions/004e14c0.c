/* speed.exe 004e14c0 FUN_004e14c0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004e14c0(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int local_8;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    local_8 = ((int)(param_2 - (float)(int)ROUND(param_2)) >> 0x1f) + (int)ROUND(param_2);
    if (local_8 < 1) {
      if (local_8 < 0) {
        param_2 = 0.0;
        local_8 = 0;
      }
      piVar1 = *(int **)(param_1 + 0x20);
      fVar5 = (float10)(piVar1[1] - *piVar1);
      fVar6 = (float10)(piVar1[2] - *piVar1) * (float10)_DAT_008933d4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
      if (local_8 < iVar2 + -1) {
        iVar2 = *(int *)(param_1 + 0x20);
        fVar5 = (float10)(*(int *)(iVar2 + 4 + local_8 * 4) - *(int *)(iVar2 + -4 + local_8 * 4)) *
                (float10)_DAT_008933d4;
        fVar6 = (float10)(*(int *)(iVar2 + 8 + local_8 * 4) - *(int *)(iVar2 + local_8 * 4)) *
                (float10)_DAT_008933d4;
      }
      else {
        if (iVar2 <= local_8) {
          param_2 = (float)iVar2;
          local_8 = iVar2 + -1;
        }
        iVar2 = *(int *)(param_1 + 0x10);
        iVar3 = *(int *)(param_1 + 0x20);
        iVar4 = *(int *)(iVar3 + iVar2 * 4);
        fVar5 = (float10)(iVar4 - *(int *)(iVar3 + -8 + iVar2 * 4)) * (float10)_DAT_008933d4;
        fVar6 = (float10)(iVar4 - *(int *)(iVar3 + -4 + iVar2 * 4));
      }
    }
    return (fVar6 - fVar5) * ((float10)param_2 - (float10)local_8) + fVar5;
  }
  return (float10)_DAT_00890968;
}

