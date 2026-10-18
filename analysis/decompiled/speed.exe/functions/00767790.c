/* speed.exe 00767790 FUN_00767790; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00767790(float *param_1,float *param_2,float *param_3)

{
  if (param_1[1] == _DAT_00890968) {
    return (float10)param_2[1];
  }
  return (float10)param_2[1] -
         (((float10)*param_3 - (float10)*param_2) * (float10)*param_1 +
         ((float10)param_3[2] - (float10)param_2[2]) * (float10)param_1[2]) / (float10)param_1[1];
}

