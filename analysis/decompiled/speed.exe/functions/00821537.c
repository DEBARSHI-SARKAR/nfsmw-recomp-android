/* speed.exe 00821537 FUN_00821537; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081e9e7 FUN_0081e9e7
 */

void FUN_00821537(void)

{
  int iVar1;
  
  iVar1 = DAT_0090bd18 * 0xc;
  DAT_009c22f4 = FUN_0081e9e7(iVar1);
  DAT_009c2324 = DAT_0090bd18 * 4 + DAT_009c22f4;
  DAT_009c2444 = DAT_0090bd18 * 4 + DAT_009c2324;
  FUN_00822050(DAT_009c22f4,iVar1);
  DAT_009c22fc = FUN_0081e9e7(DAT_0090bd18 << 2);
  FUN_00822050(DAT_009c22fc,DAT_0090bd18 << 2);
  DAT_009c2308 = 1;
  return;
}

