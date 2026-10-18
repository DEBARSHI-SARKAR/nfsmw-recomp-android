/* speed.exe 0070ff80 FUN_0070ff80; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070f330 FUN_0070f330
 */

undefined4 __thiscall FUN_0070ff80(undefined4 param_1,byte param_2)

{
  FUN_0070f330();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

