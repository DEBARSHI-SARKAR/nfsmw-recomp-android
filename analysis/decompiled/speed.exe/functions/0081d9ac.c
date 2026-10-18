/* speed.exe 0081d9ac FUN_0081d9ac; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081d93a FUN_0081d93a
 */

void __fastcall FUN_0081d9ac(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x46584253)) {
    if (param_1[9] == 0) {
      FUN_0081d93a();
    }
    FUN_00822050(param_1,0x2c);
    FUN_0081bccb();
    FUN_0081eae9(param_1);
    FUN_0081bcd9();
    return;
  }
  return;
}

