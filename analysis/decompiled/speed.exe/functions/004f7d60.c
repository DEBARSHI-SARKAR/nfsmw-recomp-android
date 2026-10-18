/* speed.exe 004f7d60 FUN_004f7d60; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004f5a80 FUN_004f5a80
 */

undefined4 __thiscall FUN_004f7d60(undefined4 param_1,byte param_2)

{
  FUN_004f5a80();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

