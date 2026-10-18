/* speed.exe 0073d1b0 FUN_0073d1b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0073d1b0(short *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(int)param_1[3] * _DAT_008910f0;
  fVar2 = (float)(int)param_1[6] * _DAT_008b493c;
  *param_2 = (float)(int)*param_1 * _DAT_008910f0;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  fVar1 = (float)(int)param_1[1] * _DAT_008910f0;
  fVar2 = (float)(int)param_1[4] * _DAT_008910f0;
  param_2[6] = (float)(int)param_1[7] * _DAT_008b493c;
  param_2[4] = fVar1;
  param_2[5] = fVar2;
  fVar1 = (float)(int)param_1[2] * _DAT_008910f0;
  fVar2 = (float)(int)param_1[5] * _DAT_008910f0;
  param_2[10] = (float)(int)param_1[8] * _DAT_008b493c;
  param_2[8] = fVar1;
  param_2[9] = fVar2;
  return;
}

