/* speed.exe 007fbb31 FUN_007fbb31; analysis pseudocode, not buildable source.
 * calls 007fdd95 FUN_007fdd95
 * calls 007fde8f FUN_007fde8f
 * calls 007fc6c6 FUN_007fc6c6
 * calls 007fd784 FUN_007fd784
 */

void FUN_007fbb31(void)

{
  short *psVar1;
  int *piVar2;
  
  DAT_009c6e00 = FUN_007fdd95();
  FUN_007fde8f();
  piVar2 = &DAT_009c1848;
  psVar1 = &DAT_008c3eb8;
  do {
    *piVar2 = (int)*psVar1 / 2 + 2;
    psVar1 = psVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)psVar1 < 0x8c3f38);
  FUN_007fc6c6(&DAT_009c1848,&DAT_009c1848,&DAT_009c1848,7);
  FUN_007fd784();
  return;
}

