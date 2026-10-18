/* speed.exe 00821c0c FUN_00821c0c; analysis pseudocode, not buildable source.
 */

void FUN_00821c0c(int *param_1,int *param_2)

{
  if (param_2 == (int *)*param_1) {
    *param_1 = *(int *)*param_1;
  }
  if (param_2 == (int *)param_1[1]) {
    param_1[1] = ((int *)param_1[1])[1];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  param_1[2] = param_1[2] + -1;
  return;
}

