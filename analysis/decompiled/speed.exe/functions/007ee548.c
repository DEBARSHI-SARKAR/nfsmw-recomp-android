/* speed.exe 007ee548 FUN_007ee548; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ee548(int *param_1,int *param_2)

{
  *param_2 = *param_1;
  param_1[2] = param_1[2] + 1;
  *param_1 = (int)param_2;
  if (*param_2 == 0) {
    param_1[1] = (int)param_2;
  }
  return;
}

