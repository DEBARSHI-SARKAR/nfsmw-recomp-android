/* speed.exe 005d3480 FUN_005d3480; analysis pseudocode, not buildable source.
 * calls 005d1590 FUN_005d1590
 */

int * FUN_005d3480(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 != param_3) {
    while (param_4 != *(int *)(param_2 + 4)) {
      param_2 = param_2 + 8;
      if (param_2 == param_3) {
        *param_1 = param_2;
        return param_1;
      }
    }
    if (param_2 != param_3) {
      FUN_005d1590(param_1,param_2 + 8,param_3,param_2,param_4);
      return param_1;
    }
  }
  *param_1 = param_2;
  return param_1;
}

