/* speed.exe 00713b00 FUN_00713b00; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070f1e0 FUN_0070f1e0
 */

undefined4 __thiscall FUN_00713b00(undefined4 param_1,byte param_2)

{
  FUN_0070f1e0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

