/* speed.exe 00410070 FUN_00410070; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

void FUN_00410070(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_2 - *param_1;
  param_3[1] = param_2[1] - param_1[1];
  param_3[2] = param_2[2] - param_1[2];
  FUN_0040fe20(param_3,param_3);
  return;
}

