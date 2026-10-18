/* speed.exe 00607520 FUN_00607520; analysis pseudocode, not buildable source.
 */

bool FUN_00607520(int *param_1,int *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  switch(*param_1) {
  case 0:
    goto switchD_00607533_caseD_0;
  default:
    return param_1[1] == param_2[1];
  case 3:
    if ((float)param_1[1] != (float)param_2[1]) {
      return false;
    }
switchD_00607533_caseD_0:
    return true;
  }
}

