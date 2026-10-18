/* speed.exe 0040a560 FUN_0040a560; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0040a560(float param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_1 * (float10)_DAT_00890634 + (float10)param_2;
  if (_DAT_00890968 <= param_1) {
    fVar1 = (float)fVar2;
    fVar2 = (float10)param_2 * (float10)_DAT_00890e04;
    if (fVar2 < (float10)_DAT_00890e00) {
      fVar2 = (float10)_DAT_00890e00;
    }
    if ((float10)fVar1 <= fVar2) {
      fVar2 = (float10)fVar1;
    }
  }
  else if (fVar2 < (float10)_DAT_00890e08) {
    return (float10)_DAT_00890e08;
  }
  return fVar2;
}

