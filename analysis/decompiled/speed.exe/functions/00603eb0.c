/* speed.exe 00603eb0 FUN_00603eb0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00603eb0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2 + *param_1;
  fVar2 = _DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (fVar2 = fVar1, fVar1 < _DAT_00890968)) {
    fVar2 = _DAT_00890968;
  }
  *param_1 = fVar2;
  fVar1 = param_2 + param_1[1];
  fVar2 = _DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (fVar2 = fVar1, fVar1 < _DAT_00890968)) {
    fVar2 = _DAT_00890968;
  }
  param_1[1] = fVar2;
  param_2 = param_2 + param_1[2];
  fVar1 = _DAT_0089096c;
  if ((param_2 < _DAT_0089096c) && (fVar1 = param_2, param_2 < _DAT_00890968)) {
    param_1[2] = 0.0;
    return;
  }
  param_1[2] = fVar1;
  return;
}

