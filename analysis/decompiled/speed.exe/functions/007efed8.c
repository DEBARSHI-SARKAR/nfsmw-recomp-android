/* speed.exe 007efed8 FUN_007efed8; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007efed8(int *param_1,int *param_2)

{
  *param_2 = *param_1;
  param_1[2] = param_1[2] + 1;
  *param_1 = (int)param_2;
  if (*param_2 == 0) {
    param_1[1] = (int)param_2;
  }
  return;
}

