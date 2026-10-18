/* speed.exe 005d0990 FUN_005d0990; analysis pseudocode, not buildable source.
 * calls 005d06a0 FUN_005d06a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d0990(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar3 = (float10)fcos((float10)*param_1 * (float10)_DAT_008a2f94);
  fVar4 = (float10)fsin((float10)*param_1 * (float10)_DAT_008a2f94);
  fVar5 = (float10)fcos((float10)param_1[1] * (float10)_DAT_008a2f94);
  fVar1 = (float)fVar5;
  fVar5 = (float10)fsin((float10)param_1[1] * (float10)_DAT_008a2f94);
  fVar6 = (float10)fcos((float10)param_1[2] * (float10)_DAT_008a2f94);
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)_DAT_008a2f94);
  fVar2 = (float)fVar7;
  local_40 = (float)((float10)fVar1 * fVar6);
  local_30 = (float)(fVar6 * fVar5 * fVar4 - (float10)fVar2 * fVar3);
  local_20 = (float)((float10)fVar2 * fVar4 + (float10)(float)(fVar6 * fVar5) * fVar3);
  local_3c = fVar2 * fVar1;
  local_2c = (float)(fVar6 * fVar3 + (float10)fVar2 * fVar5 * fVar4);
  local_1c = (float)((float10)(float)((float10)fVar2 * fVar5) * fVar3 - fVar6 * fVar4);
  local_38 = (float)-fVar5;
  local_28 = (float)((float10)fVar1 * fVar4);
  local_18 = (float)((float10)fVar1 * fVar3);
  FUN_005d06a0(&local_40,param_2);
  return;
}

