/* speed.exe 00402120 FUN_00402120; analysis pseudocode, not buildable source.
 */

float10 FUN_00402120(float *param_1,float *param_2)

{
  return SQRT(((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
              ((float10)param_1[1] - (float10)param_2[1]) *
              ((float10)param_1[1] - (float10)param_2[1]));
}

