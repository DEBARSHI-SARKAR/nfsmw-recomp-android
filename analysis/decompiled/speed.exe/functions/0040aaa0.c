/* speed.exe 0040aaa0 FUN_0040aaa0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0040aaa0(float param_1,float param_2)

{
  if (_DAT_00890968 < param_1) {
    if (param_2 <= _DAT_00890968) {
      if (param_1 <= -param_2) goto LAB_0040ab3d;
    }
    else if (param_1 <= param_2) goto LAB_0040aad1;
    return (float10)param_2 / (float10)param_1;
  }
  if (param_2 <= _DAT_00890968) {
    if (-param_2 < -param_1) {
      return (float10)param_2 / (float10)param_1 - (float10)_DAT_00890e98;
    }
LAB_0040ab3d:
    return (float10)_DAT_00890e94 - (float10)param_1 / (float10)param_2;
  }
  if (param_2 < -param_1) {
    return (float10)param_2 / (float10)param_1 + (float10)_DAT_00890e98;
  }
LAB_0040aad1:
  return (float10)_DAT_00890d3c - (float10)param_1 / (float10)param_2;
}

