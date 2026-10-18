/* speed.exe 005dcee0 FUN_005dcee0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

float10 FUN_005dcee0(void)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_00454810(0x8f186ac4,0);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_006269b0(4);
  }
  return (float10)*pfVar1;
}

