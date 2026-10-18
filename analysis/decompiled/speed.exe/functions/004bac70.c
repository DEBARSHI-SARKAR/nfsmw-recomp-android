/* speed.exe 004bac70 FUN_004bac70; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081cb91 FUN_0081cb91
 * calls 0081bccb FUN_0081bccb
 * calls 0081ccaa FUN_0081ccaa
 */

undefined4 __fastcall FUN_004bac70(int param_1)

{
  uint local_1c;
  undefined4 uStack_18;
  uint auStack_10 [2];
  int iStack_8;
  
  FUN_0081bccb();
  FUN_0081ccaa(*(undefined4 *)(param_1 + 0x14),&local_1c);
  FUN_0081bcd9();
  if (local_1c == 0) {
    return 1;
  }
  if (local_1c == 1) {
    FUN_0081bccb();
    FUN_0081cb91(uStack_18,auStack_10);
    FUN_0081bcd9();
    if (auStack_10[0] == 3) {
      return 1;
    }
    if (((auStack_10[0] != 0) && (auStack_10[0] != 1)) && (iStack_8 < 100)) {
      return 1;
    }
  }
  return 0;
}

