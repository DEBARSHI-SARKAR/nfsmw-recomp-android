/* speed.exe 0082279f FUN_0082279f; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082279f(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = (param_2 - param_1) * _DAT_008b2aec;
  *param_4 = (fVar1 + param_1) * *param_3 + *param_4;
  param_4[1] = (fVar1 + fVar1 + param_1) * param_3[1] + param_4[1];
  param_4[2] = (_DAT_008959e4 * fVar1 + param_1) * param_3[2] + param_4[2];
  param_4[3] = (_DAT_00890e98 * fVar1 + param_1) * param_3[3] + param_4[3];
  param_4[4] = (_DAT_00890da4 * fVar1 + param_1) * param_3[4] + param_4[4];
  param_4[5] = (_DAT_00891048 * fVar1 + param_1) * param_3[5] + param_4[5];
  param_4[6] = (_DAT_008a0718 * fVar1 + param_1) * param_3[6] + param_4[6];
  param_4[7] = (_DAT_00890dbc * fVar1 + param_1) * param_3[7] + param_4[7];
  param_4[8] = (_DAT_00890dd8 * fVar1 + param_1) * param_3[8] + param_4[8];
  param_4[9] = (_DAT_00890bf8 * fVar1 + param_1) * param_3[9] + param_4[9];
  param_4[10] = (_DAT_0089d8d4 * fVar1 + param_1) * param_3[10] + param_4[10];
  param_4[0xb] = (_DAT_00891044 * fVar1 + param_1) * param_3[0xb] + param_4[0xb];
  param_4[0xc] = (_DAT_008c5da0 * fVar1 + param_1) * param_3[0xc] + param_4[0xc];
  param_4[0xd] = (_DAT_008918d0 * fVar1 + param_1) * param_3[0xd] + param_4[0xd];
  param_4[0xe] = (_DAT_00890dac * fVar1 + param_1) * param_3[0xe] + param_4[0xe];
  param_4[0xf] = (fVar1 * _DAT_008910f8 + param_1) * param_3[0xf] + param_4[0xf];
  return;
}

