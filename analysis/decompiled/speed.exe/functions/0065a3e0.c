/* speed.exe 0065a3e0 FUN_0065a3e0; analysis pseudocode, not buildable source.
 * calls 00659e70 FUN_00659e70
 * calls 00659db0 FUN_00659db0
 * calls 0045f490 FUN_0045f490
 */

float10 FUN_0065a3e0(float *param_1,undefined4 param_2)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00659db0(&local_30,param_2);
  FUN_00659e70(&local_20,param_2);
  local_30 = local_30 - *param_1;
  local_2c = local_2c - param_1[1];
  local_28 = local_28 - param_1[2];
  FUN_0045f490(&local_30,&local_30);
  FUN_0045f490(&local_20,&local_20);
  return (float10)local_1c * (float10)local_2c +
         (float10)local_18 * (float10)local_28 + (float10)local_30 * (float10)local_20;
}

