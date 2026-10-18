/* speed.exe 006e83a0 FUN_006e83a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006e83a0(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _DAT_0089096c;
  if ((param_2 < _DAT_0089096c) && (fVar1 = param_2, param_2 < _DAT_00890968)) {
    fVar1 = _DAT_00890968;
  }
  *param_1 = fVar1;
  fVar1 = _DAT_0089096c;
  if ((param_2 < _DAT_0089096c) && (fVar1 = param_2, param_2 < _DAT_00890968)) {
    fVar1 = _DAT_00890968;
  }
  param_1[1] = fVar1;
  fVar1 = _DAT_0089096c;
  if ((param_2 < _DAT_0089096c) && (fVar1 = param_2, param_2 < _DAT_00890968)) {
    param_1[2] = 0.0;
    return;
  }
  param_1[2] = fVar1;
  return;
}

