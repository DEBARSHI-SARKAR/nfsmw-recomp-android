/* speed.exe 00494110 FUN_00494110; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00494110(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1[3] = 0.0;
  fVar4 = param_3 + param_3;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  fVar3 = param_4 + param_4;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  param_1[0xe] = param_8;
  fVar2 = (param_2 + param_2) * param_5;
  param_1[0xf] = 1.0;
  fVar1 = (param_2 + param_2) * param_2;
  *param_1 = _DAT_0089096c - (fVar3 * param_4 + fVar4 * param_3);
  param_1[4] = param_2 * fVar4 - fVar3 * param_5;
  param_1[8] = fVar3 * param_2 + param_5 * fVar4;
  param_1[1] = param_2 * fVar4 + fVar3 * param_5;
  param_1[5] = _DAT_0089096c - (fVar3 * param_4 + fVar1);
  param_1[9] = fVar3 * param_3 - fVar2;
  param_1[2] = fVar3 * param_2 - param_5 * fVar4;
  param_1[6] = fVar3 * param_3 + fVar2;
  param_1[10] = _DAT_0089096c - (fVar4 * param_3 + fVar1);
  return;
}

