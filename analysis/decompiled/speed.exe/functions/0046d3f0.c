/* speed.exe 0046d3f0 FUN_0046d3f0; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 00444fe0 FUN_00444fe0
 * calls 0045ed20 thunk_FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046d3f0(undefined4 *param_1,float param_2,int param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float local_20 [7];
  
  fVar6 = (float10)FUN_0045f340(param_1,(undefined4 *)(param_3 + 0x30));
  FUN_00444fe0(param_1 + 4,param_3);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x34);
  uVar2 = *(undefined4 *)(param_3 + 0x38);
  *param_1 = *(undefined4 *)(param_3 + 0x30);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = *param_4;
  param_1[0x14] = fVar5;
  param_1[0x15] = fVar3;
  param_1[0x16] = fVar4;
  fVar3 = (float)param_1[0x1c];
  fVar4 = SQRT(fVar5 * fVar5 +
               (float)param_1[0x15] * (float)param_1[0x15] +
               (float)param_1[0x16] * (float)param_1[0x16]);
  param_1[0x1c] = fVar4;
  if ((_DAT_00890968 < param_2) && ((float)fVar6 * (_DAT_0089096c / param_2) < _DAT_00894ae4)) {
    local_20[0] = (fVar4 - fVar3) * (_DAT_0089096c / param_2);
    local_20[1] = 0.0;
    local_20[2] = 0.0;
    local_20[3] = 0.0;
    thunk_FUN_006bd940(param_1 + 0x18,param_1 + 4,local_20);
    return;
  }
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  return;
}

