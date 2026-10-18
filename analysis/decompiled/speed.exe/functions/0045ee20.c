/* speed.exe 0045ee20 FUN_0045ee20; analysis pseudocode, not buildable source.
 * calls 0045cc70 FUN_0045cc70
 */

void FUN_0045ee20(undefined1 param_1)

{
  (&DAT_0090df50)[DAT_0090e654] = param_1;
  DAT_0090e654 = DAT_0090e654 + 1 & 0x7f;
  if (DAT_0090e654 == 0x7f) {
    DAT_0090dfcf = 0;
    FUN_0045cc70(DAT_0090df08,&DAT_0090df50);
    DAT_0090e654 = 0;
  }
  return;
}

