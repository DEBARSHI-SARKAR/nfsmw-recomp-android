/* speed.exe 006e8f50 FUN_006e8f50; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e8f50(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_3 + param_3) * (param_3 + param_3);
  fVar5 = (param_4 + param_4) * (param_4 + param_4);
  fVar3 = (param_5 + param_5) * (param_5 + param_5);
  fVar4 = (fVar3 + fVar1) * _DAT_008a939c;
  fVar6 = (fVar5 + fVar1) * _DAT_008a939c;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  *param_1 = (fVar3 + fVar5) * _DAT_008a939c * param_2 * *param_6;
  param_1[1] = fVar4 * param_2 * fVar1;
  param_1[2] = fVar6 * param_2 * fVar2;
  return;
}

