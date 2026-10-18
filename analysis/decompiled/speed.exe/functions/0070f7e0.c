/* speed.exe 0070f7e0 FUN_0070f7e0; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 0070f7b0 FUN_0070f7b0
 */

undefined4 __thiscall FUN_0070f7e0(undefined4 param_1,byte param_2)

{
  FUN_0070f7b0();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

