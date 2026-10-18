/* speed.exe 0040d910 FUN_0040d910; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0040d910(int *param_1,int param_2,undefined4 *param_3)

{
  if (*(int **)param_1[5] == param_1) {
    *(int *)param_1[5] = param_1[1];
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
    *(int **)(param_2 + 4) = param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    param_1[1] = (int)param_3;
    *param_3 = param_1;
    if (param_1[1] == *(int *)param_1[5]) {
      *(int *)param_1[5] = (int)param_1;
    }
  }
  return;
}

