/* speed.exe 006df8f0 FUN_006df8f0; analysis pseudocode, not buildable source.
 * calls 006cb240 FUN_006cb240
 * calls 006c1990 FUN_006c1990
 * calls 006c1780 FUN_006c1780
 * calls 006c2760 FUN_006c2760
 * calls 006dd380 FUN_006dd380
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006df8f0(void)

{
  int iVar1;
  
  if (DAT_00982c34 == 0) {
    FUN_006dd380(&DAT_0093d470);
    DAT_00982c00 = FUN_007c4b80();
  }
  else {
    DAT_00982c00 = 0;
  }
  if (DAT_0093d898 == 0x10de) {
    if (((DAT_0093d89c == 0x322) || (DAT_0093d89c == 0x312)) &&
       (_DAT_008959e4 < (float)DAT_00982c00)) {
      DAT_00982c00 = 3;
    }
  }
  else if ((DAT_0093d898 == 0x1039) && (DAT_0093d89c == 0x6330)) {
    DAT_00982c00 = 0;
  }
  iVar1 = FUN_006cb240();
  if (iVar1 < 0x400) {
    iVar1 = FUN_006c2760();
    if (iVar1 != 0) {
      DAT_00982c31 = 1;
    }
  }
  DAT_0090181c = 0;
  FUN_006c1990();
  if (DAT_0093d898 == 0x1002) {
    iVar1 = FUN_006c2760();
    if (iVar1 != 0) {
      DAT_00901808 = 0;
    }
  }
  FUN_006c1780();
  return;
}

