/* speed.exe 0048dc20 FUN_0048dc20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048dc20(float *param_1,float param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_008933d4;
  fVar1 = (float10)fsin((float10)param_2 * fVar2);
  fVar1 = fVar1 / SQRT((float10)param_1[2] * (float10)param_1[2] +
                       (float10)param_1[1] * (float10)param_1[1] +
                       (float10)*param_1 * (float10)*param_1);
  *param_3 = (float)(fVar1 * (float10)*param_1);
  param_3[1] = (float)(fVar1 * (float10)param_1[1]);
  param_3[2] = (float)(fVar1 * (float10)param_1[2]);
  fVar2 = (float10)fcos((float10)(float)((float10)param_2 * fVar2));
  param_3[3] = (float)fVar2;
  return;
}

