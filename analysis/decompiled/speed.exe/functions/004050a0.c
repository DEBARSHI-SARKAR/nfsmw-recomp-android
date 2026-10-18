/* speed.exe 004050a0 FUN_004050a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004050a0(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)fcos((float10)param_1 * (float10)_DAT_00890510);
  fVar4 = (float10)fsin((float10)param_1 * (float10)_DAT_00890510);
  fVar1 = param_2[2];
  fVar2 = *param_2;
  *param_3 = (float)((float10)(float)fVar3 * (float10)*param_2 - fVar4 * (float10)param_2[2]);
  param_3[2] = (float)(fVar4 * (float10)fVar2 + (float10)(float)fVar3 * (float10)fVar1);
  param_3[1] = param_2[1];
  return;
}

