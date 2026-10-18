/* speed.exe 00862e47 FUN_00862e47; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081bcd9 FUN_0081bcd9
 */

void FUN_00862e47(int param_1)

{
  int iVar1;
  
  if (DAT_009c2188 == '\0') {
    return;
  }
  FUN_0081bccb();
  iVar1 = 0;
  if (0 < DAT_009c218a) {
    do {
      if ((&DAT_009c2194)[iVar1] == param_1) {
        DAT_009c218a = DAT_009c218a + -1;
        for (; iVar1 < DAT_009c218a; iVar1 = iVar1 + 1) {
          (&DAT_009c2194)[iVar1] = (&DAT_009c2198)[iVar1];
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_009c218a);
  }
  FUN_0081bcd9();
  return;
}

