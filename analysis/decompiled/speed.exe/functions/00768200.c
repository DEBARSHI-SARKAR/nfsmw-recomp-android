/* speed.exe 00768200 FUN_00768200; analysis pseudocode, not buildable source.
 * calls 00402690 FUN_00402690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00768200(float *param_1,float *param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
  if (((uint)param_1[0xc] & 1) == 0) {
    return (float10)_DAT_00890968;
  }
  if (((uint)param_1[0xc] & 1) == 0) {
    local_8 = 1.0;
    local_c = _DAT_00890968;
    local_4 = _DAT_00890968;
  }
  else {
    FUN_00402690(&local_c);
    if (local_8 == _DAT_00890968) {
      return (float10)param_1[1];
    }
  }
  return (float10)param_1[1] -
         (((float10)*param_2 - (float10)*param_1) * (float10)local_c +
         ((float10)param_2[2] - (float10)param_1[2]) * (float10)local_4) / (float10)local_8;
}

