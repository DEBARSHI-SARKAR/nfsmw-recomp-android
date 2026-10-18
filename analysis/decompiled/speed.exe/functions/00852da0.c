/* speed.exe 00852da0 FUN_00852da0; analysis pseudocode, not buildable source.
 * calls 00852c90 FUN_00852c90
 * calls 00852d60 FUN_00852d60
 */

undefined4 FUN_00852da0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00852d60(param_1);
  if (param_1[7] == 0) {
    iVar3 = FUN_00852c90(param_1,(*param_1 * 3 + 10) / 2);
    if (iVar3 < 1) {
      return 0xffffffff;
    }
  }
  piVar1 = (int *)param_1[7];
  param_1[7] = *piVar1;
  piVar1[2] = param_2;
  piVar1[1] = param_3;
  *piVar1 = *(int *)(param_1[5] + iVar2 * 4);
  *(int **)(param_1[5] + iVar2 * 4) = piVar1;
  *param_1 = *param_1 + 1;
  return 1;
}

