/* speed.exe 006c9440 FUN_006c9440; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c9440(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *param_4 + param_4[2] * param_3[2] + param_4[1] * param_3[1] + param_3[3];
  fVar2 = *param_3 * *param_5 + param_5[2] * param_3[2] + param_5[1] * param_3[1];
  if (fVar2 != _DAT_00890968) {
    fVar2 = _DAT_0089096c / fVar2;
    fVar3 = (param_4[3] - fVar1) * fVar2;
    fVar2 = (-param_4[3] - fVar1) * fVar2;
    fVar1 = fVar2;
    if (fVar3 < fVar2) {
      fVar1 = fVar3;
    }
    *param_1 = fVar1;
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    *param_2 = fVar2;
    return 1;
  }
  if (fVar1 < param_4[3] == (fVar1 == param_4[3])) {
    return 0;
  }
  *param_1 = 0.0;
  *param_2 = 1e+32;
  return 1;
}

