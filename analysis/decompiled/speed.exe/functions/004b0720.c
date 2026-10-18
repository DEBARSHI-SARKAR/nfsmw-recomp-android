/* speed.exe 004b0720 FUN_004b0720; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b0720(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = _DAT_00890968;
  fVar1 = (param_1[4] - param_1[2]) / (param_1[3] - param_1[2]);
  if (_DAT_00890968 < fVar1) {
    if (_DAT_0089096c < fVar1) {
      fVar1 = _DAT_0089096c;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[5] = (param_1[1] - *param_1) * fVar1 + *param_1;
    return;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = (param_1[1] - *param_1) * fVar2 + *param_1;
  return;
}

