/* speed.exe 004e1350 FUN_004e1350; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004e1350(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 < *(float *)(param_1 + 4) != (param_2 == *(float *)(param_1 + 4))) {
    return **(int **)(param_1 + 0x1c);
  }
  if (*(float *)(param_1 + 8) <= param_2) {
    return *(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4);
  }
  fVar2 = ((param_2 - *(float *)(param_1 + 4)) * (float)iVar1) /
          (*(float *)(param_1 + 8) - *(float *)(param_1 + 4));
  iVar3 = ((int)(fVar2 - (float)(int)ROUND(fVar2)) >> 0x1f) + (int)ROUND(fVar2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
  return (int)ROUND((fVar2 - (float)iVar3) *
                    (float)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4 + 4) - iVar1) +
                    (float)iVar1);
}

