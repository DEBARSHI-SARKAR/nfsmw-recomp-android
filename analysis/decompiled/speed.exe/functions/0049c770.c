/* speed.exe 0049c770 FUN_0049c770; analysis pseudocode, not buildable source.
 * calls 007c4410 FUN_007c4410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0049c770(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((param_2 * param_2 + param_1 * param_1) -
          (param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3)) /
          (param_1 * param_2 * _DAT_00890e94);
  if (fVar1 < _DAT_00895c44) {
    return (float10)_DAT_00895444;
  }
  if (_DAT_00895c40 < fVar1) {
    return (float10)_DAT_00890968;
  }
  fVar2 = (float10)FUN_007c4410();
  return fVar2;
}

