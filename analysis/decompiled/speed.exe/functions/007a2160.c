/* speed.exe 007a2160 FUN_007a2160; analysis pseudocode, not buildable source.
 * calls 00516e10 FUN_00516e10
 * calls 00516e20 FUN_00516e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007a2160(void)

{
  int iVar1;
  
  FUN_00516e10();
  iVar1 = FUN_00516e20();
  if (iVar1 == 2) {
    return (float10)_DAT_008b719c;
  }
  if ((iVar1 != 3) && (iVar1 != 5)) {
    return (float10)_DAT_008b7180;
  }
  return (float10)_DAT_00890968;
}

