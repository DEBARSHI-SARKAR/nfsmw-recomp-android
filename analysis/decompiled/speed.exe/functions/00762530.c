/* speed.exe 00762530 FUN_00762530; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00762530(int param_1,int param_2,float *param_3,float *param_4)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  
  psVar1 = (short *)(param_1 + param_2 * 8);
  *param_4 = (float)(int)*psVar1 * _DAT_00905cf4 + *param_3;
  param_4[1] = (float)(int)psVar1[1] * _DAT_00905cf4 + param_3[1];
  fVar3 = (float)(int)psVar1[2] * _DAT_00905cf4;
  fVar2 = param_3[2];
  param_4[3] = 0.0;
  param_4[2] = fVar3 + fVar2;
  param_4[4] = (float)(int)psVar1[4] * _DAT_00905cf4 + *param_3;
  param_4[5] = (float)(int)psVar1[5] * _DAT_00905cf4 + param_3[1];
  fVar3 = (float)(int)psVar1[6] * _DAT_00905cf4;
  fVar2 = param_3[2];
  param_4[7] = 0.0;
  param_4[6] = fVar3 + fVar2;
  param_4[8] = (float)(int)psVar1[8] * _DAT_00905cf4 + *param_3;
  param_4[9] = (float)(int)psVar1[9] * _DAT_00905cf4 + param_3[1];
  param_4[10] = (float)(int)psVar1[10] * _DAT_00905cf4 + param_3[2];
  *(short *)(param_4 + 0xb) = psVar1[0xb];
  return;
}

