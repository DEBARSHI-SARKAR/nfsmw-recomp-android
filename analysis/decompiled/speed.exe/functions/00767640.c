/* speed.exe 00767640 FUN_00767640; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00767640(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3 - *param_2;
  fVar5 = param_3[2] - param_2[2];
  fVar1 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar4 = _DAT_00890968;
  if (_DAT_008b5a0c < fVar1) {
    fVar4 = ((*param_1 - *param_2) * fVar3 + (param_1[2] - param_2[2]) * fVar5) / fVar1;
  }
  fVar1 = param_2[2];
  fVar2 = *param_2;
  param_4[1] = 0.0;
  *param_4 = fVar3 * fVar4 + fVar2;
  param_4[2] = fVar5 * fVar4 + fVar1;
  return;
}

