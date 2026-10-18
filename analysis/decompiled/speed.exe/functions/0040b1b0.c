/* speed.exe 0040b1b0 FUN_0040b1b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b1b0(float param_1,float *param_2,float *param_3,float param_4,float *param_5,
                 float param_6,float *param_7)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1 * (float10)_DAT_00890cd4;
  if (fVar2 <= (float10)_DAT_00890cd4) {
    fVar2 = (float10)_DAT_00890cd4;
  }
  *param_7 = *param_2;
  param_7[1] = param_2[1];
  param_7[2] = param_2[2];
  fVar1 = *param_3 * *param_5 + param_3[1] * param_5[1] + param_3[2] * param_5[2];
  fVar3 = (float10)param_4;
  if (fVar2 < (float10)param_1) {
    fVar6 = fVar2;
    do {
      fVar3 = fVar2 * (float10)param_6 + fVar3;
      fVar5 = (float10)_DAT_0089096c;
      fVar4 = (float10)fsin(fVar3 * fVar5);
      *param_7 = (float)(fVar4 * (float10)fVar1 * fVar2 + (float10)*param_7);
      fVar5 = (float10)fcos(fVar3 * fVar5);
      param_7[2] = (float)(fVar5 * (float10)fVar1 * fVar2 + (float10)param_7[2]);
      param_7[1] = (float)(fVar2 * (float10)param_5[1] + (float10)param_7[1]);
      fVar6 = fVar2 + fVar6;
    } while (fVar6 < (float10)param_1);
  }
  return;
}

