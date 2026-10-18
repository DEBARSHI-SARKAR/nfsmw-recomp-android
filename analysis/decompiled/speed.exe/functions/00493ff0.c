/* speed.exe 00493ff0 FUN_00493ff0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00493ff0(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  fVar4 = param_6 + param_6;
  fVar3 = param_7 + param_7;
  fVar2 = (param_5 + param_5) * param_8;
  fVar1 = (param_5 + param_5) * param_5;
  *param_1 = (_DAT_0089096c - (fVar3 * param_7 + fVar4 * param_6)) * param_2;
  param_1[4] = (param_5 * fVar4 - fVar3 * param_8) * param_3;
  param_1[8] = (fVar3 * param_5 + param_8 * fVar4) * param_4;
  param_1[1] = (param_5 * fVar4 + fVar3 * param_8) * param_2;
  param_1[5] = (_DAT_0089096c - (fVar3 * param_7 + fVar1)) * param_3;
  param_1[9] = (fVar3 * param_6 - fVar2) * param_4;
  param_1[2] = (fVar3 * param_5 - param_8 * fVar4) * param_2;
  param_1[6] = (fVar3 * param_6 + fVar2) * param_3;
  param_1[10] = (_DAT_0089096c - (fVar4 * param_6 + fVar1)) * param_4;
  param_1[0xb] = 0.0;
  param_1[0xc] = param_9;
  param_1[0xd] = param_10;
  param_1[0xe] = param_11;
  param_1[0xf] = 1.0;
  return;
}

