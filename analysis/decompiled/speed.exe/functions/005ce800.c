/* speed.exe 005ce800 FUN_005ce800; analysis pseudocode, not buildable source.
 * calls 005c67f0 FUN_005c67f0
 */

void FUN_005ce800(float *param_1,float *param_2,undefined4 param_3)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  local_8 = param_1[2] * *param_2 - param_2[2] * *param_1;
  local_4 = param_2[1] * *param_1 - *param_2 * param_1[1];
  FUN_005c67f0(&local_c,param_3);
  return;
}

