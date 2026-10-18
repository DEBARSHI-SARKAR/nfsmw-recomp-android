/* speed.exe 006101e0 FUN_006101e0; analysis pseudocode, not buildable source.
 * calls 0060d3c0 FUN_0060d3c0
 */

undefined4 * FUN_006101e0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_2 != param_3) {
    while (*param_2 != *param_4) {
      param_2 = param_2 + 1;
      if (param_2 == param_3) {
        *param_1 = param_2;
        return param_1;
      }
    }
    if (param_2 != param_3) {
      FUN_0060d3c0(param_1,param_2 + 1,param_3,param_2,param_4);
      return param_1;
    }
  }
  *param_1 = param_2;
  return param_1;
}

