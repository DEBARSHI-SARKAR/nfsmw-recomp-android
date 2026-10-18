/* speed.exe 005aeba0 FUN_005aeba0; analysis pseudocode, not buildable source.
 */

void FUN_005aeba0(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  *param_5 = (*param_2 - *param_1) * param_3 + *param_1 + *param_4;
  param_5[1] = (param_2[1] - param_1[1]) * param_3 + param_4[1] + param_1[1];
  param_5[2] = (param_2[2] - param_1[2]) * param_3 + param_4[2] + param_1[2];
  return;
}

