/* speed.exe 0040feb0 FUN_0040feb0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040feb0(float *param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005c5e80(param_1[2] * param_1[2] +
                                param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 == (float10)_DAT_00890968) {
    fVar1 = (float10)_DAT_00890968;
  }
  else {
    fVar1 = (float10)_DAT_0089096c / fVar1;
  }
  *param_2 = (float)(fVar1 * (float10)*param_1);
  param_2[1] = (float)(fVar1 * (float10)param_1[1]);
  param_2[2] = (float)(fVar1 * (float10)param_1[2]);
  return;
}

