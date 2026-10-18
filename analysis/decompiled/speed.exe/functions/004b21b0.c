/* speed.exe 004b21b0 FUN_004b21b0; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081cb91 FUN_0081cb91
 * calls 0081bccb FUN_0081bccb
 * calls 0081ccaa FUN_0081ccaa
 */

undefined4 __fastcall FUN_004b21b0(int param_1)

{
  uint local_1c;
  int local_18;
  int local_10 [4];
  
  FUN_0081bccb();
  FUN_0081ccaa(*(undefined4 *)(param_1 + 0x14),&local_1c);
  if (local_18 < 0) {
    FUN_0081bcd9();
  }
  else {
    FUN_0081cb91(local_18,local_10);
    FUN_0081bcd9();
    if ((local_10[0] != 3) || (0 < (int)local_1c)) {
      return 1;
    }
  }
  return 0;
}

