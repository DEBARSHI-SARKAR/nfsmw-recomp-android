/* speed.exe 00447400 FUN_00447400; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447400(float param_1)

{
  float fVar1;
  
  if (_DAT_0090da38 != _DAT_00890968) {
    _DAT_0090da28 = _DAT_0090da28 + param_1;
    if ((NAN(_DAT_0090da28) || NAN(_DAT_00890968)) ||
        _DAT_0090da28 < _DAT_00890968 == (_DAT_0090da28 == _DAT_00890968)) {
      if (_DAT_0090da38 <= _DAT_0090da28) {
        _DAT_0090da38 = 0.0;
        fVar1 = _DAT_0090da58;
      }
      else {
        fVar1 = (_DAT_0090da28 / _DAT_0090da38) * _DAT_0090da58;
      }
      DAT_009ae8a0 = fVar1 + DAT_0090da48;
    }
    else {
      DAT_009ae8a0 = DAT_0090da48;
    }
  }
  if (_DAT_0090da3c != _DAT_00890968) {
    _DAT_0090da2c = _DAT_0090da2c + param_1;
    if ((NAN(_DAT_0090da2c) || NAN(_DAT_00890968)) ||
        _DAT_0090da2c < _DAT_00890968 == (_DAT_0090da2c == _DAT_00890968)) {
      if (_DAT_0090da3c <= _DAT_0090da2c) {
        _DAT_0090da3c = 0.0;
        fVar1 = _DAT_0090da5c;
      }
      else {
        fVar1 = (_DAT_0090da2c / _DAT_0090da3c) * _DAT_0090da5c;
      }
      DAT_009ae8a4 = fVar1 + DAT_0090da4c;
    }
    else {
      DAT_009ae8a4 = DAT_0090da4c;
    }
  }
  if (_DAT_0090da40 != _DAT_00890968) {
    _DAT_0090da30 = _DAT_0090da30 + param_1;
    if ((NAN(_DAT_0090da30) || NAN(_DAT_00890968)) ||
        _DAT_0090da30 < _DAT_00890968 == (_DAT_0090da30 == _DAT_00890968)) {
      if (_DAT_0090da40 <= _DAT_0090da30) {
        _DAT_0090da40 = 0.0;
        fVar1 = _DAT_0090da60;
      }
      else {
        fVar1 = (_DAT_0090da30 / _DAT_0090da40) * _DAT_0090da60;
      }
      DAT_009ae8a8 = fVar1 + DAT_0090da50;
    }
    else {
      DAT_009ae8a8 = DAT_0090da50;
    }
  }
  if (_DAT_0090da44 != _DAT_00890968) {
    _DAT_0090da34 = _DAT_0090da34 + param_1;
    if ((!NAN(_DAT_0090da34) && !NAN(_DAT_00890968)) &&
        _DAT_0090da34 < _DAT_00890968 != (_DAT_0090da34 == _DAT_00890968)) {
      DAT_009ae8ac = DAT_0090da54;
      return;
    }
    if (_DAT_0090da34 < _DAT_0090da44) {
      DAT_009ae8ac = (_DAT_0090da34 / _DAT_0090da44) * _DAT_0090da64 + DAT_0090da54;
      return;
    }
    _DAT_0090da44 = 0.0;
    DAT_009ae8ac = _DAT_0090da64 + DAT_0090da54;
  }
  return;
}

