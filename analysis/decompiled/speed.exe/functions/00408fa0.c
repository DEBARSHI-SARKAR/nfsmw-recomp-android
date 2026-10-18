/* speed.exe 00408fa0 FUN_00408fa0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00408fa0(float *param_1)

{
  if (_DAT_00890968 < param_1[1]) {
    return (float10)*param_1 / (float10)param_1[1];
  }
  return (float10)_DAT_00890968;
}

