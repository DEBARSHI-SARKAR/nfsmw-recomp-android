/* speed.exe 007ee5e3 FUN_007ee5e3; analysis pseudocode, not buildable source.
 */

undefined1 __thiscall FUN_007ee5e3(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (param_2 == piVar2) {
    param_1[2] = param_1[2] + -1;
    if (param_2 == (int *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *param_2;
    }
  }
  else {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (*piVar2 == 0) {
      return 0;
    }
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 == param_2) break;
      piVar2 = piVar1;
    } while (*piVar1 != 0);
    if ((int *)*piVar2 == (int *)0x0) {
      return 0;
    }
    if ((int *)*piVar2 != param_2) {
      return 0;
    }
    param_1[2] = param_1[2] + -1;
    *piVar2 = *param_2;
    if (param_2 == (int *)param_1[1]) {
      param_1[1] = (int)piVar2;
    }
  }
  *param_2 = 0;
  return 1;
}

