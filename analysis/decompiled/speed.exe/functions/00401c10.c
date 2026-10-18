/* speed.exe 00401c10 FUN_00401c10; analysis pseudocode, not buildable source.
 */

void FUN_00401c10(float *param_1,float param_2,float *param_3,float *param_4)

{
  *param_4 = param_2 * *param_1 + *param_3;
  param_4[1] = param_2 * param_1[1] + param_3[1];
  param_4[2] = param_2 * param_1[2] + param_3[2];
  return;
}

