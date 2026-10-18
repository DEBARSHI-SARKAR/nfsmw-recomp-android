/* speed.exe 0060d3c0 FUN_0060d3c0; analysis pseudocode, not buildable source.
 */

void FUN_0060d3c0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    piVar1 = param_4;
    if (*param_2 != *param_5) {
      piVar1 = param_4 + 1;
      *param_4 = *param_2;
    }
    param_2 = param_2 + 1;
    param_4 = piVar1;
  } while (param_2 != param_3);
  *param_1 = piVar1;
  return;
}

