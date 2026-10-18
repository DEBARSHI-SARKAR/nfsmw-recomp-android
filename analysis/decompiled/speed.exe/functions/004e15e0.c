/* speed.exe 004e15e0 FUN_004e15e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004e15e0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 < 1) {
    return (float10)_DAT_00890968;
  }
  if (**(int **)(param_1 + 0x20) < param_2) {
    if (param_2 < (*(int **)(param_1 + 0x20))[iVar5]) {
      iVar6 = 0;
      while( true ) {
        while( true ) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x20) + iVar6 * 4);
          fVar2 = ((float)(param_2 - iVar4) /
                  (float)(*(int *)(*(int *)(param_1 + 0x20) + iVar5 * 4) - iVar4)) *
                  (float)(iVar5 - iVar6);
          iVar4 = (int)ROUND(fVar2);
          iVar3 = ((int)(fVar2 - (float)iVar4) >> 0x1f) + iVar4 + iVar6;
          piVar1 = (int *)(*(int *)(param_1 + 0x20) + iVar3 * 4);
          iVar4 = *piVar1;
          if (iVar4 <= param_2) break;
          fVar2 = (float)(iVar4 - param_2) / *(float *)(param_1 + 0x28);
          iVar5 = (int)ROUND(fVar2);
          iVar4 = (((int)((float)iVar5 - fVar2) >> 0x1f) - iVar5) + iVar3;
          iVar5 = iVar3;
          if (iVar6 < iVar4) {
            iVar6 = iVar4;
          }
        }
        if (param_2 < piVar1[1]) break;
        fVar2 = (float)(param_2 - iVar4) / *(float *)(param_1 + 0x28);
        iVar6 = (int)ROUND(fVar2);
        iVar4 = iVar3 + 1 + (iVar6 - ((int)((float)iVar6 - fVar2) >> 0x1f));
        iVar6 = iVar3 + 1;
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
      }
      fVar7 = (float10)*(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4);
      return ((float10)param_2 - fVar7) /
             ((float10)*(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4 + 4) - fVar7) + (float10)iVar3;
    }
    return (float10)iVar5;
  }
  return (float10)_DAT_00890968;
}

