/* speed.exe 004baba0 FUN_004baba0; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ccaa FUN_0081ccaa
 */

undefined4 __fastcall FUN_004baba0(int param_1)

{
  undefined4 local_c [3];
  
  FUN_0081bccb();
  FUN_0081ccaa(*(undefined4 *)(param_1 + 0x14),local_c);
  FUN_0081bcd9();
  return local_c[0];
}

