/* speed.exe 0040fe20 FUN_0040fe20; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040fe20(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  fVar2 = (float10)_DAT_00890968;
  if (_DAT_00890518 < fVar1) {
    fVar2 = (float10)FUN_005c5e80(fVar1);
    if (fVar2 == (float10)_DAT_00890968) {
      fVar2 = (float10)_DAT_00890968;
    }
    else {
      fVar2 = (float10)_DAT_0089096c / fVar2;
    }
  }
  *param_2 = (float)(fVar2 * (float10)*param_1);
  param_2[1] = (float)(fVar2 * (float10)param_1[1]);
  param_2[2] = (float)(fVar2 * (float10)param_1[2]);
  return;
}

