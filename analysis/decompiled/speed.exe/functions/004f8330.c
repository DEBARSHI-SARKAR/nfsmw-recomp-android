/* speed.exe 004f8330 FUN_004f8330; analysis pseudocode, not buildable source.
 * calls 004f6500 FUN_004f6500
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f8330(undefined4 param_1,byte param_2)

{
  FUN_004f6500();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

