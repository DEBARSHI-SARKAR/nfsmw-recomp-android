/* speed.exe 007eff01 FUN_007eff01; analysis pseudocode, not buildable source.
 * calls 007efed8 FUN_007efed8
 */

void __thiscall FUN_007eff01(int param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x0) {
    FUN_007efed8(param_3);
  }
  else {
    if (*param_2 == 0) {
      *(int **)(param_1 + 4) = param_3;
    }
    *param_3 = *param_2;
    *param_2 = (int)param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

