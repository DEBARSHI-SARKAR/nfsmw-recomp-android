/* speed.exe 005dcf00 FUN_005dcf00; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

float10 FUN_005dcf00(void)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_00454810(0xe8c24416,0);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_006269b0(4);
  }
  return (float10)*pfVar1;
}

