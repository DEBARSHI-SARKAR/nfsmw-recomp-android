/* speed.exe 0068f7b0 FUN_0068f7b0; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068f7b0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(float *)(param_1 + 0xd4) < _DAT_00890968 != (*(float *)(param_1 + 0xd4) == _DAT_00890968)) {
    *(float *)(param_1 + 0xd0) = param_3 / *(float *)(param_1 + 0xc4);
  }
  fVar2 = _DAT_00890968;
  *(float *)(param_1 + 0xf0) = param_3;
  *(float *)(param_1 + 0x108) = param_2;
  fVar1 = _DAT_00890968;
  if (fVar2 < param_4) {
    fVar1 = param_4;
  }
  *(float *)(param_1 + 0xd4) = fVar1;
  if (_DAT_00890968 < *(float *)(param_1 + 200)) {
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0xf8) + 8) + 8 + *(int *)(param_1 + 0x100) * 4) *
            _DAT_008a938c * _DAT_008f8a90 * *(float *)(param_1 + 200);
    if (_DAT_00890968 < *(float *)(param_1 + 0xd0)) {
      fVar1 = -fVar1;
    }
    *(float *)(param_1 + 0xe0) = fVar1 + *(float *)(param_1 + 0xe0);
  }
  if (_DAT_00890968 < *(float *)(param_1 + 0xcc)) {
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0xf8) + 8) + 0x10) * _DAT_008a938c *
            _DAT_008f8a94 * *(float *)(param_1 + 0xcc);
    if (_DAT_00890968 < *(float *)(param_1 + 0xd0)) {
      fVar1 = -fVar1;
    }
    *(float *)(param_1 + 0xe0) = fVar1 + *(float *)(param_1 + 0xe0);
  }
  if (_DAT_00890968 <= param_3) {
    param_4 = param_3;
  }
  else {
    param_4 = -param_3;
  }
  fVar3 = (float10)FUN_005cb5d0(param_2,param_4);
  *(float *)(param_1 + 0xfc) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xc4) - param_3;
  if (_DAT_00890968 < *(float *)(param_1 + 0xcc)) {
    fVar2 = param_3;
    if (param_3 < _DAT_00890968) {
      fVar2 = -param_3;
    }
    if (_DAT_0089096c < fVar2) {
      *(float *)(param_1 + 0xe4) = fVar1;
      goto LAB_0068f94e;
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
LAB_0068f94e:
  fVar3 = (float10)FUN_005c5e80(param_2 * param_2 + fVar1 * fVar1);
  if ((*(float *)(param_1 + 0xcc) <= _DAT_008933d4) || (fVar3 <= (float10)_DAT_0089096c)) {
    fVar4 = (float10)*(float *)(param_1 + 0xe0) / (float10)*(float *)(param_1 + 0xc4);
  }
  else {
    *(undefined1 *)(param_1 + 0x104) = 1;
    fVar4 = ((float10)*(float *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + 0x18 +
                                *(int *)(param_1 + 0x100) * 4) / fVar3) * (float10)param_3 *
            (float10)*(float *)(param_1 + 0xd4) * (float10)_DAT_00890e94;
  }
  *(float *)(param_1 + 0xdc) = (float)fVar4;
  fVar4 = (float10)param_2 *
          (float10)*(float *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + 0x18 +
                             *(int *)(param_1 + 0x100) * 4) * (float10)*(float *)(param_1 + 0xd4) *
          (float10)_DAT_00890e94;
  *(float *)(param_1 + 0xd8) = (float)fVar4;
  if ((float10)_DAT_0089096c < fVar3) {
    *(float *)(param_1 + 0xd8) = (float)(fVar4 / fVar3);
  }
  fVar1 = param_3;
  if (param_3 < _DAT_00890968) {
    fVar1 = -param_3;
  }
  if (fVar1 <= _DAT_0089096c) {
    if (param_2 < _DAT_00890968) {
      param_2 = -param_2;
    }
    if (_DAT_0089096c <= param_2) {
      param_2 = _DAT_0089096c;
    }
    *(float *)(param_1 + 0xd8) = param_2 * *(float *)(param_1 + 0xd8);
  }
  else {
    fVar3 = (float10)fsin((float10)*(float *)(param_1 + 0xfc) * (float10)_DAT_008aabd8);
    *(float *)(param_1 + 0xdc) =
         (float)((float10)*(float *)(param_1 + 0xdc) -
                fVar3 * (float10)*(float *)(param_1 + 0xd8) * (float10)_DAT_008933d4);
  }
  *(float *)(param_1 + 0xd0) =
       ((_DAT_0089096c - *(float *)(param_1 + 0xcc)) / *(float *)(param_1 + 0xc4)) * param_3;
  return;
}

