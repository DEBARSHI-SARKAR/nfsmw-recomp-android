/* speed.exe 00460000 FUN_00460000; analysis pseudocode, not buildable source.
 * calls 0045f3c0 FUN_0045f3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00460000(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = *param_1 - *param_2;
  local_4 = param_1[1] - param_2[1];
  local_10 = *param_3 - *param_2;
  local_c = param_3[1] - param_2[1];
  fVar1 = SQRT(local_10 * local_10 + local_c * local_c);
  FUN_0045f3c0(&local_10,&local_10);
  fVar2 = local_8 * local_10 + local_4 * local_c;
  fVar4 = (float10)local_8 * (float10)local_c + -(float10)local_10 * (float10)local_4;
  if (fVar2 < _DAT_00890968) {
    return SQRT((float10)fVar2 * (float10)fVar2 + fVar4 * fVar4);
  }
  if (fVar1 < fVar2) {
    fVar3 = (float10)fVar2 - (float10)fVar1;
    return SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  }
  return ABS(fVar4);
}

