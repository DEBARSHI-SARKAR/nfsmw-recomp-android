/* speed.exe 0048d8e0 FUN_0048d8e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d8e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar4 = (float10)fcos((float10)*param_1 * (float10)_DAT_008933d4);
  fVar5 = (float10)fcos((float10)param_1[1] * (float10)_DAT_008933d4);
  fVar1 = (float)fVar5;
  fVar5 = (float10)fcos((float10)(param_1[2] * _DAT_008933d4));
  fVar6 = (float10)fsin((float10)*param_1 * (float10)_DAT_008933d4);
  fVar7 = (float10)fsin((float10)param_1[1] * (float10)_DAT_008933d4);
  fVar8 = (float10)fsin((float10)(param_1[2] * _DAT_008933d4));
  fVar3 = (float)fVar5 * (float)fVar4;
  fVar4 = (float10)(float)fVar4 * fVar8;
  fVar5 = (float10)(float)fVar6 * (float10)(float)fVar5;
  fVar2 = (float)(fVar8 * (float10)(float)fVar6);
  *param_2 = (float)((float10)fVar1 * fVar5 - fVar4 * fVar7);
  param_2[1] = (float)((float10)fVar2 * (float10)fVar1 + (float10)fVar3 * fVar7);
  param_2[2] = (float)(fVar4 * (float10)fVar1 - fVar5 * fVar7);
  param_2[3] = (float)((float10)fVar3 * (float10)fVar1 + (float10)fVar2 * fVar7);
  return;
}

