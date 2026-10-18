/* speed.exe 004b24b0 FUN_004b24b0; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ccaa FUN_0081ccaa
 */

uint __fastcall FUN_004b24b0(int param_1)

{
  int iVar1;
  undefined1 local_c [8];
  uint uStack_4;
  
  FUN_0081bccb();
  iVar1 = FUN_0081ccaa(*(undefined4 *)(param_1 + 0x14),local_c);
  FUN_0081bcd9();
  return (iVar1 < 0) - 1 & uStack_4;
}

