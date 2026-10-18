/* speed.exe 00510ca0 FUN_00510ca0; analysis pseudocode, not buildable source.
 * calls 006515d0 FUN_006515d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00510ca0(void)

{
  float local_8 [2];
  
  FUN_006515d0(local_8);
  if (local_8[0] == _DAT_00890968) {
    return (float10)_DAT_0089096c;
  }
  return (float10)_DAT_0089096c / (float10)local_8[0];
}

