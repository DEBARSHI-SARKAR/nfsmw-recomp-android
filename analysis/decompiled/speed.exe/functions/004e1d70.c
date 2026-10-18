/* speed.exe 004e1d70 FUN_004e1d70; analysis pseudocode, not buildable source.
 * calls 0081e274 FUN_0081e274
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

void __fastcall FUN_004e1d70(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0081bccb();
    FUN_0081e274(*(undefined4 *)(param_1 + 0x1c));
    FUN_0081bcd9();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

