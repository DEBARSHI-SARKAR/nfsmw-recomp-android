/* speed.exe 0070b5e0 FUN_0070b5e0; analysis pseudocode, not buildable source.
 * calls 00708f50 FUN_00708f50
 */

int * FUN_0070b5e0(int *param_1,int *param_2,int *param_3,int *param_4)

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
      FUN_00708f50(param_1,*param_2,param_3,param_2,param_4);
      return param_1;
    }
  }
  *param_1 = (int)param_2;
  return param_1;
}

