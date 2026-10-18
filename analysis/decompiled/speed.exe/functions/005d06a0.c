/* speed.exe 005d06a0 FUN_005d06a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d06a0(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_1[5] + param_1[10] + *param_1;
  if (_DAT_00890968 < fVar1) {
    fVar1 = SQRT(fVar1 + _DAT_0089096c);
    param_2[3] = _DAT_008933d4 * fVar1;
    fVar1 = _DAT_008933d4 / fVar1;
    *param_2 = (param_1[6] - param_1[9]) * fVar1;
    param_2[1] = (param_1[8] - param_1[2]) * fVar1;
    param_2[2] = (param_1[1] - param_1[4]) * fVar1;
    return;
  }
  if (param_1[5] <= *param_1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 5;
  }
  if (param_1[iVar2] < param_1[10]) {
    fVar1 = SQRT((param_1[10] - (param_1[5] + *param_1)) + _DAT_0089096c);
    param_2[2] = _DAT_008933d4 * fVar1;
    if (fVar1 != _DAT_00890968) {
      fVar1 = _DAT_008933d4 / fVar1;
    }
    param_2[3] = (param_1[1] - param_1[4]) * fVar1;
    *param_2 = (param_1[8] + param_1[2]) * fVar1;
    param_2[1] = (param_1[9] + param_1[6]) * fVar1;
    return;
  }
  if (iVar2 != 0) {
    fVar1 = SQRT((param_1[5] - (*param_1 + param_1[10])) + _DAT_0089096c);
    param_2[1] = _DAT_008933d4 * fVar1;
    if (fVar1 != _DAT_00890968) {
      fVar1 = _DAT_008933d4 / fVar1;
    }
    param_2[3] = (param_1[8] - param_1[2]) * fVar1;
    param_2[2] = (param_1[9] + param_1[6]) * fVar1;
    *param_2 = (param_1[4] + param_1[1]) * fVar1;
    return;
  }
  fVar1 = SQRT((*param_1 - (param_1[5] + param_1[10])) + _DAT_0089096c);
  *param_2 = _DAT_008933d4 * fVar1;
  if (fVar1 != _DAT_00890968) {
    fVar1 = _DAT_008933d4 / fVar1;
  }
  param_2[3] = (param_1[6] - param_1[9]) * fVar1;
  param_2[1] = (param_1[4] + param_1[1]) * fVar1;
  param_2[2] = (param_1[8] + param_1[2]) * fVar1;
  return;
}

