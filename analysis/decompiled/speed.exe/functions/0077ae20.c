/* speed.exe 0077ae20 FUN_0077ae20; analysis pseudocode, not buildable source.
 * calls 007736e0 FUN_007736e0
 */

void FUN_0077ae20(float *param_1,float param_2,undefined4 param_3)

{
  float local_20 [4];
  float local_10;
  undefined4 local_c;
  float local_8;
  
  local_20[0] = *param_1 - param_2;
  local_c = 0;
  local_20[1] = 0.0;
  local_20[2] = param_1[2] - param_2;
  local_10 = param_2 + *param_1;
  local_8 = param_2 + param_1[2];
  FUN_007736e0(local_20,param_3);
  return;
}

