/* speed.exe 004f7b60 FUN_004f7b60; analysis pseudocode, not buildable source.
 * calls 004f5750 FUN_004f5750
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f7b60(undefined4 param_1,byte param_2)

{
  FUN_004f5750();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

