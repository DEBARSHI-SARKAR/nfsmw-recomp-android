/* speed.exe 005cb420 FUN_005cb420; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cb420(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_008a2f94;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  fVar1 = (float10)fcos((float10)param_2 * fVar2);
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[5] = 1.0;
  param_1[0xf] = 1.0;
  fVar2 = (float10)fsin((float10)(float)((float10)param_2 * fVar2));
  *param_1 = (float)fVar1;
  param_1[10] = (float)fVar1;
  param_1[2] = (float)-fVar2;
  param_1[8] = (float)fVar2;
  return;
}

