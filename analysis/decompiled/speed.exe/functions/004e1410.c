/* speed.exe 004e1410 FUN_004e1410; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004e1410(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
    return **(int **)(param_1 + 0x20);
  }
  if ((float)iVar1 < param_2 != ((float)iVar1 == param_2)) {
    return *(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4);
  }
  iVar2 = ((int)(param_2 - (float)(int)ROUND(param_2)) >> 0x1f) + (int)ROUND(param_2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4);
  return (int)ROUND((param_2 - (float)iVar2) *
                    (float)(*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4 + 4) - iVar1) +
                    (float)iVar1);
}

