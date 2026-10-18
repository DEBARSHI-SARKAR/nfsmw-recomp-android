/* speed.exe 00762300 FUN_00762300; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00762300(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_005c5e80(param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 < (float10)_DAT_008b5a0c) {
    fVar1 = (float10)_DAT_008b5a0c;
  }
  fVar2 = (float10)_DAT_0089096c;
  *param_1 = (float)((fVar2 / fVar1) * (float10)*param_1);
  param_1[1] = (float)((fVar2 / fVar1) * (float10)param_1[1]);
  return;
}

