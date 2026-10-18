/* speed.exe 0072c6b0 FUN_0072c6b0; analysis pseudocode, not buildable source.
 * calls 007247a0 FUN_007247a0
 * calls 00729b20 FUN_00729b20
 * calls 007248a0 FUN_007248a0
 * calls 00729bf0 FUN_00729bf0
 */

undefined4 __thiscall FUN_0072c6b0(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  pfVar1 = param_1 + 3;
  if (SQRT((*param_2 - *param_1) * (*param_2 - *param_1) +
           (param_2[1] - param_1[1]) * (param_2[1] - param_1[1])) <= param_4 + *pfVar1) {
    return 0;
  }
  fVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = fVar3;
  if ((param_1[2] != 0.0) && (cVar2 = FUN_007247a0(param_1), cVar2 != '\0')) {
    FUN_007248a0(param_1);
    *pfVar1 = (float)extraout_ST0;
    return 0;
  }
  fVar3 = (float)FUN_00729bf0(param_1);
  param_1[2] = fVar3;
  if (fVar3 == 0.0) {
    FUN_00729b20(param_1,pfVar1);
    return 1;
  }
  FUN_007248a0(param_1);
  *pfVar1 = (float)extraout_ST0_00;
  return 1;
}

