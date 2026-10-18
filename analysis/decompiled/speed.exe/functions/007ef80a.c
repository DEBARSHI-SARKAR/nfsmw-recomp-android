/* speed.exe 007ef80a FUN_007ef80a; analysis pseudocode, not buildable source.
 * calls 007eedd5 FUN_007eedd5
 * calls 007efeb8 FUN_007efeb8
 * calls 007ef647 FUN_007ef647
 * calls 007ecc96 FUN_007ecc96
 */

undefined4 FUN_007ef80a(void)

{
  int iVar1;
  
  FUN_007ecc96(&DAT_009bb15c);
  while( true ) {
    DAT_009bb170 = 1;
    if (DAT_009bb158 != '\0') {
      FUN_007eedd5();
      return 0;
    }
    while ((DAT_009bb171 == '\0' && (iVar1 = FUN_007efeb8(), iVar1 != 0))) {
      FUN_007ef647(iVar1 + 4,0,0,200);
      (**(code **)(*DAT_009076dc + 4))(iVar1,0);
    }
    FUN_007eedd5();
    DAT_009bb171 = '\0';
    DAT_009bb170 = 0;
    if (DAT_009bb158 != '\0') break;
    FUN_007ecc96(&DAT_009bb15c);
  }
  DAT_009bb170 = 0;
  DAT_009bb171 = 0;
  return 0;
}

