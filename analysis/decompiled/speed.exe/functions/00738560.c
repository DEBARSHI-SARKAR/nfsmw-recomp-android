/* speed.exe 00738560 FUN_00738560; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00738560(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)*param_1 - *(float *)*param_2;
  if (_DAT_00890968 < fVar1) {
    return 1;
  }
  if (_DAT_00890968 <= fVar1) {
    fVar1 = ((float *)*param_2)[1] - ((float *)*param_1)[1];
    if (_DAT_00890968 < fVar1) {
      return 1;
    }
    if (_DAT_00890968 <= fVar1) {
      return 0;
    }
  }
  return 0xffffffff;
}

