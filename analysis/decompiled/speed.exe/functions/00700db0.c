/* speed.exe 00700db0 FUN_00700db0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00700db0(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x28) * _DAT_00895c40 + param_2 * _DAT_00890dc4;
  *(float *)(param_1 + 0x28) = fVar1;
  if (_DAT_00890968 < fVar1) {
    if (_DAT_0089096c < fVar1) {
      fVar1 = _DAT_0089096c;
    }
    *(float *)(param_1 + 0x28) = fVar1;
    return;
  }
  *(float *)(param_1 + 0x28) = _DAT_00890968;
  return;
}

