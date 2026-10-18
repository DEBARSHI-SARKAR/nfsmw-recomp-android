/* speed.exe 005c7100 FUN_005c7100; analysis pseudocode, not buildable source.
 * calls 005c67f0 FUN_005c67f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7100(undefined4 param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_005c67f0(param_1,&local_c);
  fVar6 = (float10)_DAT_008a2f94;
  param_3[3] = 0.0;
  param_3[7] = 0.0;
  fVar5 = (float10)fsin((float10)param_2 * fVar6);
  param_3[0xb] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xd] = 0.0;
  param_3[0xe] = 0.0;
  param_3[0xf] = 1.0;
  fVar6 = (float10)fcos((float10)param_2 * fVar6);
  fVar1 = (float)fVar6;
  fVar4 = _DAT_0089096c - fVar1;
  fVar2 = local_c * fVar4;
  *param_3 = local_c * fVar2 + fVar1;
  param_3[1] = (float)((float10)local_8 * (float10)fVar2 + fVar5 * (float10)local_4);
  param_3[2] = local_4 * fVar2 - (float)((float10)local_8 * fVar5);
  param_3[4] = (float)((float10)local_8 * (float10)fVar2 - fVar5 * (float10)local_4);
  param_3[5] = local_8 * local_8 * fVar4 + fVar1;
  fVar3 = local_4 * local_8 * fVar4;
  param_3[6] = (float)((float10)local_c * fVar5) + fVar3;
  param_3[8] = local_4 * fVar2 + (float)((float10)local_8 * fVar5);
  param_3[9] = fVar3 - (float)((float10)local_c * fVar5);
  param_3[10] = local_4 * fVar4 * local_4 + fVar1;
  return;
}

