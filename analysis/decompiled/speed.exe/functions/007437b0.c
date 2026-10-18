/* speed.exe 007437b0 FUN_007437b0; analysis pseudocode, not buildable source.
 * calls 0045dc10 FUN_0045dc10
 * calls 0045ded0 FUN_0045ded0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007437b0(float *param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_18;
  
  if (DAT_00916054 == 0) {
    local_18 = 7000.0;
    _DAT_009b27d0 = _DAT_008b4ba8;
    _DAT_009b27d4 = _DAT_00890968;
  }
  else {
    _DAT_009b27d0 = *(float *)(DAT_00916054 + 0x2c);
    _DAT_009b27d4 = *(float *)(DAT_00916054 + 0x30);
    local_18 = *(float *)(DAT_00916054 + 0x34);
  }
  _DAT_009b27d0 = *param_1 - _DAT_009b27d0;
  _DAT_009b27d4 = param_1[1] - _DAT_009b27d4;
  _DAT_009b27d8 = param_1[2] - local_18;
  local_38 = _DAT_009b27d4 * _DAT_009b27d4 + _DAT_009b27d0 * _DAT_009b27d0;
  local_30 = _DAT_009b27d0;
  uVar3 = FUN_0045ded0(SQRT(local_38),-_DAT_009b27d8);
  if (uVar3 < 4000) {
    FUN_0045dc10(&local_34,&local_38,4000);
    fVar1 = SQRT(_DAT_009b27d0 * _DAT_009b27d0 +
                 _DAT_009b27d4 * _DAT_009b27d4 + _DAT_009b27d8 * _DAT_009b27d8);
    _DAT_009b27d8 = -(local_34 * fVar1);
    fVar2 = _DAT_0089096c / (ABS(_DAT_009b27d0) + ABS(_DAT_009b27d4));
    _DAT_009b27d0 = _DAT_009b27d0 * fVar2 * fVar1 * local_38;
    _DAT_009b27d4 = fVar2 * _DAT_009b27d4 * fVar1 * local_38;
  }
  if (_DAT_009b27d8 == _DAT_00890968) {
    DAT_009ae498 = 0.0;
    return;
  }
  DAT_009ae498 = _DAT_0089096c / _DAT_009b27d8;
  return;
}

