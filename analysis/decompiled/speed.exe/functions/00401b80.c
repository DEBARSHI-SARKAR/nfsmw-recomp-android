/* speed.exe 00401b80 FUN_00401b80; analysis pseudocode, not buildable source.
 */

void FUN_00401b80(float *param_1,float param_2,float *param_3)

{
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * param_1[1];
  param_3[2] = param_2 * param_1[2];
  return;
}

