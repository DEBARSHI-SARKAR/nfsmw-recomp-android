/* speed.exe 004f2740 FUN_004f2740; analysis pseudocode, not buildable source.
 * calls 004eb720 FUN_004eb720
 * calls 004ac0e0 FUN_004ac0e0
 */

undefined4 __thiscall FUN_004f2740(undefined4 param_1,byte param_2)

{
  FUN_004eb720();
  if ((param_2 & 1) != 0) {
    FUN_004ac0e0(param_1);
  }
  return param_1;
}

