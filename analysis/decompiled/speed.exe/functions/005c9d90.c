/* speed.exe 005c9d90 FUN_005c9d90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005c9d90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*param_3 - (float10)*param_2;
  fVar5 = (float10)param_3[2] - (float10)param_2[2];
  fVar1 = (float)(fVar4 * fVar4 + fVar5 * fVar5);
  fVar6 = (((float10)*param_1 - (float10)*param_2) * fVar4 +
          ((float10)param_1[2] - (float10)param_2[2]) * fVar5) / (float10)fVar1;
  fVar2 = (float)fVar6;
  fVar3 = (float)(((float10)*param_1 - (float10)*param_2) - fVar6 * fVar4);
  fVar4 = (float10)(float)((float10)param_1[2] - (float10)param_2[2]) - (float10)fVar2 * fVar5;
  if ((NAN(fVar2) || NAN(_DAT_00890968)) || fVar2 < _DAT_00890968 == (fVar2 == _DAT_00890968)) {
    if ((float10)fVar2 < (float10)_DAT_0089096c) {
      fVar5 = (float10)_DAT_00890968;
    }
    else {
      fVar5 = ((float10)fVar2 - (float10)_DAT_0089096c) * ((float10)fVar2 - (float10)_DAT_0089096c)
              * (float10)fVar1;
    }
  }
  else {
    fVar5 = (float10)fVar2 * (float10)fVar2 * (float10)fVar1;
  }
  return (float10)fVar3 * (float10)fVar3 + fVar4 * fVar4 + fVar5;
}

