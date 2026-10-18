/* speed.exe 0068a540 FUN_0068a540; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0068a540(int param_1)

{
  if (_DAT_00890968 < *(float *)(param_1 + 0xd0)) {
    return (float10)_DAT_0089096c / (float10)*(float *)(param_1 + 0xd0);
  }
  return (float10)_DAT_00890968;
}

