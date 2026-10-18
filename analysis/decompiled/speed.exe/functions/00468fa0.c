/* speed.exe 00468fa0 FUN_00468fa0; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 00444fe0 FUN_00444fe0
 * calls 0045ed20 thunk_FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00468fa0(float *param_1,float param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float local_20 [7];
  
  fVar4 = (float10)FUN_0045f340(param_1 + 8,(float *)(param_3 + 0x30));
  FUN_00444fe0(param_1 + 0x14,param_3);
  param_1[0x22] = 0.0;
  param_1[0x21] = 0.0;
  param_1[0x20] = 0.0;
  param_1[8] = *(float *)(param_3 + 0x30);
  param_1[9] = *(float *)(param_3 + 0x34);
  param_1[10] = *(float *)(param_3 + 0x38);
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  *param_1 = *param_4;
  fVar3 = param_1[4];
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  fVar1 = SQRT(*param_1 * *param_1 + fVar1 * fVar1 + fVar2 * fVar2);
  param_1[4] = fVar1;
  if ((_DAT_00890968 < param_2) && ((float)fVar4 * (_DAT_0089096c / param_2) < _DAT_00894ae4)) {
    local_20[0] = (fVar1 - fVar3) * (_DAT_0089096c / param_2);
    local_20[1] = 0.0;
    local_20[2] = 0.0;
    thunk_FUN_006bd940(param_1 + 0x10,param_1 + 0x14,local_20);
    return;
  }
  param_1[0x12] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x10] = 0.0;
  return;
}

