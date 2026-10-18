/* speed.exe 0065a370 FUN_0065a370; analysis pseudocode, not buildable source.
 * calls 00659e70 FUN_00659e70
 * calls 00659db0 FUN_00659db0
 */

float10 FUN_0065a370(float *param_1,undefined4 param_2)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00659db0(&local_30,param_2);
  FUN_00659e70(&local_20,param_2);
  return (float10)local_1c * ((float10)local_2c - (float10)param_1[1]) +
         (float10)local_18 * ((float10)local_28 - (float10)param_1[2]) +
         ((float10)local_30 - (float10)*param_1) * (float10)local_20;
}

