/* speed.exe 006519e0 FUN_006519e0; analysis pseudocode, not buildable source.
 * calls 006512f0 FUN_006512f0
 * calls 006512a0 FUN_006512a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006519e0(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *extraout_ECX;
  float *extraout_ECX_00;
  
  if (*(short *)(param_1 + 10) != 1) {
    if (*(short *)(param_1 + 10) != 2) {
      return;
    }
    param_1[8] = 0.0;
    if (*(short *)((int)param_1 + 0x2a) == 0) {
      *(undefined2 *)(param_1 + 10) = 1;
    }
    if (_DAT_00890968 < param_3) {
      FUN_006512a0(param_3);
      param_1 = extraout_ECX;
    }
    fVar1 = param_1[2] - *param_1;
    param_1[7] = *param_1;
    param_1[6] = param_1[1];
    param_1[4] = (param_1[3] + param_1[1]) - (fVar1 + fVar1);
    param_1[5] = (fVar1 * _DAT_008959e4 - param_1[3]) - (param_1[1] + param_1[1]);
    if (_DAT_00890968 < param_4) {
      FUN_006512f0(param_4);
      param_1 = extraout_ECX_00;
    }
  }
  fVar1 = param_2 / param_1[9] + param_1[8];
  param_1[8] = fVar1;
  if (_DAT_0089096c < fVar1) {
    param_1[8] = 1.0;
    *param_1 = param_1[2];
    param_1[1] = param_1[3];
    *(undefined2 *)(param_1 + 10) = 0;
  }
  fVar1 = param_1[8];
  *param_1 = ((fVar1 * param_1[4] + param_1[5]) * fVar1 + param_1[6]) * fVar1 + param_1[7];
  param_1[1] = (param_1[5] + param_1[5] + fVar1 * param_1[4] * _DAT_008959e4) * fVar1 + param_1[6];
  return;
}

