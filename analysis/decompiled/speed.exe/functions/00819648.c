/* speed.exe 00819648 FUN_00819648; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00819648(int *param_1,int *param_2)

{
  if (param_2 == (int *)*param_1) {
    *param_1 = *(int *)*param_1;
  }
  if ((int *)param_2[1] != (int *)0x0) {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  return;
}

