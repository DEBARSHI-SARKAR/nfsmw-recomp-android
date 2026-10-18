/* speed.exe 00852f20 FUN_00852f20; analysis pseudocode, not buildable source.
 * calls 00852c90 FUN_00852c90
 */

undefined4 FUN_00852f20(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  if (param_2 < 0) {
    iVar3 = -param_2;
  }
  iVar1 = param_1[4];
  if (param_1[7] == 0) {
    iVar4 = FUN_00852c90(param_1,(*param_1 * 3 + 10) / 2);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
  }
  piVar2 = (int *)param_1[7];
  param_1[7] = *piVar2;
  piVar2[2] = param_2;
  piVar2[1] = param_3;
  *piVar2 = *(int *)(param_1[5] + (iVar3 % iVar1) * 4);
  *(int **)(param_1[5] + (iVar3 % iVar1) * 4) = piVar2;
  *param_1 = *param_1 + 1;
  return 1;
}

