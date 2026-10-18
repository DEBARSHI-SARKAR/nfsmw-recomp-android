/* speed.exe 005aeb60 FUN_005aeb60; analysis pseudocode, not buildable source.
 */

void FUN_005aeb60(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  *param_5 = (*param_2 - *param_1) * param_3 + *param_1 + *param_4;
  param_5[1] = (param_2[1] - param_1[1]) * param_3 + param_4[1] + param_1[1];
  return;
}

