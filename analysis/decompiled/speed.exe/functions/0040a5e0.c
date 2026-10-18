/* speed.exe 0040a5e0 FUN_0040a5e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040a5e0(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  if (param_2 <= _DAT_00890968) {
    if (*param_1 < param_2) {
      fVar1 = _DAT_00890e0c * (*param_1 - param_2);
      fVar1 = fVar1 * fVar1 * param_5;
      if (fVar1 < _DAT_00890da8) {
        fVar1 = _DAT_00890da8;
      }
      *param_1 = (*param_1 - param_2) * fVar1 + *param_1;
    }
    fVar1 = *param_1;
    if (param_2 < *param_1) {
      fVar1 = param_2;
    }
    fVar1 = fVar1 - param_4 * param_5;
    *param_1 = fVar1;
    fVar1 = -fVar1;
  }
  else {
    if (param_2 < *param_1) {
      fVar1 = _DAT_00890e0c * (*param_1 - param_2);
      fVar1 = fVar1 * fVar1 * param_5;
      if (_DAT_0089096c < fVar1) {
        fVar1 = _DAT_0089096c;
      }
      *param_1 = *param_1 - (*param_1 - param_2) * fVar1;
    }
    fVar1 = *param_1;
    if (*param_1 < param_2) {
      fVar1 = param_2;
    }
    fVar1 = param_4 * param_5 + fVar1;
    *param_1 = fVar1;
  }
  if (param_3 < fVar1) {
    fVar1 = param_3;
  }
  *param_1 = fVar1;
  return;
}

