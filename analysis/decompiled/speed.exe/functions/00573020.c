/* speed.exe 00573020 FUN_00573020; analysis pseudocode, not buildable source.
 */

byte FUN_00573020(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 2) {
    return 4;
  }
  return (param_1 != 3) - 1U & 8;
}

