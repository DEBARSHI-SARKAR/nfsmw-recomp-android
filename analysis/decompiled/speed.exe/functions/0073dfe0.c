/* speed.exe 0073dfe0 FUN_0073dfe0; analysis pseudocode, not buildable source.
 */

void FUN_0073dfe0(float *param_1,float *param_2,float param_3)

{
  *param_1 = param_3 * *param_2 + *param_1;
  param_1[1] = param_3 * param_2[1] + param_1[1];
  param_1[4] = param_3 * param_2[4] + param_1[4];
  param_1[5] = param_3 * param_2[5] + param_1[5];
  param_1[8] = param_3 * param_2[8] + param_1[8];
  param_1[9] = param_3 * param_2[9] + param_1[9];
  param_1[0xc] = param_3 * param_2[0xc] + param_1[0xc];
  param_1[0xd] = param_3 * param_2[0xd] + param_1[0xd];
  return;
}

