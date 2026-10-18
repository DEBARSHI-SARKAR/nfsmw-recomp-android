/* speed.exe 006bd980 FUN_006bd980; analysis pseudocode, not buildable source.
 * calls 0045db30 FUN_0045db30
 * calls 0045dbf0 FUN_0045dbf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bd980(float *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar3 = (float10)FUN_0045dbf0(param_3);
  fVar1 = (float)fVar3;
  fVar3 = (float10)FUN_0045db30(param_3);
  fVar4 = (float10)_DAT_0089096c - (float10)fVar1;
  fVar5 = (float10)*param_2;
  fVar6 = (float10)param_2[1];
  fVar2 = param_2[2];
  fVar7 = fVar5 * fVar4;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  *param_1 = (float)(fVar7 * fVar5 + (float10)fVar1);
  param_1[1] = (float)(fVar7 * fVar6 - (float10)fVar2 * fVar3);
  param_1[2] = (float)(fVar6 * fVar3 + (float10)(float)(fVar7 * (float10)fVar2));
  param_1[4] = (float)((float10)fVar2 * fVar3 + fVar7 * fVar6);
  param_1[5] = (float)((float10)(float)(fVar6 * fVar4) * fVar6 + (float10)fVar1);
  fVar8 = (float10)(float)(fVar6 * fVar4) * (float10)fVar2;
  param_1[6] = (float)(fVar8 - fVar5 * fVar3);
  param_1[8] = (float)(fVar7 * (float10)fVar2) - (float)(fVar6 * fVar3);
  param_1[9] = (float)(fVar5 * fVar3 + fVar8);
  param_1[10] = (float)((float10)fVar2 * (float10)fVar2 * fVar4 + (float10)fVar1);
  return;
}

