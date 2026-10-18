/* speed.exe 00696250 FUN_00696250; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall
FUN_00696250(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float10 fVar1;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar1 = (float10)FUN_005c5e80(param_2[2] * param_2[2] +
                                param_2[1] * param_2[1] + *param_2 * *param_2);
  *param_1 = *param_2 * *param_4;
  param_1[1] = param_4[1] * param_2[1];
  param_1[2] = param_4[2] * param_2[2];
  *param_1 = *param_3 * *param_1;
  param_1[1] = param_3[1] * param_1[1];
  param_1[2] = param_3[2] * param_1[2];
  fVar1 = fVar1 * (float10)param_5 * (float10)_DAT_00891068;
  *param_1 = (float)(fVar1 * (float10)*param_1);
  param_1[1] = (float)(fVar1 * (float10)param_1[1]);
  param_1[2] = (float)(fVar1 * (float10)param_1[2]);
  return param_1;
}

