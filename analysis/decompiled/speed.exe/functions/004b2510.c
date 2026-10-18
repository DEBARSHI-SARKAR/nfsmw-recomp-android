/* speed.exe 004b2510 FUN_004b2510; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081d0a3 FUN_0081d0a3
 */

void __fastcall FUN_004b2510(int param_1)

{
  FUN_0081bccb();
  FUN_0081d0a3(*(undefined4 *)(param_1 + 0x14),0x1000);
  FUN_0081bcd9();
  return;
}

