/* speed.exe 005c6860 FUN_005c6860; analysis pseudocode, not buildable source.
 */

void FUN_005c6860(int param_1,float *param_2,float *param_3,float *param_4)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_4 = *param_2 - *param_3;
      param_4[1] = param_2[1] - param_3[1];
      param_4[2] = param_2[2] - param_3[2];
      param_2 = param_2 + 3;
      param_4 = param_4 + 3;
    } while (param_1 != 0);
  }
  return;
}

