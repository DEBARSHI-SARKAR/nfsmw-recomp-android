/* speed.exe 00852cf0 FUN_00852cf0; analysis pseudocode, not buildable source.
 */

int FUN_00852cf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar1 = param_1[5];
  if (*(int *)(iVar1 + param_1[1] * 4) == 0) {
    do {
      iVar3 = (param_1[1] + 1) % param_1[4];
      param_1[1] = iVar3;
    } while (*(int *)(param_1[5] + iVar3 * 4) == 0);
  }
  piVar2 = *(int **)(iVar1 + param_1[1] * 4);
  *(int *)(iVar1 + param_1[1] * 4) = *piVar2;
  *piVar2 = param_1[7];
  param_1[7] = (int)piVar2;
  *param_1 = *param_1 + -1;
  return piVar2[1];
}

