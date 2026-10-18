/* speed.exe 0081fb38 FUN_0081fb38; analysis pseudocode, not buildable source.
 * calls 00824349 FUN_00824349
 * calls 008243c5 FUN_008243c5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081fb38(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((param_4 * _DAT_008c5c94 - param_3 * _DAT_008c5c94) /
          (param_2 * _DAT_008c5c94 - param_3 * _DAT_008c5c94)) * _DAT_00891654;
  fVar2 = (float10)FUN_008243c5(fVar1);
  *param_1 = (float)fVar2;
  fVar2 = (float10)FUN_00824349(fVar1);
  param_1[1] = (float)fVar2;
  return;
}

