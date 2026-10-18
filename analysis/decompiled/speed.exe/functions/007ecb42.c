/* speed.exe 007ecb42 FUN_007ecb42; analysis pseudocode, not buildable source.
 */

char * FUN_007ecb42(void)

{
  char *pcVar1;
  
  if ((DAT_009bb0d8 & 0x1000000) == 0) {
    if ((DAT_009bb0d8 & 0x2000000) == 0) {
      if ((DAT_009bb0d8 & 0x4000000) != 0) {
        return "Cyrix";
      }
      pcVar1 = "WinChip";
      if ((DAT_009bb0d8 & 0x8000000) == 0) {
        pcVar1 = "Unknown";
      }
      return pcVar1;
    }
    if ((DAT_009bb0d0 & 0x2000000) != 0) {
      if (1 < DAT_009bb0d4) {
        return "AthlonMP";
      }
      return "AthlonXP";
    }
    return "Athlon";
  }
  if ((DAT_009bb0d0 & 0x2000000) == 0) {
    return "Pentium II";
  }
  if ((DAT_009bb0d0 & 0x4000000) != 0) {
    return "Pentium IV";
  }
  return "Pentium III";
}

