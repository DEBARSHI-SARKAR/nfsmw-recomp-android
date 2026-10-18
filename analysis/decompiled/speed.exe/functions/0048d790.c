/* speed.exe 0048d790 FUN_0048d790; analysis pseudocode, not buildable source.
 */

void FUN_0048d790(float param_1,float *param_2,float *param_3,float *param_4)

{
  *param_4 = (*param_3 - *param_2) * param_1 + *param_2;
  param_4[1] = (param_3[1] - param_2[1]) * param_1 + param_2[1];
  param_4[2] = (param_3[2] - param_2[2]) * param_1 + param_2[2];
  return;
}

