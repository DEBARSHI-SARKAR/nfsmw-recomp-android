/* speed.exe 00608360 FUN_00608360; analysis pseudocode, not buildable source.
 * calls 00608060 FUN_00608060
 * calls 006127a0 FUN_006127a0
 */

bool FUN_00608360(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  switch(*param_2) {
  case 0:
    goto switchD_00608374_caseD_0;
  case 1:
    return param_2[1] == *(int *)(param_3 + 4);
  default:
    return param_2[1] == *(int *)(param_3 + 4);
  case 3:
    if ((float)param_2[1] != *(float *)(param_3 + 4)) {
      return false;
    }
    return true;
  case 5:
  case 7:
    if (param_2[1] != *(int *)(param_3 + 4)) {
      iVar1 = FUN_00608060(param_1,*(undefined4 *)(*(int *)(param_3 + 4) + 8));
      if (iVar1 == 0) {
        return false;
      }
      FUN_006127a0(param_1,iVar1,param_2,param_3);
      iVar1 = **(int **)(param_1 + 8);
      if (iVar1 == 0) {
        return false;
      }
      if (iVar1 != 1) {
        return true;
      }
      if ((*(int **)(param_1 + 8))[1] == 0) {
        return false;
      }
      return true;
    }
switchD_00608374_caseD_0:
    return true;
  }
}

