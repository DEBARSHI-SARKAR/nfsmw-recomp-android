/* speed.exe 007220b0 FUN_007220b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007220b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar3 = param_1[2];
  fVar2 = param_1[1];
  fVar4 = (float)(int)*(char *)(param_1 + 3) * _DAT_008b2a08;
  fVar5 = (float)(int)*(char *)((int)param_1 + 0xd) * _DAT_008b2a08;
  fVar6 = (float)(int)*(char *)((int)param_1 + 0xe) * _DAT_008b2a08;
  *param_2 = fVar4 + fVar1;
  param_2[1] = fVar5 + fVar2;
  param_2[2] = fVar6 + fVar3;
  *param_3 = fVar1 - fVar4;
  param_3[1] = fVar2 - fVar5;
  param_3[2] = fVar3 - fVar6;
  return;
}

