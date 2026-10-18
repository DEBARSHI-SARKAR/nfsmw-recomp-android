/* speed.exe 004939d0 FUN_004939d0; analysis pseudocode, not buildable source.
 */

float10 FUN_004939d0(void)

{
  float fVar1;
  float *in_EAX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)in_EAX[10] * (float10)in_EAX[0xf] - (float10)in_EAX[0xe] * (float10)in_EAX[0xb];
  fVar2 = (float10)in_EAX[0xd] * (float10)in_EAX[0xb];
  fVar4 = (float10)in_EAX[0xe] * (float10)in_EAX[9] - (float10)in_EAX[10] * (float10)in_EAX[0xd];
  fVar1 = in_EAX[0xd] * in_EAX[8] - in_EAX[0xc] * in_EAX[9];
  return (((float10)fVar1 * (float10)in_EAX[7] +
          ((float10)in_EAX[0xf] * (float10)in_EAX[9] - fVar2) * (float10)in_EAX[4] +
          (fVar2 - (float10)in_EAX[0xf] * (float10)in_EAX[8]) * (float10)in_EAX[5]) *
          (float10)in_EAX[2] +
         ((fVar3 * (float10)in_EAX[5] +
          fVar4 * (float10)in_EAX[7] +
          (fVar2 - (float10)in_EAX[0xf] * (float10)in_EAX[9]) * (float10)in_EAX[6]) *
          (float10)*in_EAX -
         (fVar3 * (float10)in_EAX[4] +
         ((float10)(in_EAX[0xe] * in_EAX[8]) - (float10)(in_EAX[10] * in_EAX[0xc])) *
         (float10)in_EAX[7] +
         ((float10)in_EAX[0xc] * (float10)in_EAX[0xb] - (float10)in_EAX[0xf] * (float10)in_EAX[8]) *
         (float10)in_EAX[6]) * (float10)in_EAX[1])) -
         ((float10)fVar1 * (float10)in_EAX[6] +
         fVar4 * (float10)in_EAX[4] +
         ((float10)(in_EAX[10] * in_EAX[0xc]) - (float10)(in_EAX[0xe] * in_EAX[8])) *
         (float10)in_EAX[5]) * (float10)in_EAX[3];
}

