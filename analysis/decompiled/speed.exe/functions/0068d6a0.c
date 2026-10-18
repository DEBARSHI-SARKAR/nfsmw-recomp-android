/* speed.exe 0068d6a0 FUN_0068d6a0; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0068d6a0(int param_1,float param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float fVar1;
  bool bVar2;
  float10 fVar3;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  param_2 = param_2 * _DAT_008aabd8;
  fVar1 = *(float *)(*(int *)(param_1 + 0x78) + 0x54);
  if (_DAT_008aabd4 < param_2) {
    param_2 = param_2 - _DAT_008aabd8;
  }
  bVar2 = param_2 < _DAT_00890968;
  if (bVar2) {
    param_2 = -param_2;
  }
  local_24 = (fVar1 * param_2) / (param_2 * *(float *)(*(int *)(param_1 + 0x78) + 0x20) + fVar1);
  if (bVar2) {
    fVar1 = -param_2;
    param_2 = -local_24;
    local_24 = fVar1;
  }
  fVar3 = (float10)fcos((float10)param_2);
  local_18 = 0.0;
  local_14 = (float)fVar3;
  fVar3 = (float10)fsin((float10)param_2);
  local_1c = (float)fVar3;
  FUN_00401670(&local_1c,param_3,&local_1c);
  fVar3 = (float10)fcos((float10)local_24);
  local_c = local_18;
  local_10 = local_1c;
  local_8 = local_14;
  *param_5 = local_1c;
  param_5[1] = local_18;
  param_5[2] = local_14;
  param_5[3] = param_2;
  local_18 = 0.0;
  local_14 = (float)fVar3;
  fVar3 = (float10)fsin((float10)local_24);
  local_1c = (float)fVar3;
  local_4 = param_2;
  FUN_00401670(&local_1c,param_3,&local_1c);
  *param_4 = local_1c;
  param_4[1] = local_18;
  param_4[2] = local_14;
  param_4[3] = local_24;
  return;
}

