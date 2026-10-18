/* speed.exe 006c85f0 FUN_006c85f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006c85f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[4];
  fVar2 = param_2[1];
  fVar3 = param_2[5];
  fVar4 = param_2[2];
  *param_1 = (*param_2 + param_2[3]) * _DAT_008933d4;
  param_1[1] = (fVar1 + fVar2) * _DAT_008933d4;
  param_1[2] = (fVar3 + fVar4) * _DAT_008933d4;
  param_1[3] = SQRT((param_2[3] - *param_1) * (param_2[3] - *param_1) +
                    (param_2[4] - param_1[1]) * (param_2[4] - param_1[1]) +
                    (param_2[5] - param_1[2]) * (param_2[5] - param_1[2]));
  return;
}

