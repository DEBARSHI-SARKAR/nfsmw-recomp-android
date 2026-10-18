/* speed.exe 004018f0 FUN_004018f0; analysis pseudocode, not buildable source.
 */

float10 FUN_004018f0(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}

