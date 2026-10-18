/* speed.exe 00695870 FUN_00695870; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00695870(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (_DAT_00890968 < param_1 * param_2) {
    if (fVar1 <= (float10)_DAT_00890968) {
      if (param_2 < param_1) goto LAB_006958af;
    }
    else if (param_1 < param_2) {
LAB_006958af:
      return (float10)param_1;
    }
    fVar1 = (float10)param_2;
  }
  return fVar1;
}

