/* speed.exe 004b0af0 FUN_004b0af0; analysis pseudocode, not buildable source.
 * calls 0081bab9 FUN_0081bab9
 * calls 0081b4ac FUN_0081b4ac
 */

int FUN_004b0af0(int param_1)

{
  if (DAT_008f86f8 == 0) {
    DAT_008f8704 = 0;
    DAT_008f8700 = 0;
    DAT_008f86fc = 0;
    return param_1;
  }
  if (param_1 == 0) {
    FUN_0081b4ac(1);
    FUN_0081bab9();
    FUN_0081b4ac(0);
  }
  else if (param_1 == 1) {
    FUN_0081b4ac(8);
    return 1;
  }
  return param_1;
}

