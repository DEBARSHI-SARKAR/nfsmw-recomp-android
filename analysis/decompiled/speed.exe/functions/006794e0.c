/* speed.exe 006794e0 FUN_006794e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006794e0(int param_1,float param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    do {
      if (piVar2 == (int *)*piVar1) {
        *param_3 = (float)piVar2[2];
        param_3[1] = (float)piVar2[3];
        param_3[2] = (float)piVar2[4];
      }
      else {
        if (param_2 * param_3[2] < param_2 * (float)piVar2[4]) {
          param_3[2] = (float)piVar2[4];
        }
        if (param_2 * *param_3 < param_2 * (float)piVar2[2]) {
          *param_3 = (float)piVar2[2];
        }
        if (param_2 * param_3[1] < param_2 * (float)piVar2[3]) {
          param_3[1] = (float)piVar2[3];
        }
      }
      piVar2 = (int *)*piVar2;
      piVar1 = *(int **)(param_1 + 4);
    } while (piVar2 != piVar1);
  }
  return;
}

