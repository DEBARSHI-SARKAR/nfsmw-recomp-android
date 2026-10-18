/* speed.exe 0067dd40 FUN_0067dd40; analysis pseudocode, not buildable source.
 * calls 0067af40 FUN_0067af40
 */

int * FUN_0067dd40(int *param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_2 != param_3) {
    while (param_2[2] != *param_4) {
      param_2 = (int *)*param_2;
      if (param_2 == param_3) {
        *param_1 = (int)param_2;
        return param_1;
      }
    }
    if (param_2 != param_3) {
      FUN_0067af40(param_1,*param_2,param_3,param_2,param_4);
      return param_1;
    }
  }
  *param_1 = (int)param_2;
  return param_1;
}

