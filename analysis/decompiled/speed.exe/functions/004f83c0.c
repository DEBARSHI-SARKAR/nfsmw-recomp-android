/* speed.exe 004f83c0 FUN_004f83c0; analysis pseudocode, not buildable source.
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004f6600 FUN_004f6600
 */

undefined4 __thiscall FUN_004f83c0(undefined4 param_1,byte param_2)

{
  FUN_004f6600();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

