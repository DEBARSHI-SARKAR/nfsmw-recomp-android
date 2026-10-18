/* speed.exe 0081e063 FUN_0081e063; analysis pseudocode, not buildable source.
 * calls 008224db FUN_008224db
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

undefined4 FUN_0081e063(int param_1)

{
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  FUN_0081bccb();
  FUN_008224db(param_1);
  (&DAT_009c1f44)[param_1] = 0;
  FUN_0081bcd9();
  return 0;
}

