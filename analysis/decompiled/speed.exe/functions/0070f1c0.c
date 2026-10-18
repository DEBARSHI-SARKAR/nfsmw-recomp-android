/* speed.exe 0070f1c0 FUN_0070f1c0; analysis pseudocode, not buildable source.
 * calls 0070f190 FUN_0070f190
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_0070f1c0(undefined4 param_1,byte param_2)

{
  FUN_0070f190();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

