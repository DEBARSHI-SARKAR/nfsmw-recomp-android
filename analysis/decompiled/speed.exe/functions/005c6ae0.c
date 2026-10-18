/* speed.exe 005c6ae0 FUN_005c6ae0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6ae0(undefined4 *param_1,float param_2,undefined4 *param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fsin((float10)param_2 * (float10)_DAT_008a2f94);
  fVar3 = (float10)fcos((float10)param_2 * (float10)_DAT_008a2f94);
  fVar1 = (float)param_1[1];
  *param_3 = *param_1;
  param_3[1] = (float)((float10)fVar1 * fVar3 - fVar2 * (float10)(float)param_1[2]);
  param_3[2] = (float)((float10)fVar1 * fVar2 + fVar3 * (float10)(float)param_1[2]);
  param_3[3] = param_1[3];
  fVar1 = (float)param_1[5];
  param_3[4] = param_1[4];
  param_3[5] = (float)((float10)fVar1 * fVar3 - fVar2 * (float10)(float)param_1[6]);
  param_3[6] = (float)((float10)fVar1 * fVar2 + fVar3 * (float10)(float)param_1[6]);
  param_3[7] = param_1[7];
  fVar1 = (float)param_1[9];
  param_3[8] = param_1[8];
  param_3[9] = (float)((float10)fVar1 * fVar3 - fVar2 * (float10)(float)param_1[10]);
  param_3[10] = (float)(fVar3 * (float10)(float)param_1[10] + (float10)fVar1 * fVar2);
  param_3[0xb] = param_1[0xb];
  fVar1 = (float)param_1[0xd];
  param_3[0xc] = param_1[0xc];
  param_3[0xd] = (float)((float10)fVar1 * fVar3 - fVar2 * (float10)(float)param_1[0xe]);
  param_3[0xe] = (float)((float10)fVar1 * fVar2 + fVar3 * (float10)(float)param_1[0xe]);
  param_3[0xf] = param_1[0xf];
  return;
}

