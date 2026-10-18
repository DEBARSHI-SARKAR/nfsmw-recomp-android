/* speed.exe 0068fd00 FUN_0068fd00; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068fd00(int param_1,int param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)(param_1 + 0xf8) * (float10)*(float *)(param_2 + 0x8c);
  *(float *)(param_1 + 0xf0) = (float)fVar1;
  fVar2 = (float10)_DAT_0089095c;
  param_3[1] = 0.0;
  fVar2 = fVar1 * fVar2 * (float10)_DAT_008aabd8;
  fVar1 = (float10)fcos(fVar2);
  param_3[2] = (float)fVar1;
  fVar2 = (float10)fsin(fVar2);
  *param_3 = (float)fVar2;
  FUN_00401670(param_3,param_2,param_3);
  *param_4 = *param_3;
  param_4[1] = param_3[1];
  param_4[2] = param_3[2];
  return;
}

