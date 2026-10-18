/* speed.exe 00572300 FUN_00572300; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00572300(byte param_1,float param_2)

{
  if ((param_1 & 1) != 0) {
    return (float10)param_2 * (float10)_DAT_00891068;
  }
  if ((param_1 & 2) != 0) {
    return -(float10)param_2;
  }
  return (float10)_DAT_00890968;
}

