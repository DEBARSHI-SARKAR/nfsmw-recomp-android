/* speed.exe 004f7f80 FUN_004f7f80; analysis pseudocode, not buildable source.
 * calls 004f5e80 FUN_004f5e80
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f7f80(undefined4 param_1,byte param_2)

{
  FUN_004f5e80();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

