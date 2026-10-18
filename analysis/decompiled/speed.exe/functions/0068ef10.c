/* speed.exe 0068ef10 FUN_0068ef10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0068ef10(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  
  if ((_DAT_008f8d44 < param_2) &&
     (ABS((float10)param_1) < (float10)_DAT_008f8d48 * (float10)_DAT_0089551c)) {
    return ABS((float10)param_5) + (float10)_DAT_0089096c;
  }
  fVar1 = (((float10)_DAT_008f8d40 - (float10)_DAT_009377f8) *
           (((float10)param_3 - (float10)_DAT_009377f4) /
           ((float10)_DAT_008f8d38 - (float10)_DAT_009377f4)) + (float10)_DAT_009377f8) *
          ABS((float10)param_1) * (float10)param_4;
  if ((float10)_DAT_008f8d3c < fVar1) {
    fVar1 = (float10)_DAT_008f8d3c;
  }
  return fVar1 + ABS((float10)param_5) + (float10)_DAT_0089096c;
}

