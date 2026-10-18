/* speed.exe 005e1930 FUN_005e1930; analysis pseudocode, not buildable source.
 */

int * FUN_005e1930(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    do {
      piVar2 = param_1;
      param_1 = piVar2 + 1;
      if (param_1 == param_2) {
        return param_2;
      }
    } while (*piVar2 != *param_1);
    for (piVar1 = piVar2 + 2; piVar1 != param_2; piVar1 = piVar1 + 1) {
      if (*piVar2 != *piVar1) {
        piVar2 = piVar2 + 1;
        *piVar2 = *piVar1;
      }
    }
    param_2 = piVar2 + 1;
  }
  return param_2;
}

