/* speed.exe 0047c6f0 FUN_0047c6f0; analysis pseudocode, not buildable source.
 * calls 006bde60 FUN_006bde60
 * calls 0047c250 FUN_0047c250
 * calls 00468af0 FUN_00468af0
 * calls 006bd940 FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0047c6f0(int param_1,float *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  undefined1 local_6d;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [48];
  undefined1 local_20 [8];
  float local_18;
  
  local_6d = 0;
  FUN_006bde60(local_50,param_2);
  local_6c = 0;
  local_68 = local_18;
  while ((fVar10 = (float10)FUN_0047c250(local_20,param_3,param_4), local_6c < 0x10 &&
         ((float10)_DAT_00890968 < fVar10))) {
    local_18 = (float)((float10)local_18 + fVar10);
    local_6c = local_6c + 1;
    local_6d = 1;
    FUN_0047c250(local_20,param_3,param_4);
  }
  fVar9 = local_18 - local_68;
  fVar1 = *(float *)(param_1 + 0x78);
  fVar2 = param_2[2];
  fVar3 = *(float *)(param_1 + 0x74);
  fVar4 = param_2[1];
  fVar5 = *param_2;
  fVar6 = *(float *)(param_1 + 0x70);
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  *(float *)(param_1 + 0x70) = *param_2;
  *(float *)(param_1 + 0x74) = fVar7;
  *(float *)(param_1 + 0x78) = fVar8;
  if ((SQRT(param_4[1] * param_4[1] + *param_4 * *param_4) < _DAT_0089096c) &&
     ((_DAT_00894604 < fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 &&
      (fVar9 < *(float *)(param_1 + 0x6c))))) {
    fVar9 = *(float *)(param_1 + 0x6c);
  }
  *(float *)(param_1 + 0x6c) = fVar9;
  local_18 = (fVar9 + *(float *)(param_1 + 0x68)) * _DAT_00894594;
  *(float *)(param_1 + 0x68) = (fVar9 - local_18) + *(float *)(param_1 + 0x68);
  local_18 = local_18 + local_68;
  FUN_006bd940(&local_60,param_2,param_3);
  if (local_58 < _DAT_00890968 == (local_58 == _DAT_00890968)) {
    local_68 = local_60 * (_DAT_0089096c / local_58);
    local_64 = (_DAT_0089096c / local_58) * local_5c;
    FUN_00468af0(param_2,local_20,param_3,&local_68);
    return local_6d;
  }
  return 0;
}

