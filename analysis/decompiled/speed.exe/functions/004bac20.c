/* speed.exe 004bac20 FUN_004bac20; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081cb91 FUN_0081cb91
 * calls 0081bccb FUN_0081bccb
 * calls 0081ccaa FUN_0081ccaa
 */

undefined4 __fastcall FUN_004bac20(int param_1)

{
  undefined1 local_1c [4];
  undefined4 uStack_18;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  FUN_0081bccb();
  FUN_0081ccaa(*(undefined4 *)(param_1 + 0x14),local_1c);
  FUN_0081bcd9();
  FUN_0081bccb();
  FUN_0081cb91(uStack_18,auStack_10);
  FUN_0081bcd9();
  return uStack_8;
}

