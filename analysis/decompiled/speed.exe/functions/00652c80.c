/* speed.exe 00652c80 FUN_00652c80; analysis pseudocode, not buildable source.
 * calls 00652c80 FUN_00652c80
 */

undefined4 * __thiscall FUN_00652c80(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  switch(*param_1) {
  case 0:
    *(undefined1 *)param_1[1] = *(undefined1 *)param_2;
    return param_2 + 1;
  case 1:
    *(undefined2 *)param_1[1] = *(undefined2 *)param_2;
    return param_2 + 1;
  case 2:
  case 3:
    *(undefined4 *)param_1[1] = *param_2;
    return param_2 + 1;
  case 4:
    (*(code *)param_1[1])(0,*param_2);
    return param_2 + 1;
  case 5:
    (*(code *)param_1[1])(0,*param_2);
    return param_2 + 1;
  case 6:
    piVar2 = (int *)param_1[1];
    if (*piVar2 != 7) {
      do {
        param_2 = (undefined4 *)FUN_00652c80(param_2);
        piVar1 = piVar2 + 3;
        piVar2 = piVar2 + 3;
      } while (*piVar1 != 7);
      return param_2;
    }
  }
  return param_2;
}

