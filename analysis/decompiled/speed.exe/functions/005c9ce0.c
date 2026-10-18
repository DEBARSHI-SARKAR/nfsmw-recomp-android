/* speed.exe 005c9ce0 FUN_005c9ce0; analysis pseudocode, not buildable source.
 */

float10 FUN_005c9ce0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*param_3 - (float10)*param_2;
  fVar5 = (float10)param_3[1] - (float10)param_2[1];
  fVar3 = param_3[2] - param_2[2];
  fVar6 = (((float10)*param_1 - (float10)*param_2) * fVar4 +
          (float10)(param_1[1] - param_2[1]) * fVar5 +
          ((float10)param_1[2] - (float10)param_2[2]) * (float10)fVar3) /
          (fVar4 * fVar4 + fVar5 * fVar5 + (float10)fVar3 * (float10)fVar3);
  fVar1 = (float)fVar6;
  fVar2 = (float)(((float10)*param_1 - (float10)*param_2) - fVar6 * fVar4);
  fVar4 = (float10)(param_1[1] - param_2[1]) - (float10)fVar1 * fVar5;
  fVar5 = (float10)(float)((float10)param_1[2] - (float10)param_2[2]) -
          (float10)fVar1 * (float10)fVar3;
  return (float10)fVar2 * (float10)fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
}

