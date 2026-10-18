/* speed.exe 004d8b60 FUN_004d8b60; analysis pseudocode, not buildable source.
 * calls 004d8b80 FUN_004d8b80
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004d8b60(undefined4 param_1,byte param_2)

{
  FUN_004d8b80();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

