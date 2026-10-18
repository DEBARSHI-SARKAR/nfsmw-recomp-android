/* speed.exe 00740a30 FUN_00740a30; analysis pseudocode, not buildable source.
 * calls 005cb420 FUN_005cb420
 * calls 004885d0 FUN_004885d0
 * calls 004866c0 FUN_004866c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00740a30(float *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_1[0x19] < _DAT_00890968) {
    fVar4 = (param_2 - param_1[0x1b]) * _DAT_008b2bd4;
    fVar5 = _DAT_00895074;
    if ((fVar4 < _DAT_00895074) && (fVar5 = fVar4, fVar4 < _DAT_008b2bd8)) {
      fVar5 = _DAT_008b2bd8;
    }
    param_1[0x19] = _DAT_0089096c / fVar5;
  }
  if (param_1[0x1b] != param_2) {
    pfVar1 = param_1 + 0x10;
    pfVar2 = param_1 + 0xc;
    pfVar3 = param_1 + 8;
    do {
      fVar4 = param_2 - param_1[0x1b];
      local_64 = _DAT_008970f0;
      if ((fVar4 < _DAT_008970f0) && (local_64 = fVar4, fVar4 < _DAT_008b4b30)) {
        local_64 = -0.016666668;
      }
      param_1[4] = local_64 * *pfVar3 + param_1[4];
      param_1[5] = local_64 * param_1[9] + param_1[5];
      param_1[6] = local_64 * param_1[10] + param_1[6];
      *param_1 = local_64 * param_1[4] + *param_1;
      param_1[1] = local_64 * param_1[5] + param_1[1];
      param_1[2] = local_64 * param_1[6] + param_1[2];
      if (*(char *)(param_1 + 0x1c) == '\0') {
        *pfVar1 = local_64 * param_1[0x14] + *pfVar1;
        param_1[0x11] = local_64 * param_1[0x15] + param_1[0x11];
        param_1[0x12] = local_64 * param_1[0x16] + param_1[0x12];
        param_1[0x13] = local_64 * param_1[0x17] + param_1[0x13];
      }
      FUN_004866c0(pfVar2,pfVar1,&local_50);
      fVar4 = local_64 * _DAT_008933d4;
      *pfVar2 = local_50 * fVar4 + *pfVar2;
      param_1[0xd] = local_4c * fVar4 + param_1[0xd];
      param_1[0xe] = local_48 * fVar4 + param_1[0xe];
      param_1[0xf] = local_44 * fVar4 + param_1[0xf];
      FUN_004885d0(pfVar2);
      FUN_005cb420(&local_40,local_64 * param_1[0x11] * _DAT_00890964);
      fVar4 = *pfVar3;
      fVar5 = param_1[9];
      fVar6 = param_1[10];
      *pfVar3 = local_40 * fVar4 + local_30 * fVar5 + local_20 * fVar6;
      param_1[9] = local_3c * fVar4 + local_2c * fVar5 + local_1c * fVar6;
      param_1[10] = local_38 * fVar4 + local_28 * fVar5 + local_18 * fVar6;
      param_1[0x1b] = local_64 + param_1[0x1b];
    } while (param_1[0x1b] != param_2);
  }
  return;
}

