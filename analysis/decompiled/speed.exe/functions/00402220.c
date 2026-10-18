/* speed.exe 00402220 FUN_00402220; analysis pseudocode, not buildable source.
 */

float10 FUN_00402220(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}

