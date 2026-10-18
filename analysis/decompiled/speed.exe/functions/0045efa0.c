/* speed.exe 0045efa0 FUN_0045efa0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045efa0(float *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float local_10 [4];
  
  fVar1 = param_2[5] + *param_2 + param_2[10];
  if (_DAT_00890968 < fVar1) {
    fVar1 = SQRT(fVar1 + _DAT_0089096c);
    param_1[3] = _DAT_008933d4 * fVar1;
    fVar1 = _DAT_008933d4 / fVar1;
    *param_1 = (param_2[6] - param_2[9]) * fVar1;
    param_1[1] = (param_2[8] - param_2[2]) * fVar1;
    param_1[2] = (param_2[1] - param_2[4]) * fVar1;
    return;
  }
  uVar4 = (uint)(*param_2 < param_2[5]);
  if (param_2[uVar4 * 5] < param_2[10]) {
    uVar4 = 2;
  }
  uVar2 = (uVar4 + 1) % 3;
  uVar3 = (uVar2 + 1) % 3;
  fVar1 = SQRT(((param_2[uVar4 * 5] - param_2[uVar2 * 5]) - param_2[uVar3 * 5]) + _DAT_0089096c);
  local_10[uVar4] = _DAT_008933d4 * fVar1;
  if (fVar1 != _DAT_00890968) {
    fVar1 = _DAT_008933d4 / fVar1;
  }
  local_10[3] = (param_2[uVar3 + uVar2 * 4] - param_2[uVar2 + uVar3 * 4]) * fVar1;
  local_10[uVar2] = (param_2[uVar4 + uVar2 * 4] + param_2[uVar2 + uVar4 * 4]) * fVar1;
  local_10[uVar3] = (param_2[uVar4 + uVar3 * 4] + param_2[uVar3 + uVar4 * 4]) * fVar1;
  param_1[1] = local_10[1];
  *param_1 = local_10[0];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  return;
}

