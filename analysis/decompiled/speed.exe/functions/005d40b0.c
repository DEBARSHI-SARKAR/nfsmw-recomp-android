/* speed.exe 005d40b0 FUN_005d40b0; analysis pseudocode, not buildable source.
 * calls 0041ea60 FUN_0041ea60
 */

void FUN_005d40b0(float *param_1,int param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_20 = *param_1 - param_1[4];
  local_14 = 0;
  local_4 = 0;
  local_1c = param_1[1] - param_1[5];
  local_18 = param_1[2] - param_1[6];
  local_10 = param_1[8] - *param_1;
  local_c = param_1[9] - param_1[1];
  local_8 = param_1[10] - param_1[2];
  FUN_0041ea60(&local_20,&local_10,param_2);
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

