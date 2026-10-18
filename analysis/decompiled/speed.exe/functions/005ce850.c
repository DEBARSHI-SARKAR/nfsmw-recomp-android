/* speed.exe 005ce850 FUN_005ce850; analysis pseudocode, not buildable source.
 * calls 007c4410 FUN_007c4410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005ce850(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = param_1[3] / SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1)
  ;
  fVar2 = param_2[3] / SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2)
  ;
  fVar3 = (float10)FUN_007c4410(fVar2 * *param_2,fVar2 * param_2[1],fVar2 * param_2[2],param_2[3],
                                fVar1 * *param_1,fVar1 * param_1[1],fVar1 * param_1[2],param_1[3]);
  return fVar3 * (float10)_DAT_008a2f98;
}

