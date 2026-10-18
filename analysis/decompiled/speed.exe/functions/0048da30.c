/* speed.exe 0048da30 FUN_0048da30; analysis pseudocode, not buildable source.
 */

unkbyte10 FUN_0048da30(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  unkbyte10 Var4;
  
  fVar1 = (float10)param_2[2] * (float10)param_1[1] - (float10)param_1[2] * (float10)param_2[1];
  fVar2 = (float10)param_1[2] * (float10)*param_2 - (float10)param_2[2] * (float10)*param_1;
  fVar3 = (float10)*param_1 * (float10)param_2[1] - (float10)*param_2 * (float10)param_1[1];
  Var4 = fpatan(SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3),
                (float10)param_1[1] * (float10)param_2[1] +
                (float10)param_1[2] * (float10)param_2[2] + (float10)*param_1 * (float10)*param_2);
  return Var4;
}

