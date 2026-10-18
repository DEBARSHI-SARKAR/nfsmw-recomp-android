/* speed.exe 0041c1d0 FUN_0041c1d0; analysis pseudocode, not buildable source.
 * calls 0040d910 FUN_0040d910
 */

undefined4 * __thiscall
FUN_0041c1d0(undefined4 *param_1,undefined4 param_2,int *param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_4;
  param_1[3] = param_4;
  param_1[4] = param_2;
  param_1[5] = param_3;
  if (*param_3 == 0) {
    *param_3 = (int)param_1;
    return param_1;
  }
  iVar1 = *param_3;
  iVar3 = 0;
  do {
    iVar2 = iVar1;
    if (param_4 <= *(float *)(iVar2 + 8)) break;
    iVar1 = *(int *)(iVar2 + 4);
    iVar3 = iVar2;
  } while (*(int *)(iVar2 + 4) != 0);
  if (iVar3 != 0) {
    FUN_0040d910(iVar3,*(undefined4 *)(iVar3 + 4));
    return param_1;
  }
  FUN_0040d910(*(undefined4 *)*param_3,(undefined4 *)*param_3);
  return param_1;
}

