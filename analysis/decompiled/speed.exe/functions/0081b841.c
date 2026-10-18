/* speed.exe 0081b841 FUN_0081b841; analysis pseudocode, not buildable source.
 * calls 00821867 FUN_00821867
 * calls 0081ef6f FUN_0081ef6f
 * calls 0081fed2 FUN_0081fed2
 * calls 0081bcd9 FUN_0081bcd9
 * calls 008205a2 FUN_008205a2
 * calls 0081e6ae FUN_0081e6ae
 * calls 00820ccf FUN_00820ccf
 * calls 0081e784 FUN_0081e784
 * calls 0081e816 FUN_0081e816
 * calls 0081febc FUN_0081febc
 * calls 0081fb87 FUN_0081fb87
 * calls 0081e639 FUN_0081e639
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bccb FUN_0081bccb
 */

undefined4 FUN_0081b841(void)

{
  int iVar1;
  undefined1 local_dc [204];
  undefined1 local_10 [12];
  
  if (DAT_009c2188 == '\x01') {
    if (DAT_009c21d8 != (code *)0x0) {
      (*DAT_009c21d8)();
    }
    if (DAT_009c21f0 != (code *)0x0) {
      (*DAT_009c21f0)();
    }
    iVar1 = FUN_00821867(local_10);
    if (iVar1 < 1) {
      iVar1 = 0;
      if (0 < DAT_0090bd18) {
        do {
          if (*(int *)(DAT_009c22fc + iVar1 * 4) != 0) {
            return 0xfffffffb;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_0090bd18);
      }
      FUN_0081febc();
      FUN_008205a2(1);
      FUN_0081e639(local_dc);
      FUN_0081e816(local_dc);
      FUN_0081ef6f(local_dc,DAT_0090bce4);
      DAT_009c2188 = 0;
      FUN_0081e6ae(local_dc);
      DAT_009c2188 = 1;
      FUN_0081bccb();
      FUN_0081eae9(DAT_009c21f4);
      FUN_0081e784();
      FUN_0081bcd9();
      FUN_00820ccf(1);
      DAT_009c1fd8 = DAT_009c2060 + DAT_009c205f;
      FUN_0081fed2();
      FUN_0081fb87();
      return 0;
    }
  }
  return 0xfffffffb;
}

