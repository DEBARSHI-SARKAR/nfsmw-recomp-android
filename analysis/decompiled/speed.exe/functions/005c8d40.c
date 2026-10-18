/* speed.exe 005c8d40 FUN_005c8d40; analysis pseudocode, not buildable source.
 */

float10 FUN_005c8d40(float *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)param_1[10] * (float10)param_1[0xf] -
          (float10)param_1[0xe] * (float10)param_1[0xb];
  fVar2 = (float10)param_1[0xd] * (float10)param_1[0xb];
  fVar4 = (float10)param_1[0xe] * (float10)param_1[9] - (float10)param_1[10] * (float10)param_1[0xd]
  ;
  fVar1 = param_1[0xd] * param_1[8] - param_1[0xc] * param_1[9];
  return (((float10)fVar1 * (float10)param_1[7] +
          ((float10)param_1[0xf] * (float10)param_1[9] - fVar2) * (float10)param_1[4] +
          (fVar2 - (float10)param_1[0xf] * (float10)param_1[8]) * (float10)param_1[5]) *
          (float10)param_1[2] +
         ((fVar3 * (float10)param_1[5] +
          fVar4 * (float10)param_1[7] +
          (fVar2 - (float10)param_1[0xf] * (float10)param_1[9]) * (float10)param_1[6]) *
          (float10)*param_1 -
         (fVar3 * (float10)param_1[4] +
         ((float10)(param_1[0xe] * param_1[8]) - (float10)(param_1[10] * param_1[0xc])) *
         (float10)param_1[7] +
         ((float10)param_1[0xc] * (float10)param_1[0xb] -
         (float10)param_1[0xf] * (float10)param_1[8]) * (float10)param_1[6]) * (float10)param_1[1]))
         - ((float10)fVar1 * (float10)param_1[6] +
           fVar4 * (float10)param_1[4] +
           ((float10)(param_1[10] * param_1[0xc]) - (float10)(param_1[0xe] * param_1[8])) *
           (float10)param_1[5]) * (float10)param_1[3];
}

